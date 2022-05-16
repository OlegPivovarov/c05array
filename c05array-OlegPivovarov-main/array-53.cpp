#include <iostream>

using namespace std;

int main() {
  int i, j, n, l, k;
  cin >> n;
  int *A = new int[n];

  for (i = 0; i < n; i++) {
    cin >> A[i];
  }

  for (i = 0; i < n; i++) {
    k = 0;
    for (j = 2; j <= A[i]; j++) {
      if (A[i] % j == 0) {
        k++;
      }
    }
    if (k == 1) {
      cout << i << " ";
    }
  }

  return 0;
}