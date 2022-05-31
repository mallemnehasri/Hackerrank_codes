#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  
  int s[100]={a,b,c};
  if (n==1)
    return s[0];
  else if (n==2)
    return s[1];
  else if (n==3)
    return s[2];
  else {
      for (int i=3;i<n;i++){
          s[i]=(s[i-1]+s[i-2]+s[i-3]);
      }
      return s[n-1];
  }
  
      
  
  
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
