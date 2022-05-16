#include <iostream>

using namespace std;

int main() {
  int n, i, j, k = 0, v1, v2;
  int *A;
  float x;
  cin >> n;
  A = new int[n];
  cin >> x;

  for (i = 0; i < n; i++) {
    cin >> A[i];
    if (A[i] < x) {
      v1 = A[k];
      A[k] = A[i];
      for (j = k; j < i; j++) {
        v2 = A[j + 1];
        A[j + 1] = v1;
        v1 = v2;
      }
      k++;
    }
  }

  for (i = 0; i < n; i++) {
    cout << A[i] << " ";
  }
  return 0;
}