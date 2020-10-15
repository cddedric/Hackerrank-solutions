#https://www.hackerrank.com/challenges/compare-the-triplets/

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the compareTriplets function below.
def compareTriplets(a, b):
    comparison= [0,0]
    for i in range(3):
        if a[i]>b[i]:
            comparison[0]+=1
        if b[i]>a[i]:
            comparison[1]+=1
    return comparison

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = compareTriplets(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
