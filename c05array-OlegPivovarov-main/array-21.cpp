#include <iostream>

using namespace std;

int main() {
  int m, *A, n, i, k = 0;
  cin >> n >> m;
  A = new int[n];
  for (i = 0; i < n; i++) {
    cin >> A[i];
    if (A[i] > m) {
      A[i] = m;
      k++;
    }
  }

  for (i = 0; i < n; i++) {
    cout << A[i] << " ";
  }

  cout << endl << k << endl;
  return 0;
}