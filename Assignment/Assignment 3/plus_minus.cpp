#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  float positive = 0, negative = 0, zero = 0;
for (int i = 0; i < n; i++) 
{
  int value;
  cin >> value;
  zero = zero+(value == 0);
  positive= positive+(value > 0);
  negative= negative+(value < 0);
}
  zero = zero/ (double)n;
  positive = positive / (double)n;
  negative = negative / (double)n;
  printf("%0.06lf\n%0.06lf\n%0.06lf", positive, negative, zero);
  
   return 0;
}


https://www.hackerrank.com/challenges/plus-minus/submissions/code/294501990
