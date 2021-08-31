//  Pointer

//  HackerRank Problem Solved using C++.


#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int t;
    t=*a;
    *a=*a+*b;
    if(t>*b)
    {
        *b=t-*b;
    }
    if(t<*b)
    {
        *b=*b-t;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
