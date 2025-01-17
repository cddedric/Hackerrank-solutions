#https://www.hackerrank.com/challenges/diagonal-difference/problem

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the diagonalDifference function below.
def diagonalDifference(arr):
    left = 0
    right = 0
    for i in range(len(arr)):
        left += arr[i][i]
        right += arr[i][len(arr)-i-1]
    return abs(left-right)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
