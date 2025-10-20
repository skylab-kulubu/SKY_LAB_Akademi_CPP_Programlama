#include <iostream>

// 32 = 2^5, log2(32) = 5
// 63 = 2^(5.99) = log(63) = ~5
// 64 = 2^6
//
// int a = 8.9;
// girdiğimizde a değeri 8 olur, eğer bir ondalık sayı
// int olarak tanımlanırsa her zaman alta yuvarlanır yani
// noktadan sonrası atılır

/*
63 / 2 = 31.5 ~ 31
31 / 2 = 15.5 ~ 15
15 / 2 = 7.5 ~ 7
7 / 2 = 3.5 ~ 3
3 / 2 = 1.5 ~ 1
*/

using namespace std;

int log2_alma(int a) {
  int res = 0;

  for (int i = a; i != 1; i = (i / 2)) {
    res = (res + 1);
  }

  return res;
}

int main() {
  cout << log2_alma(63) << endl;
}
