#https://www.hackerrank.com/challenges/text-wrap/problem



def wrap(string, max_width):
    for i in range(0,len(string)+1,max_width):
        output_line = string[i:i+max_width]
        if (len(output_line)==max_width):
            print(output_line)
        else:
            return output_line

