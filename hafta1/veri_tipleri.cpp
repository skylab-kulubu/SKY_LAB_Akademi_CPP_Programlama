#include <iostream>
#include <string>

using namespace std;

// Kullanıcı Tanımlı Veri Tipleri (Struct)
    struct Person {
        string name = "Nilay";
        int age = 19;
    };

int main() {
    // Temel Veri Tipleri
    int a = 5; // Integer veri tipi  -2 milyar ile +2 milyar arası long ise -9 katrilyon ile +9 katrilyon arası
    double b = 5.99; // Double veri tipi    float 7 basamak double 15 basamak hassasiyet
    char c = 'A'; // Character veri tipi 
    bool d = true; // Boolean veri tipi 

    // Türev Veri Tipleri
    int arr[5] = {1, 2, 3, 4, 5}; // Dizi (Array)
    string str = "Merhaba"; // String

    // Operatörler
    int x = 10, y = 20;
    cout << "Toplama: " << (x + y) << endl;       // Toplama
    cout << "Cikarma: " << (x - y) << endl;       // Çıkarma
    cout << "Çarpma: " << (x * y) << endl;        // Çarpma
    cout << "Bolme: " << (x / y) << endl;         // Bölme
    cout << "Mod: " << (x % y) << endl;           // Mod alma

    int toplam = 5, cikarma = 10;
    toplam += a;         // toplam = toplam + a
    cikarma -= a;        // cikarma = cikarma - a

    cout << "Toplam: " << toplam << ", Cikarma: " << cikarma << endl;

    // Kullanıcı Tanımlı Veri Tipleri kullanımı
    Person p;
    cout << "Name: " << p.name << ", Age: " << p.age << endl;

    return 0;
}
