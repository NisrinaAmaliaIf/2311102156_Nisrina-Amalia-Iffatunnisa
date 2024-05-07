#include <iostream>
#include <stack> //library untuk struktur data stack
#include <string> //library untuk menggunakan string

using namespace std;
//2311102156 Nisrina Amalia Iffatunnisa
int main() {
  stack<char> charStack; //menginisialisasi stack untuk menyimpan karakter
  string kalimat_156, kalimat_terbalik156; //menginisialisasi variabel string untuk kalimat asli dan kalimat terbalik

  cout << "Masukkan kalimat minimal 3 kata: ";
  getline(cin, kalimat_156); //membaca input kalimat dari pengguna

  for (char c : kalimat_156) { //iterasi melalui setiap karakter dalam kalimat
    charStack.push(c); //menambahkan karakter ke stack
  }

  while (!charStack.empty()) {
    kalimat_terbalik156+= charStack.top(); //mengambil karakter teratas dari stack dan menambahkannya ke kakimat_terbalik156
    charStack.pop(); //meenghapus karakter teratas dari stack
  }

  cout << "\nKalimat yang sudah dibalikkan: " << kalimat_terbalik156<< endl;

  return 0;
}
