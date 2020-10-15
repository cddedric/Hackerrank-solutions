/*
https://www.hackerrank.com/challenges/printing-pattern-2/
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    for (int i=-n+1;i<n;i++){
        for (int j=-n+1;j<n;j++){
            int max=abs(j);
            if (abs(i)>max){
                max=abs(i);
            }
            printf("%d ",max+1);//found out just printing max caused an off-by-one error for all printed values
        }//close of for j loop
        printf("\n");
    }//close of for i loop

    return 0;
}

