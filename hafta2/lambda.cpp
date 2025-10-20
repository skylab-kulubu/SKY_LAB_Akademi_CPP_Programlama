#include <iostream>

using namespace std;

int baslat(int a, int b) {
  int x = 12;

  auto bitir = [a, x](int c) {
    return (a + c + x);
  };

  return bitir(b);
}

int main() {
  cout << baslat(3, 4) << endl;
  return 0;
}
