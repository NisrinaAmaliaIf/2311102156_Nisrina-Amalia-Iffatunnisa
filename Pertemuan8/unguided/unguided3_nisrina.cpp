#include <iostream>
using namespace std;
//2311102156 Nisrina Amalia Iffatunnisa

int main(){
  // Deklarasi array
  int n = 10;
  int data[n] = { 9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
  int cari156 = 4; // Angka yang dicari (4)
  int count156 = 0; // Penghitung angka 4

  // Algoritma Sequential Search
  for (int i = 0; i < n; i++) {
    if (data[i] == cari156) {
      count156++; // Menambahkan ke penghitung jika 4 ditemukan
    }
  }

  // Menampilkan hasil
  cout << "Program Sequential Search" <<endl;
  cout << "data : { 9, 4, 1, 4, 7, 10, 5, 4, 12, 4} " <<endl;
  cout << "\nJumlah angka " << cari156 << " ada sebanyak : " << count156 << " buah" << endl;

  return 0;
}
