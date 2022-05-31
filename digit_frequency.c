#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[1000];
    scanf("%[^\n]%*c",s);
    for (int i=0 ;i<10;i++) {
        int j=0;
        int count=0;
        while (s[j] !='\0') {
            int x=(s[j]-'0');
            if (i==x)
                count++;
            j++;
                
        }
        printf("%d ",count);
    }   
    return 0;
}
