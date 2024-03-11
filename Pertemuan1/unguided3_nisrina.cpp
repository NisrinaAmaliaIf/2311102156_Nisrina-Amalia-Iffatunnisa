#include <iostream>
#include <map> //agar bisa menjalankan fungsi map

using namespace std;

int main() {
    //mendeklarasikan bentuk map dengan kunci berupa integer dan nilai berupa string.
    map<int, string> novel156;

    //menambahkan beberapa elemen ke dalam map
    novel156.emplace(1, "Geez & Ann");
    novel156.emplace(2, "Kata, Tentang Senja yang Kehilangan Langitnya");
    novel156.emplace(3, "Buku Minta Disayang");
    novel156.emplace(4, "Buku Minta Dibanting");
    novel156.emplace(5, "Masih Ingatkah Kau Jalan Pulang");

    //mencetak nilai dari setiap elemen, mengakses nilai berdasarkan key
    cout << "Key 1: " << novel156[1] << endl;
    cout << "Key 2: " << novel156[2] << endl;
    cout << "Key 3: " << novel156[3] << endl;
    cout << "Key 4: " << novel156[4] << endl;
    cout << "Key 5: " << novel156[5] << endl;

    return 0;
}