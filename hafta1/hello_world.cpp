#include <iostream>

using namespace std;

#define PI 3.14
const int max_value = 100;

int main() {
    cout << "Hello, World!" << endl;

    cout << "PI: " << PI << ", Max Value: " << max_value << endl;

    // Aşağıdaki satırlar hataya neden olur, çünkü sabitler değiştirilmez
    // max_value = 200; // hata
    // PI = 3.14159; // hata
    // max_value++; // hata

    return 0;
}
