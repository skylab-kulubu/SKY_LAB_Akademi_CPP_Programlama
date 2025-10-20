/*
 * 1 1 2 3 5 8 13 21 34 55
 */

#include <iostream>

using namespace std;

void fibonacci(int n) {
  int dizi[n];
  dizi[0] = 1;
  dizi[1] = 1;

  for (int i = 2; i < n; i += 1) {
    dizi[i] = dizi[i - 2] + dizi[i - 1];
  }

  cout << dizi[n - 1] << endl;
}

int main() {
  fibonacci(3);
  return 0;
}
