#include <iostream>
using namespace std;

//2311102156 Nisrina Amalia Iffatunnisa
int main() {
    int n;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n; //variabel n untuk menyimpan jumlah/panjang elemen array
    int arr[n];

    // meminta pengguna untuk memasukkan data ke dalam array
    cout << "Masukkan " << n << " elemen array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    //menampilkan data array yang telah dimasukkan sebelumnya
    cout << "Data Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //memeriksa data, jika tidak habis dibagi 2 maka termasuk nomor ganjil
    cout << "Nomor ganjil: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    //memeriksa data, jika habis dibagi 2 maka termasuk nomor genap
    cout << "Nomor genap: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
