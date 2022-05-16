/*
Вводится число n, затем массив A из n целочисленных элементов. Под-
считайте, сколько в массиве элементов, больших последнего.
*/

#include <iostream>

using namespace std;

int main() {
	int n, i, k = 0;
	cin >> n;
	int *A = new int[n];
  
  for (i = 0; i < n; i++) {
    cin >> A[i];
  }

  for (i = 0; i < n - 1; i++) {
    if (A[i] > A[n - 1]) {
      k++;
    }
  }
  
  cout << k << endl;
	return 0;
}	