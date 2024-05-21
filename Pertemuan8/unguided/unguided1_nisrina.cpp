#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

char cari156; // Untuk menyimpan huruf yang akan dicari

// Mendefinisikan fungsi binarySearch156 yang menerima parameter dataArray bertipe string sebagai data yang akan dicari
void binarySearch_carihuruf156(const string &dataArray)
{
    bool found = false;
    for (size_t i = 0; i < dataArray.length(); ++i)
    {
        if (dataArray[i] == cari156)
        { // Memeriksa apakah huruf pada indeks ke-i dalam dataArray sama dengan huruf yang dicari (cari156)
            cout << "Huruf '" << cari156 << "' ditemukan pada indeks ke - " << i << endl;
            found = true;
        }
    }
    if (!found)
    { // Jika huruf tidak ditemukan setelah iterasi selesai, tampilkan pesan bahwa huruf tidak ditemukan
        cout << "HURUF TIDAK DITEMUKAN" << endl;
    }
}

// Fungsi untuk mengurutkan string menggunakan Selection Sort
void selection_sort156(string &dataArray)
{
    for (size_t i = 0; i < dataArray.length() - 1; ++i)
    {
        size_t min_index = i;
        for (size_t j = i + 1; j < dataArray.length(); ++j)
        {
            if (dataArray[j] < dataArray[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            char temp = dataArray[i];
            dataArray[i] = dataArray[min_index];
            dataArray[min_index] = temp;
        }
    }
}

int main()
{
    cout << "PROGRAM CARI HURUF DALAM KALIMAT DENGAN BINARY SEARCH - by.nisrin" << endl;

    string kalimat156;                     // Untuk menyimpan kalimat yang akan dicari hurufnya
    cout << "\nMasukkan sebuah kalimat: "; // Meminta pengguna untuk memasukkan sebuah kalimat
    getline(cin, kalimat156);

    cout << "Masukkan huruf yang ingin dicari: "; // Meminta pengguna untuk memasukkan huruf yang ingin dicari
    cin >> cari156;

    // Mengurutkan kalimat secara ascending sebelum melakukan pencarian
    selection_sort156(kalimat156);

    // Menampilkan huruf yang sudah diurutkan dengan spasi antara setiap huruf
    cout << "Huruf dalam kalimat setelah diurutkan secara ascending: ";
    for (size_t i = 0; i < kalimat156.length(); ++i)
    {
        cout << kalimat156[i] << " ";
    }
    cout << endl;

    // Melakukan pencarian dengan binary search setelah pengurutan
    binarySearch_carihuruf156(kalimat156);

    // Menunggu satu karakter sebelum program selesai
    _getche();

    return 0;
}
