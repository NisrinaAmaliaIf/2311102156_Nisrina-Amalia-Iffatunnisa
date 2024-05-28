#include <iostream>
#include <iomanip>
using namespace std;

// Deklarasi array simpul yang berisi 7 string nama kota
string simpul[7] = {
    "Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"
};

// Deklarasi array 2 dimensi busur yang mewakili jarak antar kota
int busur[7][7] = {
    {0,7,8,0,0,0,0}, // Jarak dari kota pertama ke semua kota lainnya
    {0,0,5,0,0,15,0}, // Jarak dari kota kedua ke semua kota lainnya
    {0,6,0,0,5,0,0}, // ketiga dst
    {0,5,0,0,2,4,0},
    {23,0,0,10,0,0,8},
    {0,0,0,0,7,0,3},
    {0,0,0,0,9,4,0}
};

void tampilGraph(){ // Fungsi graph
    for(int baris = 0; baris<7; baris++){
        cout << " " << setiosflags(ios::left) << 
        setw(15) << simpul [baris] << " : " ; // Mencetak nama kota
        
        for (int kolom = 0; kolom<7; kolom++){
            if (busur[baris] [kolom] != 0){ // Mengecek adanya koneksi antar kota (bukan 0)
                cout << " " << simpul [kolom] << "(" << // Mencetak nama kota tujuan dan jaraknya
                busur[baris] [kolom] << ")";
            }
        } cout << endl;
    }
}

int main(){
    tampilGraph(); //Memanggil fungsi tampilGraph() untuk menampilkan graf
}
