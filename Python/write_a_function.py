#https://www.hackerrank.com/challenges/write-a-function/problem

def is_leap(year):
    leap = False
    
    # Write your logic here
    if year %4==0:
        leap=True
        if year%100==0 and not year%400==0:
            leap=False

    
    return leap