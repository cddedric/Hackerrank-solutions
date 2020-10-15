#https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    
    arr.sort()
    curMax=arr[-1]
    while curMax in arr:
        arr.remove(arr[-1])
    print(arr[-1])