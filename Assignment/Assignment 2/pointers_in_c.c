#include <stdio.h>
#include<stdlib.h>
void update(int *a,int *b) {
    int sum=0,difference =0;
    sum=(*a + *b);
    difference=abs((*a) - (*b));
    *a=sum;
    *b=difference;    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


https://www.hackerrank.com/challenges/pointer-in-c/submissions/code/292519887
