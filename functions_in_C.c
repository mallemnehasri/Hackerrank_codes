#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int,int,int,int);
int max_of_two(int,int);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a,int b,int c,int d) {
    int x=max_of_two(a,b);
    int y=max_of_two(x,c);
    int z=max_of_two(y,d);
    return z;
}
int max_of_two(int a,int b){
    if (a > b)
        return a;
    else 
        return b;
}
