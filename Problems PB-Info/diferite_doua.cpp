#include <iostream>
using namespace std;
int main() {
  int n,a[500];
  bool ordine = true;
  cin >> n;
  for ( int i = 1; i <= n; ++i)
      cin >> a[i];
  for ( int i = 1; i < n; ++i ) {
    for ( int j = 1 + i; j <= n; ++j ) {
      if ( a[i] == a[j])
        ordine = false;
    }
  }
  if ( ordine == true) {
    cout << "DA";
  } else {
    cout << "NU";
  }
  return 0;
}
