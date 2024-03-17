#include <iostream>
using namespace std;
//2311102156 Nisrina Amalia Iffatunnisa

int main() {
    char repeat; // Variabel untuk menyimpan pilihan pengguna untuk mengulangi perhitungan
    do {
        int n_156;
        cout << "Masukkan jumlah elemen array: ";
        cin >> n_156;
        int arr[n_156];

        // Input elemen array
        cout << "Masukkan elemen array:\n";
        for (int i = 0; i < n_156; i++) {
            cout << "Elemen " << i + 1 << ": ";
            cin >> arr[i];
        }
        int choice156;
        cout << "Pilih operasi yang ingin dilakukan:\n";
        cout << "1. Mencari nilai maksimum\n";
        cout << "2. Mencari nilai minimum\n";
        cout << "3. Mencari nilai rata-rata\n";
        cout << "Pilihan: ";
        cin >> choice156;

        switch (choice156) {
            case 1: {
                int max = arr[0];
                for (int i = 1; i < n_156; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                }
                cout << "Nilai maksimum: " << max << endl;
                break;
            }
            case 2: {
                int min = arr[0];
                for (int i = 1; i < n_156; i++) {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                cout << "Nilai minimum: " << min << endl;
                break;
            }
            case 3: {
                int sum = 0;
                for (int i = 0; i < n_156; i++) {
                    sum += arr[i];
                }
                double average = static_cast<double>(sum) / n_156;
                cout << "Nilai rata-rata: " << average << endl;
                break;
            }
            default:
                cout << "Pilihan tidak valid\n";
        }
        // Meminta pengguna apakah ingin mengulangi perhitungan
        cout << "Apakah Anda ingin menghitung lagi? (y/Y/n/N): ";
        cin >> repeat;

        // Jika pengguna tidak ingin mengulangi, tampilkan ucapan terima kasih
        if (repeat == 'n' || repeat == 'N') {
            cout << "Terima kasih telah menggunakan program ini!\n";
        }
    } while (repeat == 'y' || repeat == 'Y');
    return 0;
}
