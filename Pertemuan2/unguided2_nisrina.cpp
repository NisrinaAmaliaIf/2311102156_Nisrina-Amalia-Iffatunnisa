#include <iostream>
using namespace std;
//Nisrina Amalia Iffatunnisa 2311102156
int main()
{
    // Deklarasi variable untuk menyimpan jumlah elemen array
    int n_156;
    // Input jumlah elemen array
    cout << "Input jumlah elemen array: ";
    cin >> n_156;
    // Deklarasi array
    int arr[n_156][n_156][n_156];
    // Input elemen
    for (int a = 0; a < n_156; a++)
    {
        for (int b = 0; b < n_156; b++)
        {
            for (int c = 0; c < n_156; c++)
            {
                cout << "Input Array[" << a << "][" << b << "][" << c << "] = ";
                cin >> arr[a] [b] [c];
            }
        }
    }
    cout << endl;

    // Output Array
    for (int a = 0; a < n_156; a++)
    {
        for (int b = 0; b < n_156; b++)
        {
            for (int c = 0; c < n_156; c++)
            {
                cout << "Data Array[" << a << "][" << b << "][" << c << "] = " << arr[a] [b] [c] << endl;
            }
        }
    }

    cout << endl;

    // Tampilan array
    for (int a = 0; a < n_156; a++)
    {
        for (int b = 0; b < n_156; b++)
        {
            for (int c = 0; c < n_156; c++)
            {
                cout << arr [a] [b] [c] << " ";
            }

            cout << endl;
        }
        cout << endl;

    }
}