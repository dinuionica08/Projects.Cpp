#include <iostream>
#include <math.h>
using namespace std;
int main() {
  long long n, sum = 0 ;
  cin >> n;
  sum = ( n * (n + 1 ) * ( 2 * n + 1) ) / 6;
  cout << sum;
  return 0;
}
