#https://www.hackerrank.com/challenges/swap-case/problem

def swap_case(s):
    #return s.swapcase() #built in python function that makes this too easy
    a=''
    for character in s:
        if character.isalpha():
            if character==character.upper():
                character=character.lower()
            else:
                character=character.upper()
        a+=character
    return a

