#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "=================================" << endl;
    cout << "       CEK BILANGAN GENAP/GANJIL" << endl;
    cout << "=================================" << endl;

    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka % 2 == 0) {
        cout << "Angka " << angka << " adalah GENAP" << endl;
    }
    else {
        cout << "Angka " << angka << " adalah GANJIL" << endl;
    }

    cout << "=================================" << endl;

    system("pause");

    return 0;
}
