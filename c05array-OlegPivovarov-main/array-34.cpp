#include <iostream>

using namespace std;

int main() {
  int n, *A, i, k = 1, max = 0;
  cin >> n;
  A = new int[n];
  for (i = 0; i < n; i++) {
    cin >> A[i];
  }
  
  for (i = 0; i < n; i++) {
    if (A[i] < 0 && A[i + 1] < 0) {
      k++;
      if (k > max) {
        max = k;
      }
    } else k = 1;
  }

  cout << max << endl; 
  return 0;
}