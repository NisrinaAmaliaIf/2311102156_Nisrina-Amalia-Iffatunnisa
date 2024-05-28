#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX = 100; 

void tampilMatrix(string simpul[], int busur[][MAX], int jumlahSimpul) {
    cout << "\nJarak antar kota (graf) oleh Nisrina :" << endl;
    cout << setw(10) << " ";
    for (int i = 0; i < jumlahSimpul; i++) {
        cout << setw(10) << simpul[i];
    }
    cout << endl;
    for (int i = 0; i < jumlahSimpul; i++) {
        cout << setw(10) << simpul[i];
        for (int j = 0; j < jumlahSimpul; j++) {
            cout << setw(10) << busur[i][j];
        }
        cout << endl;
    }
}

int main() {
    int jumlahSimpulNisrina_2311102156;
    cout << "Program Hitung Jarak Antar Kota by.nisrin" <<endl;
    cout << "Silahkan masukkan jumlah simpul: ";
    cin >> jumlahSimpulNisrina_2311102156;
    cin.ignore(); 

    string simpul[MAX];
    int busur[MAX][MAX] = {0};

    cout << "Silahkan masukkan nama simpul:" << endl;
    for (int i = 0; i < jumlahSimpulNisrina_2311102156; i++) {
        cout << "Simpul " << i + 1 << " : ";
        getline(cin, simpul[i]);
    }

    cout << "Silahkan masukkan bobot antar simpul (masukkan 0 jika tidak ada jalur):" << endl;
    for (int i = 0; i < jumlahSimpulNisrina_2311102156; i++) {
        for (int j = 0; j < jumlahSimpulNisrina_2311102156; j++) {
            cout << simpul[i] << " ke " << simpul[j] << " : ";
            cin >> busur[i][j];
        }
    }

    tampilMatrix(simpul, busur, jumlahSimpulNisrina_2311102156);

    return 0;
}
