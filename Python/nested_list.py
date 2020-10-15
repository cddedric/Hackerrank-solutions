#https://www.hackerrank.com/challenges/nested-list/problem

if __name__ == '__main__':
    grades=[]
    for _ in range(int(input())):
        name = input()
        score = float(input())
        grades.append([name,score])

    other_lowest = sorted(list(set([i for name, i in grades])))[1]#find other scores equivalent to lowest score and store as a list of just names
    print("\n".join([a for a, b in sorted(grades) if b==other_lowest]))#print all lowest scores based off of names