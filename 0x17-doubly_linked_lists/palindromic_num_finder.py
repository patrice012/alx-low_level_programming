#!/usr/bin/python3

def get_num(a:int)-> int:
    if a > 9:
        raise ValueError("max number should be 9")
    pal_dic = {
	    "1": 1, "2": 10, "3": 100, "4": 1000, "5": 10000,
	    "6": 100000, "7": 1000000, "8": 10000000, "9": 100000000
    }
    if str(a) in pal_dic:
        base = pal_dic.get(str(a))
        end = pal_dic.get(str(int(a) + 1))
        largest_palindrome = 0

        for i in range(int(base), int(end)):
            for j in range(int(base), int(end)):
                product = i * j
                if str(product) == str(product)[::-1] and product > largest_palindrome:
                    largest_palindrome = product
    return largest_palindrome

if __name__ == "__main__":
    from sys import argv, exit

    try:
        a = int(argv[1])
    except IndexError:
        print("One argument is required!\nUsage: ./file_name.py number")
        exit(1)
    pal = get_num(a)
    print(pal)
