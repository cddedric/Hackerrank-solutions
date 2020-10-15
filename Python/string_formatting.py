#https://www.hackerrank.com/challenges/python-string-formatting/problem

def print_formatted(number):
    # your code goes here
    width = len(str(bin(number)).replace('0b',''))

    for i in range(1,number+1):
        integer = str(i).rjust(width,' ')   #right justify the integer that is now a string
        octal = oct(int(i)).replace('0o','',1).rjust(width,' ') #change integer to octal, remove 0o (octal indicator) and right justify in the width, fill with spaces
        binary = bin(int(i)).replace('0b','').rjust(width,' ')
        hexadecimal = hex(int(i)).replace('0x','').upper().rjust(width,' ')
        

        print (integer,octal,hexadecimal,binary)


