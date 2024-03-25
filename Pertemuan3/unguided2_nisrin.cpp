#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//2311102156 Nisrina Amalia Iffatunnisa

//deklarasi class node untuk merepresentasikan node dalam linked list
class Node {
public:
    string productName_156; // Variabel 'productName_156' menyimpan nama produk skincare
    int productPrice_156; //variabel 'productPrice_156' menyimpan harga skincare
    Node* prev; //pointer ke node sebelumnya dalam linked list
    Node* next; //pointer ke node selanjutnya dalam linked list
};

//deklarasi class DoublyLinkedList untuk merepresentasikan linked list
class DoublyLinkedList {
public:
    Node* head; //pointer ke node pertama dalam linked list
    Node* tail; //pointer ke node terakhir dalam linked list

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    //fungsi untuk menambahkan node baru ke akhir linked list
    void push(string productName_156, int productPrice_156) {
        Node* newNode = new Node;
        newNode->productName_156 = productName_156;
        newNode->productPrice_156 = productPrice_156;
        newNode->prev = tail;
        newNode->next = nullptr;
        if (tail != nullptr) {
            tail->next = newNode;
        }
        else {
            head = newNode;
        }
        tail = newNode;
    }

    //fungsi untuk menyisipkan node baru setelah node tertentu dalam linked list
    void insertAfter(string productName_156, int productPrice_156, Node* prevNode) {
        if (prevNode == nullptr) {
            cout << "Node sebelumnya tidak boleh kosong." << endl;
            return;
        }
        Node* newNode = new Node;
        newNode->productName_156 = productName_156;
        newNode->productPrice_156 = productPrice_156;
        newNode->prev = prevNode;
        newNode->next = prevNode->next;
        if (prevNode->next != nullptr) {
            prevNode->next->prev = newNode;
        }
        prevNode->next = newNode;
        if (prevNode == tail) {
            tail = newNode;
        }
    }

    //fungsi untuk menghapus node tertentu dari linked list
    void deleteNode(Node* delNode) {
        if (delNode == nullptr) {
            cout << "Node yang akan dihapus tidak boleh kosong." << endl;
            return;
        }
        if (delNode == head) {
            head = delNode->next;
        }
        if (delNode == tail) {
            tail = delNode->prev;
        }
        if (delNode->prev != nullptr) {
            delNode->prev->next = delNode->next;
        }
        if (delNode->next != nullptr) {
            delNode->next->prev = delNode->prev;
        }
        delete delNode;
    }

    //fungsi untuk memperbarui data node tertentu dalam linked list
    bool updateNode(Node* targetNode, string newproductName_156, int newproductPrice_156) {
        if (targetNode == nullptr) {
            cout << "Node yang akan diperbarui tidak boleh kosong." << endl;
            return false;
        }
        targetNode->productName_156 = newproductName_156;
        targetNode->productPrice_156 = newproductPrice_156;
        return true;
    }

    //fungsi untuk menampilkan isi semua data linked list dengan tabel
    void display() {
        cout << "--------------------------------\n";
        cout << "| Nama Produk   | Harga Produk |\n";
        cout << "--------------------------------\n";
        Node* current = head;
        while (current != nullptr) {
            cout << "| " << setw(13) << left << current->productName_156 << " | " << setw(12) << left << current->productPrice_156 << " |\n";
            current = current->next;
        }
        cout << "--------------------------------\n";
        cout << endl;
    }

    //fungsi untuk menghapus seluruh isi linked list
    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
        tail = nullptr;
    }
};

int main() {
    DoublyLinkedList products; //membuat objek DoublyLinkedList untuk menyimpan produk-produk
    while (true) {
        //menampilkan menu
        cout << "\nToko Skincare Purwokerto by.nisrin\n" <<endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;

        int choice;
        cout << "\nMasukkan pilihan Anda: ";
        cin >> choice;

        //melakukan aksi sesuai inputan user
        switch (choice) {
            case 1: { //add data baru
                string productName_156;
                int productPrice_156;
                cout << "Masukkan nama produk: ";
                cin.ignore(); // Ignore newline character
                getline(cin, productName_156);
                cout << "Masukkan harga produk: ";
                cin >> productPrice_156;
                products.push(productName_156, productPrice_156);
                break;
            }
            case 2: { //delete data
                string productName_156;
                cout << "Masukkan nama produk yang akan dihapus: ";
                cin.ignore(); // Ignore newline character
                getline(cin, productName_156);
                Node* current = products.head;
                while (current != nullptr) {
                    if (current->productName_156 == productName_156) {
                        products.deleteNode(current);
                        cout << "Produk berhasil dihapus." << endl;
                        break;
                    }
                    current = current->next;
                }
                if (current == nullptr) {
                    cout << "Produk tidak ditemukan." << endl;
                }
                break;
            }
            case 3: { //update data
                string productName_156, newproductName_156;
                int productPrice_156, newproductPrice_156;
                cout << "Masukkan nama produk yang akan diperbarui: ";
                cin.ignore(); // Ignore newline character
                getline(cin, productName_156);
                cout << "Masukkan nama produk baru: ";
                getline(cin, newproductName_156);
                cout << "Masukkan harga produk baru: ";
                cin >> newproductPrice_156;
                Node* current = products.head;
                while (current != nullptr) {
                    if (current->productName_156 == productName_156) {
                        products.updateNode(current, newproductName_156, newproductPrice_156);
                        cout << "Produk berhasil diperbarui." << endl;
                        break;
                    }
                    current = current->next;
                }
                if (current == nullptr) {
                    cout << "Produk tidak ditemukan." << endl;
                }
                break;
            }
            case 4: { //add data posisi tertentu
                string prevproductName_156, newproductName_156;
                int productPrice_156;
                cout << "Masukkan nama produk setelah produk tertentu: ";
                cin.ignore(); // Ignore newline character
                getline(cin, prevproductName_156);
                cout << "Masukkan nama produk baru: ";
                getline(cin, newproductName_156);
                cout << "Masukkan harga produk: ";
                cin >> productPrice_156;
                Node* current = products.head;
                while (current != nullptr) {
                    if (current->productName_156 == prevproductName_156) {
                        products.insertAfter(newproductName_156, productPrice_156, current);
                        break;
                    }
                    current = current->next;
                }
                if (current == nullptr) {
                    cout << "Produk tidak ditemukan." << endl;
                }
                break;
            }
            case 5: { //delete data posisi tertentu
                string prevproductName_156;
                cout << "Masukkan nama produk setelah produk tertentu yang akan dihapus: ";
                cin.ignore(); // Ignore newline character
                getline(cin, prevproductName_156);
                Node* current = products.head;
                while (current != nullptr) {
                    if (current->productName_156 == prevproductName_156 && current->next != nullptr) {
                        products.deleteNode(current->next);
                        cout << "Produk berhasil dihapus." << endl;
                        break;
                    }
                    current = current->next;
                }
                if (current == nullptr || current->next == nullptr) {
                    cout << "Produk tidak ditemukan atau tidak ada produk untuk dihapus setelahnya." << endl;
                }
                break;
            }
            case 6: { //delete all data
                products.deleteAll();
                cout << "Semua produk berhasil dihapus." << endl;
                break;
            }
            case 7: { //show all data yang ada
                products.display();
                break;
            }
            case 8: { //program keluar
                cout << "Terima kasih telah menggunakan program Toko Skincare Pwt by.nisrin" <<endl;
                return 0;
            }
            default: {
                cout << "Maaf, pilihan Anda tidak valid." << endl;
                break;
            }
        }
    }
    return 0;
}
