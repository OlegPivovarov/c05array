#include <iostream>

using namespace std;

int main() {
  int n, i;
  float k = 0, max = 0, v;
  cin >> n;
  float A[n];

  for (i = 0; i < n; i++) {
    cin >> A[i];
    k += A[i];
  }

  k /= n;

  for (i = 0; i < n; i++) {
    v = abs(k - A[i]);
    if (v > max) {
      max = v; 
    }
  }

  for (i = 0; i < n; i++) {
    v = abs(k - A[i]);
    if (abs(v - max) < 0.00001) {
      k = A[i];
      break;
    }
  }

  cout << k << endl;
  return 0;
}