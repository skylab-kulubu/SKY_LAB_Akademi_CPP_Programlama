#include <iostream>

using namespace std;

int faktoriyel(int a) {
  int sonuc = 1;

  for (int i = 1; i <= a; i += 1) {
    cout << "i: " << i << ", sonuc: " << sonuc << endl;
    sonuc = sonuc * i;
  }

  return sonuc;
}

int main() {
  cout << faktoriyel(5) << endl;
  return 0;
}
