#include <bits/stdc++.h>
using namespace std;
int main() 
{
int value,i;
long long int sum=0;
vector<int> array;
for(i=0; i<5; i++)
{
        cin>>value;
        sum=sum+value;
        
        array.push_back(value);
}
        sort(array.begin(), array.end());   
        cout<<sum-array[4]<<" "<<sum-array[0];  
        return 0;
}


https://www.hackerrank.com/challenges/mini-max-sum/submissions/code/294508350
