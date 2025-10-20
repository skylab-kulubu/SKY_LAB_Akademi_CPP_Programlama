#include <iostream>

using namespace std;

int us_al(int taban, int us) {
  int sonuc = 1;

  //              5 + 1     5
  for (int i = 0; i < us; i += 1) {
    sonuc = sonuc * taban; // 5
  }

  return sonuc;
}

// Time complexity:
// us = 5
// 5 + 1 + 5 + 5 + 1 = 17

// us = 10
// 10 + 1 + 10 + 10 + 1 = 32

// 5 => 17
// 10 => 32
// O(N)

// 2 + (3 * N)
// O(N)

// 2 + (3 * N) + N^2
// O(N^2)

int main() {
  cout << us_al(4, 5) << endl; // 4^5 = 4 * 4 * 4 * 4 * 4
  return 0;
}
