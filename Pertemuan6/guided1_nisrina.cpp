#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull (){
    return (top == maksimal); //akan true
} //function buat ngecek kosong apa ga

bool isEmpty(){
    return (top == 0); //false sudah penuh
}

void pushArrayBuku(string data){
    if(isFull()){
        cout << "Data telah penuh" <<endl;

    }else{
        arrayBuku [top] = data;
        top++;
    }
} //menambahkan tumpukkan

void popArrayBuku (){
    if (isEmpty()){
        cout << "Tidak ada data yang dihapus" <<endl;
    } else {
        arrayBuku [top - 1]= " ";
        top--;
    }
} //hapus

void peekArrayBuku(int posisi){
    if (isEmpty()){ //looping untuk menampilkan data paling atas hingga ke bawah
        cout << "Tidak ada data yang dilihat" <<endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++){
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku [index] << endl;
    }
}

int countStack(){
    return top;
}

void changeArrayBuku(int posisi, string data){
    if(posisi > top){
        cout << "Posisi melebihi data yang ada" <<endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++){
            index--;
        }
        arrayBuku[index] = data;
    }
} //mengubah data posisi tertentu. paling baru diinputin

void destroyArrayBuku(){
    for(int i = top; i >= 0; i--){
        arrayBuku[i] = " ";
    }
    top = 0;
} //menghapus all data

void cetakArrayBuku(){
    if(isEmpty()){
        cout << "Tidak ada data yang dicetak" <<endl;

    } else{
        for(int i = top - 1; i>= 0; i--){
            cout << arrayBuku[i] <<endl;
        }
    }
} //menampilkan all data

int main(){
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";

    cout << "Apakah data stack penuh?" << isFull() <<endl;
    cout << "Apakah data stack kosong?" << isEmpty() <<endl;

    peekArrayBuku(2); //melihat posisi buku kedua
    popArrayBuku();

    cout << "Banyaknya data = " << countStack() <<endl;

    changeArrayBuku(2, "Bahasa Jerman");
    cetakArrayBuku();
    
    cout << "\n" ;

    destroyArrayBuku();
    cout << "Jumlah data setelah dihapus : " << top << endl;

    cetakArrayBuku();

    return 0;
}