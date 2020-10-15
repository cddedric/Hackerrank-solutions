/*
https://www.hackerrank.com/challenges/1d-arrays-in-c/
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum=0,h;  
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&h); //no reason to create an array... just deal with numbers
        sum+=h;         //add to a rolling sum
    }
    printf("%d",sum);   //print sum
    return 0;
}

