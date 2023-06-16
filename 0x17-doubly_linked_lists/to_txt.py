#!/usr/bin/python3

if __name__ == "__main__":
    import dis
    import pwd

    with open("crackme4", "rb") as file:
        content = file.read()

    # Process and manipulate the content as needed
    # For example, print the content
    txt = ' '.join([str(byte) for byte in content])
    for byte in content:
        print(dis.opname[int(byte)], end=' ')
