import marshal


def unpack_op(bytecode): 
    extended_arg = 0
    for i in range(0, len(bytecode), 2):
        opcode = bytecode[i]
        if opcode >= dis.HAVE_ARGUMENT:
            oparg = bytecode[i+1] | extended_arg
            extended_arg = (oparg << 8) if opcode == dis.EXTENDED_ARG else 0
        else:
            oparg = None
        yield (i, opcode, oparg)



def find_linestarts(codeobj):
    byte_increments = codeobj.co_lnotab[0::2]
    line_increments = codeobj.co_lnotab[1::2]
    byte = 0
    line = codeobj.co_firstlineno
    linestart_dict = {byte: line}      
    for byte_incr, line_incr in zip(byte_increments,
                                    line_increments):
        byte += byte_incr
        if line_incr >= 0x80:
            line_incr -= 0x100
        line += line_incr
        linestart_dict[byte]=line
    return linestart_dict


def get_argvalue(offset, codeobj, opcode, oparg):
    constants= codeobj.co_consts
    varnames = codeobj.co_varnames
    names = codeobj.co_names
    cell_names = codeobj.co_cellvars + codeobj.co_freevars
    argval = None
    if opcode in dis.hasconst:
        if constants is not None:
            argval = constants[oparg]
            if type(argval)==str or argval==None:
                 argval = repr(argval)
    elif opcode in dis.hasname:
        if names is not None:
            argval = names[oparg]
    elif opcode in dis.hasjrel:
        argval = offset + 2 + oparg
        argval = "to " + repr(argval)
    elif opcode in dis.haslocal:
        if varnames is not None:
            argval = varnames[oparg]
    elif opcode in dis.hascompare:
        argval = dis.cmp_op[oparg]
    elif opcode in dis.hasfree:
        if cell_names is not None:
            argval = cell_names[oparg]
    return argval


def findlabels(codeobj):
    bytecode = codeobj.co_code
    labels = []
    for offset, opcode, oparg in unpack_op(bytecode):
            if opcode in dis.hasjrel:
                label = offset + 2 + oparg
            elif opcode in dis.hasjabs:
                label = oparg
            else:
                continue
            if label not in labels:
                labels.append(label)
    return labels


def disassemble(c): 
    if not(hasattr(c, 'co_code')):
        raise TypeError("The argument should be a code object")
    code_objects = []
    linestarts = find_linestarts(c)
    labels = findlabels(c)
    bytecode = c.co_code
    extended_arg = 0
    for offset, opcode, oparg in unpack_op(bytecode):
        argvalue = get_argvalue(offset, c, opcode, oparg)
        if hasattr(argvalue, 'co_code'):
            code_objects.append(argvalue)
        line_start = linestarts.get(offset, None)
        dis_text =  "{0:4}{1:2}{2:5} {3:<22} {4:3} {5}".format(str(line_start or ''),                                                        
                                                        ">>" if offset in labels else "",
                                                        offset, dis.opname[opcode],                                                             
                                                        oparg if oparg is not None else '',
                                                        "(" + str(argvalue) + ")" if argvalue is not 
                                                                                        None else '')                                                   
        if (line_start and offset):
            print() 
        print(dis_text)
	    
    for oc in code_objects:
        print("\nDisassembly of{}:\n".format(oc))
        disassemble(oc)

with open("crackme3", "rb") as file:
    bytecode = file.read()
code_object = marshal.loads(bytecode)
disassemble(code_object)
