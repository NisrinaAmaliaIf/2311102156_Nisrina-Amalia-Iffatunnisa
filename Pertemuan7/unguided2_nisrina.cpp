#include <iostream>
using namespace std;

//2311102156 Nisrina Amalia Iffatunnisa

struct Mahasiswa {
  string namaMahasiswa; // atribut untuk nama mahasiswa
  string NIM;           // atribut untuk NIM mahasiswa
  Mahasiswa* next;     // penunjuk ke elemen antrian berikutnya
};

class Queue {
private:
  Mahasiswa* front;
  Mahasiswa* back;
  const int MAX_SIZE = 5; // size maksimal data antrian

public:
  Queue() { // inisialisasi antrian kosong
    front = nullptr;
    back = nullptr;
  }

  bool isEmpty() { // mengecek apakah antrian kosong
    return front == nullptr;
  }

  // fungsi isFull ditambahkan untuk memeriksa antrian penuh
  bool isFull() {
    return countQueue() == MAX_SIZE; // memanggil fungsi countQueue untuk mengecek jumlah elemen
  }

  void enqueue156(string namaMahasiswa, string NIM) { // menambahkan elemen baru ke belakang antrian
    if (isFull()) {
      cout << "Antrian penuh (full)" << endl;
      return;
    }

    Mahasiswa* newNode = new Mahasiswa; // mengalokasikan memori untuk elemen baru
    newNode->namaMahasiswa = namaMahasiswa; // menyimpan nama mahasiswa
    newNode->NIM = NIM;                 // menyimpan NIM mahasiswa
    newNode->next = nullptr;           // elemen baru menjadi elemen terakhir

    if (isEmpty()) {
      front = newNode;
      back = newNode;
    } else {
      back->next = newNode;
      back = newNode;
    }
  }

  void dequeue156() { // menghapus elemen terdepan dari antrian
    if (isEmpty()) {
      cout << "Antrian kosong (empty)" << endl;
      return;
    }

    Mahasiswa* temp = front;
    front = front->next;
    delete temp;
  }

  void viewQueue156() { // menampilkan isi antrian
    cout << "Data antrian mahasiswa:" << endl;
    Mahasiswa* current = front;
    int i = 1;
    while (current != nullptr) {
      cout << i << ". " << current->namaMahasiswa << " (" << current->NIM << ")" << endl;
      current = current->next;
      i++;
    }

    for (; i <= MAX_SIZE; i++) {
      cout << i << ". (kosong)" << endl;
    }
  }

  int countQueue() { // menghitung jumlah elemen dalam antrian
    int count = 0;
    Mahasiswa* current = front;
    while (current != nullptr) {
      count++;
      current = current->next;
    }
    return count;
  }

  void clearQueue() { // menghapus semua elemen dari antrian
    while (!isEmpty()) {
      dequeue156();
    }
  }
};

int main() {
  Queue antrianMahasiswa156;
  antrianMahasiswa156.enqueue156("Nisrin", "2311102156");
  antrianMahasiswa156.enqueue156("Amalia", "2311102600");
  antrianMahasiswa156.viewQueue156();
  cout << "Jumlah antrian = " << antrianMahasiswa156.countQueue() << endl;
  antrianMahasiswa156.dequeue156();
  antrianMahasiswa156.viewQueue156();
  cout << "Jumlah antrian = " << antrianMahasiswa156.countQueue() << endl;
  antrianMahasiswa156.clearQueue();
  antrianMahasiswa156.viewQueue156();
  cout << "Jumlah antrian = " << antrianMahasiswa156.countQueue() << endl;
  return 0;
}
