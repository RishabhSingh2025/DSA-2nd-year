#include<bits/stdc++.h>
using namespace std;
int sumOfArray(vector<int>a)
{
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    vector<int>b(n);
    for(int i=0;i<n;i++) cin>>b[i];
    cout<<sumOfArray(b);
    //return 0;
}

https://www.hackerrank.com/challenges/simple-array-sum/submissions/code/292978295
