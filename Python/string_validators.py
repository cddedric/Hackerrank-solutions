#https://www.hackerrank.com/challenges/string-validators/problem


if __name__ == '__main__':
    s = input()
    print(any(c.isalnum() for c in s))  #any itterates through all items
    print(any(c.isalpha() for c in s))  #in this case, characters in string
    print(any(c.isdigit() for c in s))  #can just check if it contains by checking
    print(any(c.islower() for c in s))  #all characters individually
    print(any(c.isupper() for c in s))
    
