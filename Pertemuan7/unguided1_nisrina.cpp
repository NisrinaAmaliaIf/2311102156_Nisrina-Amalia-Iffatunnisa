#include <iostream>
using namespace std;

//2311102156 Nisrina Amalia Iffatunnisa

int front = 0; // penanda antrian depan awalnya kosong
int back = 0; // penanda antrian ujung/belakang
struct QueueTeller_156 {
  string data; //data/nama orang yang akan antri
  QueueTeller_156* next; //penunjuk ke elemen antrian berikutnya
};

class Queue {
private:
  QueueTeller_156* front;
  QueueTeller_156* back;
  const int MAX_SIZE = 5; // size maksimal data antrian

public:
  Queue() { //inisialisasi antrian kosong
    front = nullptr;
    back = nullptr;
  }

  bool isEmpty() { //mengecek apakah antrian kosong
    return front == nullptr;
  }

  //fungsi isFull ditambahkan untuk memeriksa antrian penuh
  bool isFull() {
    return countQueue() == MAX_SIZE; //memanggil fungsi countQueue untuk mengecek jumlah elemen
  }

  void enqueue156(string data) { //menambahkan elemen baru ke belakang antrian
    if (isFull()) {
      cout << "Antrian penuh (full)" << endl;
      return;
    }

    QueueTeller_156* newNode = new QueueTeller_156; //mengalokasikan memori untuk elemen baru
    newNode->data = data; //menyimpan nama orang yang antri
    newNode->next = nullptr; //elemen baru menjadi elemen terakhir

    if (isEmpty()) {
      front = newNode;
      back = newNode;
    } else {
      back->next = newNode;
      back = newNode;
    }
  }

  void dequeue156() { //menghapus elemen terdepan dari antrian
    if (isEmpty()) {
      cout << "Antrian kosong (empty)" << endl;
      return;
    }

    QueueTeller_156* temp = front;
    front = front->next;
    delete temp;
  }

  void viewQueue156() { //menampilkan isi antrian
    cout << "Data antrian teller:" << endl;
    QueueTeller_156* current = front;
    int i = 1;
    while (current != nullptr) {
      cout << i << ". " << current->data << endl;
      current = current->next;
      i++;
    }

    for (; i <= MAX_SIZE; i++) {
      cout << i << ". (kosong)" << endl;
    }
  }

  int countQueue() { //menghitung jumlah elemen dalam antrian
    int count = 0;
    QueueTeller_156* current = front;
    while (current != nullptr) {
      count++;
      current = current->next;
    }
    return count;
  }

  void clearQueue() { //enghapus semua elemen dari antrian
    while (!isEmpty()) {
      dequeue156();
    }
  }
};

int main() {
  Queue antrianTeller156;
  antrianTeller156.enqueue156("Nisrin");
  antrianTeller156.enqueue156("Amalia");
  antrianTeller156.viewQueue156();
  cout << "Jumlah antrian = " << antrianTeller156.countQueue() << endl;
  antrianTeller156.dequeue156();
  antrianTeller156.viewQueue156();
  cout << "Jumlah antrian = " << antrianTeller156.countQueue() << endl;
  antrianTeller156.clearQueue();
  antrianTeller156.viewQueue156();
  cout << "Jumlah antrian = " << antrianTeller156.countQueue() << endl;
  return 0;
}
