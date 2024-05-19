#include <iostream>
#include <string>
using namespace std;
//2311102156 Nisrina Amalia Iffatunnisa

// Fungsi untuk memeriksa apakah karakter adalah huruf vokal
bool adalahVokal156(char c) {
    // Ubah ke huruf kecil untuk menangani huruf vokal besar dan kecil
    c = tolower(c);
    return c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o';
}

// Fungsi dengan binary search untuk menghitung jumlah huruf vokal dalam kalimat
void hitungVokal156(const string& kalimat) {
    int jumlahVokal156 = 0;
    for (size_t i = 0; i < kalimat.length(); ++i) {
        if (adalahVokal156(kalimat[i])) {
            ++jumlahVokal156;
        }
    }
    cout << "Jumlah huruf vokal dalam kalimat adalah: " << jumlahVokal156 << endl;
}

// Fungsi untuk sorting huruf terlebih dahulu
void selection_sort156(string& kalimat) {
    int n = kalimat.length();
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (kalimat[j] < kalimat[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(kalimat[i], kalimat[min_index]);
        }
    }
}

int main() {
    cout << "PROGRAM MENGHITUNG HURUF VOKAL DALAM KALIMAT by.nisrin" << endl;

    string kalimat;
    cout << "\nMasukkan sebuah kalimat: ";
    getline(cin, kalimat);

    selection_sort156(kalimat); // Mengurutkan kalimat secara ascending

    // Menampilkan kalimat dengan spasi antar setiap huruf
    cout << "\nKalimat setelah diurutkan:\n";
    for (size_t i = 0; i < kalimat.length(); ++i) {
        cout << kalimat[i] << " ";
    }
    cout << endl;

    hitungVokal156(kalimat);

    return 0;
}
