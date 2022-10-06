#include <bits/stdc++.h>

using namespace std;
int main() {
string s;
cin >> s;
int n = s.length();
int hour, minute, second;
hour = (s[0] - '0') * 10 + (s[1] - '0');
minute = (s[3] - '0') * 10 + (s[4] - '0');
second= (s[6] - '0') * 10 + (s[7] - '0');
if (hour < 12 && s[8] == 'P') 
hour += 12;
if (hour == 12 && s[8] == 'A') hour = 0;
printf("%02d:%02d:%02d\n", hour, minute, second);
return 0;
}


https://www.hackerrank.com/challenges/time-conversion/submissions/code/294510604
