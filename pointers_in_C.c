#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int x,y,temp;
    x=temp=*a;
    y=*b;
    (*a)=x+y;
    (*b)=x-y;
    if ((*b)>= 0)
        (*b)=(*b);
    else
        (*b)=-(*b);
       
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
