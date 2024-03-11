#include <iostream>
#include <string>
using namespace std;

// struct untuk profil singkat mahasiswa
struct Mahasiswa156{
    string namamhs;
    int tahunLahirmhs;
    string jenisKelaminmhs;
};

// class untuk menggambarkan detail novel (berisi judul, penulis, dan tahun terbit novel)
class Novel156 {
public:
    string judulNovel;
    string penulisNovel;
    int tahunTerbit;
};

int main() {
    cout << "Struct and Class in CPP" <<endl;

    //mendeklarasikan struct Mahasiswa156
    Mahasiswa156 mhs{"Nisrina Amalia Iffatunnisa", 2005, "Perempuan"}; //inisialisasi isi setiap atribut
    cout << "Profil Singkat Mahasiswa" <<endl;
    cout << "Nama Mahasiswa: " << mhs.namamhs <<endl; //menampilkan isi struct
    cout << "Tahun Lahir: " << mhs.tahunLahirmhs <<endl; 
    cout << "Jenis Kelamin: " << mhs.jenisKelaminmhs <<endl;

    //medeklarasikan class Novel156
    Novel156 novel;
    novel.judulNovel= "Pukul Setengah Lima"; //inisialisasi isi atribut judul
    novel.penulisNovel = "Rintik Sedu";
    novel.tahunTerbit = 2023;
    cout << "Novel Terbaik di 2023" <<endl; //menampilkan isi class
    cout << "Judul Novel: " << novel.judulNovel <<endl;
    cout << "Penulis Novel: " << novel.penulisNovel <<endl;
    cout << "Tahun Terbit: " << novel.tahunTerbit <<endl; 
    return 0;
}
