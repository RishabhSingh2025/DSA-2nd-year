#include<iostream>
using namespace std;
int main()
{
    int n,sum1=0,sum2=0;
    cin>>n;
    int arr1[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            sum1=sum1+arr1[i][j];
            if(i+j==n-1)
            sum2=sum2+arr1[i][j];
        }
    }
    cout<<abs(sum1-sum2);
    return 0;
}


https://www.hackerrank.com/challenges/diagonal-difference/submissions/code/294497253
