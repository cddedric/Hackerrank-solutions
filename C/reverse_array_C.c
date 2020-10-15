/*
https://www.hackerrank.com/challenges/reverse-array-c/
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int *arrr;
    arrr = (int*) malloc(num * sizeof(int));
    for(i=0; i<num; i++){
        arrr[i]=arr[num-i-1];
    }
    arr=arrr;


    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
