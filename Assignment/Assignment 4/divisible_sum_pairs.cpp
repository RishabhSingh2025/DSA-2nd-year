#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        sum=arr1[i]+arr1[j];
        if(i!=j)
        {
        if(sum%m==0 && sum>=m)
        {
            count++;
        }
        
        }
    }
}
     count=count/2;
     cout<<count<<endl;
  return 0;
}


https://www.hackerrank.com/challenges/divisible-sum-pairs/submissions/code/295537232
