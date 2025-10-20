#include <iostream>

using namespace std;

int main() {
    int x = 5;

    // if-else yapısı
    if (x > 3) {
        cout << "x buyuk 3" << endl;
    } else {
        cout << "x 3 veya daha kucuk" << endl;
    }

    // else if kullanımı (yorum satırı olarak bırakıldı)
    /*
    if (x > 3) {
        cout << "x buyuk 3" << endl;
    } else if (x == 3) {
        cout << "x 3'e esittir" << endl;
    } else {
        cout << "x 3'ten kucuktur" << endl;
    }
    */

    int a = 8;
    int b = 5;

    // Mantıksal operatörler
    if (a > b && a > 0) {
        cout << "a, b'den buyuk ve a pozitif" << endl;
    }

    if (a < b || a < 10) {
        cout << "a, b'den kucuk veya a negatif" << endl;
    }

    if (!(a < b)) {
        cout << "a, b'den kucuk degil" << endl;
    }

    // Koşullu operatör (ternary)
    int y = (x > 3) ? 10 : 20; // x 3'ten büyükse y 10, değilse 20
    cout << "y: " << y << endl;

    // Switch-case örneği
    int number;
    cout << "1 veya 2 giriniz: ";
    cin >> number;
    switch (number) {
        case 1:
            cout << "bir" << endl;
            break;
        case 2:
            cout << "iki" << endl;
            break;
        default:
            cout << "diger" << endl;
    }

    int day;
    cout << "haftanin gununu giriniz (1-7): ";
    cin >> day;
    switch (day) {
        case 1:
            cout << "Pazartesi" << endl;
            break;
        case 2:
            cout << "Sali" << endl;
            break;
        case 3:
            cout << "Carsamba" << endl;
            break;
        case 4:
            cout << "Persembe" << endl;
            break;
        case 5:
            cout << "Cuma" << endl;
            break;
        case 6:
            cout << "Cumartesi" << endl;
            break;
        case 7:
            cout << "Pazar" << endl;
            break;
        default:
            cout << "Gecersiz gun" << endl;
    }

    return 0;
}
