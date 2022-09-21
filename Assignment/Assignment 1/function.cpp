#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/


    int max_of_four(int a, int b, int c, int d)
    {
        if(a>b && a>c && a>d)
        {
            return a;
        }
        else if(b>c && b>d)
        {
            return b;
        }
        else if(c>d)
        {
            return c;
        }
        else
        {
            return d;
        }
    }
    int main()
    {
        int a,b,c,d,maxoffour;
        scanf("%d %d %d %d",&a ,&b, &c, &d);
        maxoffour=max_of_four(a,b,c,d);
        printf("%d",maxoffour);
        return 0;
}

https://www.hackerrank.com/challenges/c-tutorial-functions/submissions/code/291825973
