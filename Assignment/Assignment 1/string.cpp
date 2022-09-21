#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    int len1=a.size();
    int len2=b.size();
    cout<<len1<<" "<<len2<<endl;
    cout<<a<<b<<endl;
    char c1 = a[0];
    char c2=b[0];
    a[0]=c2;
    b[0]=c1;
    cout<<a<<" "<<b;
    
return 0;
}


https://www.hackerrank.com/challenges/c-tutorial-strings/submissions/code/291681775
