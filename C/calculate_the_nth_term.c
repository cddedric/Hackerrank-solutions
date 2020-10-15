/*
https://www.hackerrank.com/challenges/recursion-in-c/
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  if (n==1){
      return a;
  }
  else if (n == 2){
      return b;
  }
  else if (n == 3){
      return c;
  }
  else {
      int x = a + b + c;
      if (n==4){
          return x;
    }
    return find_nth_term(--n,b,c,x);
  }

}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
