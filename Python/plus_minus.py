#https://www.hackerrank.com/challenges/plus-minus/

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the plusMinus function below.
def plusMinus(arr):
    pos=0
    neg=0
    zero=0
    count=0
    for element in arr:
        count+=1
        if element >0:
            pos+=1
        if element ==0:
            zero+=1
        if element <0:
            neg+=1
    print("%0.6f" %(pos/count))
    print("%0.6f" %(neg/count))
    print("%0.6f" %(zero/count))

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
