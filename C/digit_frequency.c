/*
https://www.hackerrank.com/challenges/frequency-of-digits-1/
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s;     //create character for input
    int i;      //integer for counting
    int a[] ={0,0,0,0,0,0,0,0,0,0}; //array for numeral count holding
    while(scanf("%c", &s) == 1)     //while having an input of a character, store character as the char s
        if(s >= '0' && s <= '9')    //if the character given is between 0 and 9
            a[s-'0']+=1;            //type change and add to location in array count
                        
    for(i=0;i<10;i++)               //loop through each digit in array count
        printf("%d ",a[i]);         //print value of each digit
    return 0;
}
