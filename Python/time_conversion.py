#https://www.hackerrank.com/challenges/time-conversion/problem

#!/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    #
    # Write your code here.
    #
    h=0
    if s[-2]=='A' and s[0:2]=='12':
        s='00'+s[2:]
    if s[-2]=='P' and s[0:2]=='12':
        return '12'+s[2:-2]
    if s[-2]=='P':
        h=int(s[0:2])+12
        if h>=24:
            h-=24
            s='0'+h+s[2:-2]
        else:
            s=str(h)+s[2:-2]
    else:
        s=s[0:-2]
    return s
        

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    f.write(result + '\n')

    f.close()
