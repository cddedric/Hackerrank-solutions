/*
https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int temp = n,tempDigit;
    int total=0;
    while (n>0){
        total+=(n%10);//look at 1's digit and add to toal
        n=n/10;     //remove 1's digit, repeat until no digits left
    }
    printf("%d", total);
    return 0;
}

