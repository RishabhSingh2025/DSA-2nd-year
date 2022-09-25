#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c,d;
    scanf("%d %d \n", &a,&b);
	scanf("%f %f \n",&c,&d);
    int sum1=a+b;
    int difference1=a-b;
    float sum2=c+d;
    float difference2=c-d;
    printf("%d %d \n",sum1,difference1);
    printf("%.1f %.1f \n",sum2,difference2);
    return 0;
}


https://www.hackerrank.com/challenges/sum-numbers-c/submissions/code/292454113
