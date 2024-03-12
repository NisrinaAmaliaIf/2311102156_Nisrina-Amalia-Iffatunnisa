//2311102156 Nisrina Amalia Iffatunnisa
#include <iostream>
#include <cmath> // harus, karena menggunakan fungsi M_PI (pi) luas lingkaran
using namespace std;

char choose156; //tipe data primitif
double sisi, panjang, lebar, alas, tinggi, jariJari; //tipe data primitif
void showMenu156() { //prosedur untuk menampilkan menu
    cout << "===== Kalkulator Bangun Datar by Nisrina =====" << endl;
    cout << "1. Hitung luas persegi" << endl;
    cout << "2. Hitung luas persegi panjang" << endl;
    cout << "3. Hitung luas segitiga" << endl;
    cout << "4. Hitung luas lingkaran" << endl;
    cout << "5. Keluar" << endl;
    cout << "Masukkan pilihan (1-5): ";
    cin >> choose156;
}

// 4 fungsi untuk menghitung luas
double hitungLuasPersegi156() {
    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisi;
    cout << "Jadi, luas persegi adalah " ;
    return sisi * sisi; //mengembalikan nilai luas persegi
}

double hitungLuasPersegiPanjang156() {
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;
    cout << "Jadi, luas persegi panjang adalah  " ;
    return panjang * lebar; //mengembalikan nilai luas persegi panjang
}

double hitungLuasSegitiga156() {
    cout << "Masukkan alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    cout << "Jadi, luas segitiga adalah  ";
    return 0.5 * alas * tinggi; //mengembalikan nilai luas segitiga
}

double hitungLuasLingkaran156() {
    cout << "Masukkan panjang jari-jari lingkaran: ";
    cin >> jariJari;
    cout << "Jadi, luas lingkaran adalah  ";
    return M_PI * pow(jariJari, 2); //mengembalikan nilai luas lingkaran, pow implementasi c-math
}

int main() {
    do { //perulangan untuk menu
        showMenu156();
        switch (choose156) { //kondisi untuk memilih
            case '1': //jika pengguna memilih 1, program menjalankan hitungLuasPersegi
                cout << hitungLuasPersegi156() <<endl;
                break;
            case '2': //jika pengguna memilih 2, program menjalankan hitungLuasPersegiPanjang
                cout << hitungLuasPersegiPanjang156() <<endl;
                break;
            case '3': //jika pengguna memilih 3, program menjalankan hitungLuasSegitiga
               cout<< hitungLuasSegitiga156() <<endl;
                break;
            case '4': //jika pengguna memilih 1, program menjalankan hitungLuasLingkaran
            cout << hitungLuasLingkaran156() <<endl;
                break;
            case '5': //jika pengguna memilih 5, program selesai
                cout << "Terima kasih, program telah dihentikan." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan periksa dan coba lagi." << endl;
        }

    } while (choose156 != '5'); //terus berulang selama tidak sama dengan 5

    return 0;
}


