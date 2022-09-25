#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a,sum=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
       return 0;
}

https://www.hackerrank.com/challenges/1d-arrays-in-c/submissions/code/292526556
