#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int b1,b2,b3;
    cin>>b1>>b2>>b3;
    int a=0,b=0;
    if(a1>b1)
    {
        a++;
    }
    else if(a1<b1)
    {
        b++;
    }
    if(a2>b2)
    {
        a++;
    }
    else if(a2<b2)
    {
        b++;
    }
    if(a3>b3)
    {
        a++;
    }
    else if(a3<b3)
    {
        b++;
    }
    cout<<a<<" "<<b;
    return 0;
}

https://www.hackerrank.com/challenges/compare-the-triplets/submissions/code/294491677
