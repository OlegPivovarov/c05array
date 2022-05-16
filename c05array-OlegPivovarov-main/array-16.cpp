#include <iostream>

using namespace std;

int main() {
  int n, *A, i, k = 0;
  cin >> n;
  A = new int[n];
  for (i = 0; i < n; i++) {
    cin >> A[i];
    if (A[i] == 2) {
      k++;
    }
  }

  cout << "Недопущено: " << k << endl;
  return 0;
}