#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    char arr[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if (n<=9) {
         printf ("%s",arr[n]);  
    }
    else 
     {
         printf("Greater than 9");
    }
    return 0;
}
