#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cout << "iki sayi giriniz: ";
    cin >> num1 >> num2;
    int islem;
    cout << "hangi islemi yapmak istiyorsunuz? (1:toplama, 2:cikarma, 3:carpma, 4:bolme)" << endl;
    cin >> islem;

    switch (islem)
    {
    case 1:
        cout << "toplama islemi secildi" << endl;
        cout << "sonuc: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "cikarma islemi secildi" << endl;
        cout << "sonuc: " << num1 - num2 << endl;
        break;
    case 3:
        cout << "carpma islemi secildi" << endl;
        cout << "sonuc: " << num1 * num2 << endl;
        break;
    case 4:
        cout << "bolme islemi secildi" << endl;
        cout << "sonuc: " << num1 / num2 << endl;
        break;
    default:
        cout << "program sonlandirildi" << endl;
            break;
    }

}
