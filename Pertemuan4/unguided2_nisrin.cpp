#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/* oleh 2311102156 Nisrina Amalia Iffatunnisa
*/

// Struct untuk Mahasiswa156
struct Mahasiswa156
{
    string nama_mhs156; //variabel menyimpan nama_mhs156 mahasiswa
    string nim_mhs156; //variabel menyimpan nim_mhs156 mahasiswa
    Mahasiswa156 *next; //pointer yang menunjuk ke Mahasiswa156 selanjutnya dalam linkedlist
};

class LinkedList
{
private:
    Mahasiswa156 *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    // Fungsi untuk menambahkan Mahasiswa156 di depan
    void tambahDepan(string nama_mhs156, string nim_mhs156)
    {
        Mahasiswa156 *newMahasiswa156 = new Mahasiswa156;
        newMahasiswa156->nama_mhs156 = nama_mhs156;
        newMahasiswa156->nim_mhs156 = nim_mhs156;
        newMahasiswa156->next = head;
        head = newMahasiswa156;
        cout << "Data telah ditambahkan.\n";
    }

    // Fungsi untuk menambahkan Mahasiswa156 di belakang
    void tambahBelakang(const string &nama_mhs156, const string &nim_mhs156)
    {
        Mahasiswa156 *newMahasiswa156 = new Mahasiswa156;
        newMahasiswa156->nama_mhs156 = nama_mhs156;
        newMahasiswa156->nim_mhs156 = nim_mhs156;
        newMahasiswa156->next = nullptr;

        if (head == nullptr)
        {
            head = newMahasiswa156;
        }
        else
        {
            Mahasiswa156 *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newMahasiswa156;
        }
        cout << "Data " << nama_mhs156 << " dengan " << nim_mhs156 << " telah ditambahkan di belakang.\n";
    }

    // Fungsi untuk menambahkan Mahasiswa156 di tengah
    void tambahTengah(string nama_mhs156, string nim_mhs156, int posisi)
    {
        if (posisi <= 0)
        {
            cout << "Posisi tidak valid.\n";
            return;
        }
        Mahasiswa156 *newMahasiswa156 = new Mahasiswa156;
        newMahasiswa156->nama_mhs156 = nama_mhs156;
        newMahasiswa156->nim_mhs156 = nim_mhs156;
        if (posisi == 1)
        {
            newMahasiswa156->next = head;
            head = newMahasiswa156;
            cout << "Data telah ditambahkan.\n";
            return;
        }
        Mahasiswa156 *temp = head;
        for (int i = 1; i < posisi - 1; i++)
        {
            if (temp == nullptr)
            {
                cout << "Posisi tidak valid.\n";
                return;
            }
            temp = temp->next;
        }
        newMahasiswa156->next = temp->next;
        temp->next = newMahasiswa156;
        cout << "Data telah ditambahkan.\n";
    }
    // Fungsi untuk mengubah data di depan
    void ubahDepan(const string &nama_mhs156Baru, const string &nim_mhs156Baru)
    {
        if (head == nullptr)
        {
            cout << "Linked list kosong.\n";
            return;
        }
        head->nama_mhs156 = nama_mhs156Baru;
        head->nim_mhs156 = nim_mhs156Baru;
        cout << "Data telah diganti dengan nama " << nama_mhs156Baru << ".\n";
    }

    // Fungsi untuk mengubah data di belakang
    void ubahBelakang(const string &nama_mhs156Baru, const string &nim_mhs156Baru)
    {
        if (head == nullptr)
        {
            cout << "Linked list kosong.\n";
            return;
        }
        Mahasiswa156 *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        cout << "Data " << temp->nama_mhs156 << " telah diganti dengan data " << nama_mhs156Baru << ".\n";
        temp->nama_mhs156 = nama_mhs156Baru;
        temp->nim_mhs156 = nim_mhs156Baru;
    }

    // Fungsi untuk mengubah data di tengah
    void ubahTengah(const string &nama_mhs156Baru, const string &nim_mhs156Baru, int posisi)
    {
        if (posisi <= 0)
        {
            cout << "Posisi tidak valid.\n";
            return;
        }
        Mahasiswa156 *temp = head;
        for (int i = 1; i < posisi; i++)
        {
            if (temp == nullptr)
            {
                cout << "Posisi tidak valid.\n";
                return;
            }
            temp = temp->next;
        }
        if (temp == nullptr)
        {
            cout << "Posisi tidak valid.\n";
            return;
        }
        cout << "Data " << temp->nama_mhs156 << " telah diganti dengan data " << nama_mhs156Baru << ".\n";
        temp->nama_mhs156 = nama_mhs156Baru;
        temp->nim_mhs156 = nim_mhs156Baru;
    }

    // Fungsi untuk menghapus data pertama/depan
    void hapusDepan()
    {
        if (head == nullptr)
        {
            cout << "Linked list kosong.\n";
            return;
        }
        Mahasiswa156 *temp = head;
        head = head->next;
        cout << "Data " << temp->nama_mhs156 << " berhasil dihapus.\n";
        delete temp;
    }
    // Fungsi untuk menghapus data terakhir/belakang
    void hapusBelakang()
    {
        if (head == nullptr)
        {
            cout << "Linked list kosong.\n";
            return;
        }
        if (head->next == nullptr)
        {
            cout << "Data " << head->nama_mhs156 << " berhasil dihapus.\n";
            delete head;
            head = nullptr;
            return;
        }
        Mahasiswa156 *prev = nullptr;
        Mahasiswa156 *current = head;
        while (current->next != nullptr)
        {
            prev = current;
            current = current->next;
        }
        prev->next = nullptr;
        cout << "Data " << current->nama_mhs156 << " berhasil dihapus.\n";
        delete current;
    }
    // Fungsi untuk menghapus data di tengah
    void hapusTengah(int posisi)
    {
        if (posisi <= 0)
        {
            cout << "Posisi tidak valid.\n";
            return;
        }
        if (head == nullptr)
        {
            cout << "Linked list kosong.\n";
            return;
        }
        if (posisi == 1)
        {
            Mahasiswa156 *temp = head;
            head = head->next;
            cout << "Data " << temp->nama_mhs156 << " berhasil dihapus.\n";
            delete temp;
            return;
        }

        Mahasiswa156 *prev = nullptr;
        Mahasiswa156 *current = head;
        int count = 1;

        while (current != nullptr && count != posisi)
        {
            prev = current;
            current = current->next;
            count++;
        }

        if (current == nullptr)
        {
            cout << "Posisi tidak valid.\n";
            return;
        }

        prev->next = current->next;
        cout << "Data " << current->nama_mhs156 << " berhasil dihapus.\n";
        delete current;
    }
    // Fungsi untuk menghapus semua data Mahasiswa156
    void hapusList()
    {
        Mahasiswa156 *temp;
        while (head != nullptr)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
        cout << "Semua data berhasil dihapus.\n";
    }
    // Fungsi untuk menampilkan semua data dalam format tabel dua kolom
    void tampilkanData()
    {
        if (head == nullptr)
        {
            cout << "Linked list kosong.\n";
            return;
        }
        // Judul tabel
        cout << "DATA MAHASISWA FIF TELKOM PWT" <<endl;
        cout << "===========================================\n";
        cout << "|   Nama Mahasiswa   |         NIM        |\n";
        cout << "===========================================\n";
        Mahasiswa156 *temp = head;
        while (temp != nullptr)
        {
            // Menampilkan data dalam format tabel
            cout << "| " << setw(18) << left << temp->nama_mhs156 << " | " << setw(18) << left << temp->nim_mhs156 << " |\n";
            temp = temp->next;
        }
        // Garis penutup tabel
        cout << "===========================================\n";
    }
};

    int main()
    {
        LinkedList list;
        int choice;
        string nama_mhs156, nim_mhs156;
        do
        {
            cout << "\nPROGRAM SINGLE LINKED LIST NON-CIRCULAR by Nisrin\n"; //menu
            cout << "1. Tambah Depan\n";
            cout << "2. Tambah Belakang\n";
            cout << "3. Tambah Tengah\n";
            cout << "4. Ubah Depan\n";
            cout << "5. Ubah Belakang\n";
            cout << "6. Ubah Tengah\n";
            cout << "7. Hapus Depan\n";
            cout << "8. Hapus Belakang\n";
            cout << "9. Hapus Tengah\n";
            cout << "10. Hapus List\n";
            cout << "11. TAMPILKAN\n";
            cout << "0. Keluar\n";
            cout << "Pilihan Anda: ";
            cin >> choice; //pilihan menu
            switch (choice)
            {
            case 1:
                cout << "Masukkan Nama Mahasiswa: ";
                cin >> nama_mhs156;
                cout << "Masukkan NIM Mahasiswa: ";
                cin >> nim_mhs156;
                list.tambahDepan(nama_mhs156, nim_mhs156); //akan menjalankan void tambahDepan()
                break;
            case 2:
                cout << "Masukkan Nama Mahasiswa: ";
                cin >> nama_mhs156;
                cout << "Masukkan NIM Mahasiswa: ";
                cin >> nim_mhs156;
                list.tambahBelakang(nama_mhs156, nim_mhs156);//akan menjalankan void tambahBelakang()
                break;
            case 3:
                int posisi;
                cout << "Masukkan Nama Mahasiswa: ";
                cin >> nama_mhs156;
                cout << "Masukkan NIM Mahasiswa: ";
                cin >> nim_mhs156;
                cout << "Masukkan posisi untuk menambahkan data: ";
                cin >> posisi;
                list.tambahTengah(nama_mhs156, nim_mhs156, posisi); //akan menjalankan void tambahTengah()
                break;
            case 4:
                cout << "Masukkan Nama baru untuk data di depan: ";
                cin >> nama_mhs156;
                cout << "Masukkan NIM baru: ";
                cin >> nim_mhs156;
                list.ubahDepan(nama_mhs156, nim_mhs156); //akan menjalankan void ubahDepan()
                break;
            case 5:
                cout << "Masukkan Nama baru untuk data di belakang: ";
                cin >> nama_mhs156;
                cout << "Masukkan NIM baru: ";
                cin >> nim_mhs156;
                list.ubahBelakang(nama_mhs156, nim_mhs156); //akan menjalankan void ubahBelakang()
                break;
            case 6:
                cout << "Masukkan Nama baru: ";
                cin >> nama_mhs156;
                cout << "Masukkan NIM baru: ";
                cin >> nim_mhs156;
                cout << "Masukkan posisi yang ingin diubah: ";
                cin >> posisi;
                list.ubahTengah(nama_mhs156, nim_mhs156, posisi); //akan menjalankan void ubahTengah()
                break;
            case 7:
                list.hapusDepan(); //akan menjalankan void hapusDepan()
                break;
            case 8:
                list.hapusBelakang(); //akan menjalankan void hapusBelakang()
                break;
            case 9:
                int posisiHapus;
                cout << "Masukkan posisi yang ingin dihapus: ";
                cin >> posisiHapus;
                list.hapusTengah(posisiHapus); //akan menjalankan void hapusTengah()
                break;
            case 10:
                list.hapusList(); //akan menjalankan void hapusList()
                break;
            case 11:
                list.tampilkanData(); //akan menjalankan void tampilkanData()
                break;
            case 0:
                cout << "Terima kasih sudah menggunakan program ini!\n";
                break;
            default:
                cout << "Maaf, pilihan tidak valid. Silakan coba lagi.\n";
            }
        } while (choice != 0);
    
        return 0;
    }