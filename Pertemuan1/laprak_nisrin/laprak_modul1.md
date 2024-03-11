# <h1 align="center">Laporan Praktikum - Modul 1 Tipe Data</h1>
<p align="center">2311102156 - Nisrina Amalia Iffatunnisa</p>

## Dasar Teori

Tipe data adalah adalah sebuah pengklasifikasian data berdasarkan jenis data  nilai yang dapat  disimpan  dan  dioperasikan  oleh  suatu  variabel. Tidak hanya disimpan, tetapi juga bagaimana  data tersebut diinterpretasikan dan diproses oleh komputer. Perlu diperhatikan, pemilihan  tipe  data  yang  tidak  tepat  juga dapat menimbulkan masalah, seperti ketidakefisien penggunaan memori, kesalahan dalam perhitungan, dan kerentanan dalam   keamanan program. Ada beberapa tipe data, antara lain:

1. Tipe Data Primitif, merupakan sebuah tipe data langsung didukung oleh bahasa pemrograman dan sudah ditentukan oleh sistem. Jumlah bit yang dialokasikan untuk setiap tipe data primitif tergantung pada bahasa pemrograman, kompiler, dan sistem operasi. Contoh tipe data primitif adalah Integer (untuk menyimpan bilangan bulat), Float (untuk menyimpan bilangan desimal), Char (untuk menyimpan data berupa sebuah huruf), Boolean (untuk menyimpan nilai boolean, yaitu True dan False), Double (untuk menyimpan bilangan desimal yang memiliki ukuran lebih besar dari float)

2. Tipe Data Abstrak, adalah tipe data tertentu yang didefinisikan oleh programmer sendiri untuk kemudahan pemrograman serta untuk mengakomodasi tipe-tipe data yang tidak secara spesifik diakomodasi oleh bahasa pemrograman yang digunakan.  Abstrak Data Tipe (ADT) dapat berupa tipe data dasar namun diberi nama baru atau berupa kumpulan tipe data yang berbeda yang diberi nama baru. ADT yang umum digunakan meliputi: Linked Lists, Stacks, Queues, Priority Queues, Binary Trees, Dictionaries, Disjoint Sets (Union and Find), Hash Tables, dan Graphs.

    <p> Fitur Class dan Struct sama-sama berfungsi untuk membungkus tipe data di dalamnya sebagai anggota, namun ada perbedaan yang mendasari keduanya adalah pada akses defaultnya. Dimana Struct bersifat public dan Class bersifat private.

3. Tipe Data Koleksi (Collection Data Type), merupakan sebuah tipe data yang berfungsi dalam mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan. Pada tipe data oni, memungkinkan programmer menyimpan, mengelola, dan mengakses sejumlah besar data dengan cara yang terstruktur. Beberapa tipe data koleksi yang umum digunakan dalam pemrograman, antara lain:

    <p>a. Array adalah sebuah struktur data yang memiliki ukuran tetap saat penentuan deklarasi, struktur data statis yang menyimpan elemen-elemen dengan tipe data yang sama. Array memiliki elemen tersebut yang dapat diakses dengan menggunakan indeks.</p>
    <p>b. Vector adalah Standard Template Library (STL) jika di dalam C/C++ memiliki bentuk std::vector. Kemampuannya menyimpan data dalam bentuk elemen-elemen yang alokasi memorinya dilakukan otomatis dan bersebelahan. Vector pada C++ juga dilengkapi dengan fitur-fitur pelengkap seperti element access, iterators, capacity, modifiers</p>
    <p>c. Map digunakan untuk memyimpan, mengakses, dan mengelola data yang terdiri dari pasangan key-value yang unik. Index pada map memungkinkan untuk berupa tipe data selain integer. Pada std::map digunakan Self-Balancing Tree khususnya Red-Black Tree.</p>


## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char op;
    float num1, num2;

    // It allows user to enter operator i.e. +, -, *, /
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // It allows user to enter the operands
    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    // Switch statement begins
    switch (op) {
    // If user enters +
    case '+':
        cout << "Result: " << num1 + num2;
        break;
    // If user enters -
    case '-':
        cout << "Result: " << num1 - num2;
    break;
    // If user enters *
    case '*':
        cout << "Result: " << num1 * num2;
        break;
    // If user enters /
    case '/':
        if (num2 != 0) {
            cout << "Result: " << fixed << setprecision(2) << num1 / num2;
        } else {
            cout << "Error! Division by zero is not allowed.";
        }
        break;
    // If the operator is other than +, -, * or /,
    // error message will display
    default:
        cout << "Error! Operator is not correct";
    } // switch statement ends
    
return 0;
}
```
Kode di atas digunakan untuk menampilkan hasil operasi dari 2 angka dan terdapat case statement, antara lain operasi penambahan (+), pengurangan (-), perkalian (*), dan pembagian (/). Jika operator yang diinputkan oleh pengguna berupa (+), (-), ( * ), atau ( / ), maka program akan menghitung hasil operasi dan menampilkan hasilnya. Jika operator tidak sesuai, program akan menampilkan pesan error.

### 2. Tipe Data Abstrak
```C++
#include <stdio.h>
#include <string.h>

    //Struct
    struct Mahasiswa
        {
            char name[50];
            char address[100];
            int age;
        };

    int main()
        {
            // menggunakan struct
            struct Mahasiswa mhs1, mhs2;
            // mengisi nilai ke struct
            strcpy(mhs1.name, "Dian");
            strcpy(mhs1.address, "Mataram");
            mhs1.age = 22;
            strcpy(mhs2.name, "Bambang");
            strcpy(mhs2.address, "Surabaya");
            mhs2.age = 23;

            // mencetak isi struct
            printf("## Mahasiswa 1 ##\n");
            printf("Nama: %s\n", mhs1.name);
            printf("Alamat: %s\n", mhs1.address);
            printf("Umur: %d\n", mhs1.age);
            printf ("\n");
            printf("## Mahasiswa 2 ##\n");
            printf("Nama: %s\n", mhs2.name);
            printf("Alamat: %s\n", mhs2.address);
            printf("Umur: %d\n", mhs2.age);
            return 0;
        }
```
Kode di atas digunakan untuk menampilkan 2 data mahasiswa, yaitu Dian dan Bambang yang terdiri dari nama, alamat, dan umur. Dengan menggunakan struct Mahasiswa, kode tersebut mengisi nilai ke dalam struct tersebut dengan fungsi strcpy untuk nama dan alamat. Sedangkan umur menggunakan operator (=). Serta untuk mencetak isi struct Mahasiswa menggunakan printf yang diikuti pemanggilan variabel.

### 3. Tipe Data Koleksi

```C++
#include <iostream>
#include <array>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    // Mencetak array dengan tab
    cout << "Isi array pertama : " << nilai[0] << endl;
    cout << "Isi array kedua : " << nilai[1] << endl;
    cout << "Isi array ketiga : " << nilai[2] << endl;
    cout << "Isi array keempat : " << nilai[3] << endl;
    cout << "Isi array kelima : " << nilai[4] << endl;
    return 0;
}

```
Kode di atas digunakan untuk mencetak nilai dalam array. Array tersebut memiliki 5 elemen. Dengan menggunakan array,  kode tersebut mengisi nilai ke array serta menggunakan indeks untuk mengakses elemen array dari indeks 0 sampai 4. Kemudian, kode tersebut menampilkan isi 5 anggota array, yakni 23, 50, 34, 78, 90.

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
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
```
#### Output:
![https://github.com/nisrinamalia/2311102156_Nisrina-Amalia-Iffatunnisa/blob/main/Pertemuan1/assets/unguided1_modul1.png](assets/unguided1_modul1.png)

Kode di atas digunakan untuk melakukan penghitungan luas bangun datar dengan mengimplementasikan tipe data primitif, 4 fungsi untuk menghitung, 1 prosedur untuk menampilkan pilihan menu, perulangan serta pengkondisian untuk menu tersebut. Pilihan menu yang tersedia, yaitu fungsi untuk menghitung luas persegi, persegi panjang, segitiga, dan lingkaran. Prosedur (showMenu156) sebagai wadah menampung tampilan menu kalkulator. Percabangan (switch case) sebagai kondisi pilihan yang dipilih oleh pengguna. Sedangkan perulangan (do-while) berfungsi agar program terus berjalan selama tidak sama dengan 5. Adapun, fungsi c-math pow memudahkan dalam proses menghitung kuadrat dari jari-jari lingkaran.

Kesimpulan dari Tipe Data Primitif adalah tipe data dasar yang langsung didukung oleh banyak bahasa pemrograman, sudah ditentukan oleh sistem serta memiliki ukuran yang tetap dan nilai yang sederhana. Perbedaan antar bahasa pemorgraman terletak pada jumlah bit yang dialokasikan.
### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya!

```C++
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
```
#### Output:
![https://github.com/nisrinamalia/2311102156_Nisrina-Amalia-Iffatunnisa/blob/main/Pertemuan1/assets/unguided2_modul1.png](assets/unguided2_modul1.png)

Kode di atas digunakan untuk mencetak hasil dari struct Mahasiswa156 dan class Novel156. Dalam pemrograman C++ struct dan class biasa digunakan untuk membuat ADT (tipe data abstrak). Struct sendiri dalam menyusun data memiliki akses public, struct Mahasiswa156 memiliki atribut namamhs, tahunLahirmhs, dan jenisKelaminmhs. Sedangkan class dalam menyusun data memiliki akses private, class Novel156 memili atribut judulNovel, penulisNovel, dan tahunTerbit.

Perbedaan antara keduanya antara lain:
1. Struct:
    <p>a. Dapat melakukan penyimpanan beberapa data dengan default public. Sehingga akan dapat diakses secara langsung tanpa perlu menggunakan modifier access</p>
    <p>b. Dapat digunakan untuk mengelompokan sejumlah data dengan tipe yang berbeda. </p>
    <p>c. Berfungsi untuk mengatur akses data dengan lebih mudah dan efisien karena tidak perlu menggunakan nama variabel yang banyak.</p>

2. Class:
    <p>a. Data dan fungsi yang dideklarasi private tidak dapat diakses secara langsung oleh client.</p>
    <p>b. Class pada tipe data abstrak mendukung inheritance (class anak atau turunan dapat mewarisi sifat dan perilaku classinduk), mendukung polymorphism (memanipulasi objek dari kelas yang berbeda), dan mendukung encapsulation (pembungkusan/perilaku terkait dikemas bersama)</p>
    <p>c. Mampu memberikan fleksibilitas, modularitas, dan struktur yang baik dalam sebuah program.</p>

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map!

```C++
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
```
#### Output:
![https://github.com/nisrinamalia/2311102156_Nisrina-Amalia-Iffatunnisa/blob/main/Pertemuan1/assets/unguided3_modul1.png](assets/unguided3_modul1.png)

Kode di atas digunakan untuk menampilkan elemen yang ada di dalam map. Map adalah sebuah struktur data dalam C++ yang digunakan untuk menyimpan dan mengorganisasi data dalam bentuk key-value. Fungsi emplace tersebut untuk menambahkan beberapa elemen ke dalam map. Output atau hasil yang ditampilkan berupa daftar Novel karya Tsana Rintik Sedu. Daftar novel tersebut ditampilkan berdasarkan nomor urutnya menggunakan map dengan key int dan value string.

Perbedaan antara Map dengan Array antara lain:

1. Array
<p>a. Setiap elemen dalam array memiliki indeks yang unik.</p>
<p>b. Array memiliki ukuran yang tetap dan tidak bisa diubah setelah itu.
<p>c. Array dapat ditentukan dengan tipe data yang sama untuk setiap elemen atau dengan tipe data yang berbeda. </p>

2. Map
<p>a. Memiliki satu nilai yang unik.</p>
<p>b. Map memiliki ukuran yang berubah-ubah dan dapat ditambah atau dihapus elemennya.</p>
<p>c. Map hanya dapat ditentukan dengan tipe data yang sama untuk setiap elemen </p>

## Kesimpulan
Dalam praktikum mata kuliah Struktur Data dan Algoritma Modul 1 Tipe Data, telah mempelajari tentang tipe primitif tipe data dasar yang digunakan dalam C++, seperti int, char, float, double. Kemudian tentang tipe data abstrak class dan struct untuk yang lebih kompleks dan memiliki fungsionalitas lebih banyak. Serta tipe data koleksi untuk memanipulasi, menyimpan, dan mengelola data dalam jumlah besar serta yang berhubungan dengan satu sama lain.

## Referensi
[1] Asisten Praktikum, "Modul 1 Tipe Data", Learning Management System, 2024.

[2] Santoso, Joseph Teguh. 2021. "Struktur Data dan Algoritma", Semarang : Yayasan Prima Agus Teknik.
