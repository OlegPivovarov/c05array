#include <iostream>

using namespace std;

int main() {
  int i, j, n, c = 0, m, temp;
  cin >> n >> m;
  int *A = new int[n];

  for (i = 0; i < n; i++) {
    cin >> A[i];
  }

  for (i = m; i < n; i++) {
    j = i;
    while (j > c) {
      temp = A[j];
      A[j] = A[j - 1];
      A[j - 1] = temp;
      j--;
    }
    c++;
  }

  for (i = 0; i < n; i++) {
    cout << A[i] << " "; 
  }
  return 0;
}