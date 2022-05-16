#include <iostream>
 
using namespace std;
 
int main() {
  int n, i, j, k, temp, *A;
  cin >> n;
  A = new int[n];
  for (i = 0; i < n; i++) {
    cin >> A[i];
  }

  bool obmen = false;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (A[j] == 0 && A[j + 1] != 0) {
        temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
        obmen = true;
      }
    }
    if (!obmen) return 0;
  } 

  for (i = 0; i < n; i++) {
    cout << A[i] << " ";
  }
  return 0;
}