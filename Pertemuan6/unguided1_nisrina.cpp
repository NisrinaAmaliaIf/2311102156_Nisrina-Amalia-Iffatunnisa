#include <iostream>
#include <stack> //library untuk struktur data stack
#include <string> //library untuk menggunakan string

using namespace std;
//2311102156 Nisrina Amalia Iffatunnisa
bool checkPalindrome_156(string kata156) { //fungsi cek palindrom. menerima string sebagai parameter
  stack<char> charStack; //menginisialisasi stack untuk menyimpan karakter

  for (char c : kata156) {
    c = tolower(c); // Mengubah karakter menjadi huruf kecil
    if (isalpha(c)) { //memeriksa apakah karakter tsb alfanumerik
      charStack.push(c); //jika yes, menambahkan karakter ke stack
    }
  }

  string kata_terbalik156; //menginisialisasi string untuk menyimpan kalimat terbalik
  while (!charStack.empty()) {
    kata_terbalik156 += charStack.top();
    charStack.pop();
  }

  return kata156 == kata_terbalik156; // Mengembalikan true jika string sama dengan kata_terbalik156 (palindrom), false jika tidak
}

int main() {
  for (int i = 1; i <= 2; i++) {
    string kata156;

    cout << "Masukkan kalimat " << i << ": ";
    getline(cin, kata156);

    if (checkPalindrome_156(kata156)) {
      cout << "Kalimat " << kata156 << " adalah palindrom." << endl;
    } else {
      cout << "Kalimat " << kata156 << " bukan palindrom." << endl;
    }
  }

  return 0;
}
