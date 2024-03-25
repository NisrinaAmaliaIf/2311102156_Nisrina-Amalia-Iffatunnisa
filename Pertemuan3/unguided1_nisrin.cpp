#include <iostream>
#include <iomanip> //import library untuk setw di tabel
using namespace std;
//2311102156 Nisrina Amalia Iffatunnisa

// Struktur Node
struct Node {
    string namaMhs_156; //nama Mahasiswa
    int usiaMhs_156;    //usia Mahasiswa
    Node* next;
};

//class LinkedList
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    //fungsi untuk memasukkan data di akhir
    void insertData(string namaMhs_156, int usiaMhs_156) {
        Node* newNode = new Node; //node baru
        newNode->namaMhs_156 = namaMhs_156;
        newNode->usiaMhs_156 = usiaMhs_156;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    //fungsi untuk menampilkan semua data
    void displayData() {
        cout << "------------------------------------\n";
        cout << "| Nama Mahasiswa  | Usia Mahasiswa |\n";
        cout << "------------------------------------\n";
        Node* temp = head;
        while (temp != nullptr) {
            cout << "| " << setw(14) << left << temp->namaMhs_156 << " | " << setw(14) << left << temp->usiaMhs_156 << " |\n";
            temp = temp->next;
        }
        cout << "------------------------------------\n";
    }

    //fungsi untuk menghapus data berdasarkan nama
    void deleteNode(string targetnamaMhs_156) {
        Node* temp = head;
        Node* prev = nullptr;

        if (temp != nullptr && temp->namaMhs_156 == targetnamaMhs_156) {
            head = temp->next;
            delete temp;
            return;
        }

        while (temp != nullptr && temp->namaMhs_156 != targetnamaMhs_156) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr)
            return;

        prev->next = temp->next;
        delete temp;
    }

    //fungsi untuk menambahkan data di antara dua node
    void addBetweenNodes(string prevnamaMhs_156, string namaMhs_156, int usiaMhs_156) {
        Node* newNode = new Node;
        newNode->namaMhs_156 = namaMhs_156;
        newNode->usiaMhs_156 = usiaMhs_156;
        newNode->next = nullptr;

        Node* temp = head;
        while (temp != nullptr && temp->namaMhs_156 != prevnamaMhs_156) {
            temp = temp->next;
        }

        if (temp == nullptr)
            return;

        newNode->next = temp->next;
        temp->next = newNode;
    }

    //fungsi untuk menambahkan data di awal/paling depan
    void addAtBeginning(string namaMhs_156, int usiaMhs_156) {
        Node* newNode = new Node;
        newNode->namaMhs_156 = namaMhs_156;
        newNode->usiaMhs_156 = usiaMhs_156;
        newNode->next = head;
        head = newNode;
    }

    //fungsi untuk memperbarui data pada node tertentu
    void updateData(string targetnamaMhs_156, string newnamaMhs_156, int newusiaMhs_156) {
        Node* temp = head;
        while (temp != nullptr && temp->namaMhs_156 != targetnamaMhs_156) {
            temp = temp->next;
        }
        if (temp != nullptr) {
            temp->namaMhs_156 = newnamaMhs_156;
            temp->usiaMhs_156 = newusiaMhs_156;
        }
    }
};

int main() {
    LinkedList list;
    int choice;
    string namaMhs_156, newnamaMhs_156, targetnamaMhs_156;
    int usiaMhs_156;

    do { //pilihan menu
        cout << "\nMenu Program by.nisrin :\n";
        cout << "1. Tambah Data\n";
        cout << "2. Hapus Data Berdasarkan Nama\n";
        cout << "3. Tambahkan Data di Tengah\n";
        cout << "4. Tambahkan Data di Awal\n";
        cout << "5. Perbarui Data\n";
        cout << "6. Tampilkan Semua Data\n";
        cout << "7. Keluar\n";
        cout << "Masukkan pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1: //add data mahasiswa
                cout << "Masukkan nama: ";
                cin >> namaMhs_156;
                cout << "Masukkan usia: ";
                cin >> usiaMhs_156;
                list.insertData(namaMhs_156, usiaMhs_156);
                break;
            case 2: //delete data
                cout << "Masukkan nama yang akan dihapus: ";
                cin >> targetnamaMhs_156;
                list.deleteNode(targetnamaMhs_156);
                break;
            case 3: //add data di tengah
                cout << "Masukkan nama sebelumnya: ";
                cin >> namaMhs_156;
                cout << "Masukkan nama: ";
                cin >> newnamaMhs_156;
                cout << "Masukkan usia: ";
                cin >> usiaMhs_156;
                list.addBetweenNodes(namaMhs_156, newnamaMhs_156, usiaMhs_156);
                break;
            case 4: //add data di paling awal/depan
                cout << "Masukkan nama: ";
                cin >> namaMhs_156;
                cout << "Masukkan usia: ";
                cin >> usiaMhs_156;
                list.addAtBeginning(namaMhs_156, usiaMhs_156);
                break;
            case 5: //update data
                cout << "Masukkan nama yang akan diperbarui: ";
                cin >> targetnamaMhs_156;
                cout << "Masukkan nama baru: ";
                cin >> newnamaMhs_156;
                cout << "Masukkan usia baru: ";
                cin >> usiaMhs_156;
                list.updateData(targetnamaMhs_156, newnamaMhs_156, usiaMhs_156);
                break;
            case 6: //show data
                cout << "\nData Mahasiswa FIF Telkom Purwokerto:\n";
                list.displayData();
                break;
            case 7:
                cout << "Keluar.";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi" <<endl;
        }
    } while (choice != 7);

    return 0;
}
