#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    long int arr1[n];
    long int sum=0;
    
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr1[i];
    }
    cout<<sum<<endl;
    return 0;
}


https://www.hackerrank.com/challenges/a-very-big-sum/submissions/code/294493420
