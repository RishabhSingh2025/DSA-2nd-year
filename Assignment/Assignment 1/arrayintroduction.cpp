#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}

https://www.hackerrank.com/challenges/arrays-introduction/submissions/code/291829994
