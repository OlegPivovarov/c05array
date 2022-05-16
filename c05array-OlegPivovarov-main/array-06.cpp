#include <iostream>

using namespace std;

int main() {
  int i, n, y, l, r, m;
  cin >> n >> y;
  int *A = new int[n];
  for (i = 0; i < n; i++) {
    cin >> A[i];
  }

  l = 0;
  r = n - 1;
  i = 0;
  while (l < r) {
    m = (l + r) / 2;
    if (A[m] > y) {
      r = m - 1;
    } else if (A[m] < y) {
      l = m + 1;
    } else {
      cout << m << endl;
      return 0;
    }
  }
  
  return 0;
}