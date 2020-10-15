/*
https://www.hackerrank.com/challenges/bitwise-operators-in-c/
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int maxAnd=0,maxOr=0,maxXOR=0,tempAnd,tempOr,tempX;
  for (int i=1;i<n;i++){
      for (int j=i+1;j<=n;j++){
          tempAnd=i&j;
          tempOr=i|j;
          tempX=i^j;

          if (tempAnd>maxAnd && tempAnd<k){maxAnd=tempAnd;}
          if (tempOr>maxOr && tempOr<k){maxOr=tempOr;}
          if (tempX>maxXOR && tempX<k){maxXOR=tempX;}
      }//close of 2nd for loop
  }//close of main i for loop
  printf("%d\n%d\n%d", maxAnd,maxOr,maxXOR);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
