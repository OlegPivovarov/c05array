#include <iostream>

using namespace std;

int main() {
  int n, i, j = 0, j1 = 0, k = 0;
  cin >> n;
  int A[n];

  for (i = 0; i < n; i++) {
    cin >> A[i];
    if (A[i] < 0) {
      k++;
    }
  } 

  if (k != 0) {
    for (i = 0; i < n; i++) {
      if (A[i] < 0) {
        j = i;
        break;
      }
    }
    for (i = n; i > 0; i--) {
      if (A[i] < 0) {
        j1 = i;
        break;
      }
  }
    i = A[j];
    A[j] = A[j1];
    A[j1] = i;
  } else {
    cout << "В массиве нет отрицательных" << endl;
    return 0;
  }

  for (i = 0; i < n; i++) {
    cout << A[i] << " ";
  }
  return 0;
}

