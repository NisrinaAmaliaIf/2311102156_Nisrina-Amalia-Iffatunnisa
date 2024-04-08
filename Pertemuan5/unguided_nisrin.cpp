#include <iostream>
#include <string>
using namespace std;
//2311102156 Nisrina Amalia Iffatunnisa
const int TABLE_SIZE = 10; //menginisialisasikan const dengan nama TABLE_SIZE yang memiliki nilai 10

struct Mahasiswa156 {
    string NIM; //deklarasi NIM
    float nilai; //deklarasi nilai
    Mahasiswa156* next; //pointer ke node berikutnya dalam struktur data linked list
};

class HashTable {
private:
    Mahasiswa156* table[TABLE_SIZE]; //tabel hash yang merupakan array dari pointer ke node Mahasiswa156
    
    // Fungsi hashing
    int hashFunction(string key) {
        int hash = 0;
        for (char c : key) {
            hash += c;
        }
        return hash % TABLE_SIZE; //mengembalikan hasil modulus dari nilai hash dengan TABLE_SIZE
    }

public:
    HashTable() {
        for (int i = 0; i < TABLE_SIZE; ++i) {
            table[i] = nullptr;
        }
    }

    // Menambahkan data Mahasiswa
    void tambahData156(string NIM, float nilai) {
        int index = hashFunction(NIM);
        Mahasiswa156* newMahasiswa156 = new Mahasiswa156;
        newMahasiswa156->NIM = NIM;
        newMahasiswa156->nilai = nilai;
        newMahasiswa156->next = nullptr;

        if (table[index] == nullptr) {
            table[index] = newMahasiswa156;
        } else {
            Mahasiswa156* current = table[index];
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newMahasiswa156;
        }
        cout << "Data Mahasiswa berhasil ditambahkan." << endl;
    }

    // Menghapus data Mahasiswa berdasarkan NIM
    void hapusData156(string NIM) {
        int index = hashFunction(NIM);
        if (table[index] == nullptr) {
            cout << "Data tidak ditemukan." << endl;
            return;
        }
        if (table[index]->NIM == NIM) {
            Mahasiswa156* temp = table[index];
            table[index] = table[index]->next;
            delete temp;
            cout << "Data Mahasiswa dengan NIM " << NIM << " berhasil dihapus." << endl;
            return;
        }
        Mahasiswa156* current = table[index];
        while (current->next != nullptr && current->next->NIM != NIM) {
            current = current->next;
        }
        if (current->next == nullptr) {
            cout << "Data tidak ditemukan." << endl;
            return;
        }
        Mahasiswa156* temp = current->next;
        current->next = current->next->next;
        delete temp;
        cout << "Data Mahasiswa dengan NIM " << NIM << " berhasil dihapus." << endl;
    }

    // Mencari data Mahasiswa berdasarkan NIM
    void cariDataNIM156(string NIM) {
        int index = hashFunction(NIM);
        Mahasiswa156* current = table[index];
        while (current != nullptr) {
            if (current->NIM == NIM) {
                cout << "Data Mahasiswa ditemukan dengan NIM " << NIM << " dan nilai " << current->nilai << endl;
                return;
            }
            current = current->next;
        }
        cout << "Data tidak ditemukan." << endl;
    }

    // Mencari data Mahasiswa berdasarkan nilai
    void cariDataNilai156(float nilai) {
        bool found = false;
        for (int i = 0; i < TABLE_SIZE; ++i) {
            Mahasiswa156* current = table[i];
            while (current != nullptr) {
                if (current->nilai >= 80 && current->nilai <= 90) {
                    cout << "Data Mahasiswa ditemukan dengan NIM " << current->NIM << " dan nilai " << current->nilai << endl;
                    found = true;
                }
                current = current->next;
            }
        }
        if (!found) {
            cout << "Data tidak ditemukan." << endl;
        }
    }
};

int main() {
    HashTable hashTable;

    int choice;
    string NIM;
    float nilai;

    do {
        cout << "Menu Data Mahasiswa Informatika by Nisrin :" << endl;
        cout << "1. Tambah Data Mahasiswa" << endl;
        cout << "2. Hapus Data Mahasiswa" << endl;
        cout << "3. Cari Data Mahasiswa berdasarkan NIM" << endl;
        cout << "4. Cari Data Mahasiswa berdasarkan Rentang Nilai (80 - 90)" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan NIM: ";
                cin >> NIM;
                cout << "Masukkan nilai: ";
                cin >> nilai;
                hashTable.tambahData156(NIM, nilai);
                break;
            case 2:
                cout << "Masukkan NIM untuk menghapus data: ";
                cin >> NIM;
                hashTable.hapusData156(NIM);
                break;
            case 3:
                cout << "Masukkan NIM untuk mencari data: ";
                cin >> NIM;
                hashTable.cariDataNIM156(NIM);
                break;
            case 4:
                cout << "Data mahasiswa dengan nilai antara 80 - 90:" << endl;
                hashTable.cariDataNilai156(80);
                break;
            case 5:
                cout << "Program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (choice != 5);

    return 0;
}
