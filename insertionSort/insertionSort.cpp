#include <iostream>
using namespace std;

int arr[20];        //membuat array dengan panjang data 20
int n;              //membuat variabel inputan n

void input()
{   //procedure input
    while (true)
    {
        cout << "masukan jumalah data pada array : ";      //membuat inputan jumlah elemen array
        cin >> n;                                          //memangil variabel inputan n

        if (n <= 20)
        {   //membuat kondisi n tidak lebih dari 20
            break;

        }
        else
        {
            cout << "\nArray yang anda masukan maksimal 20 elemen. \n";     //menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                                     //membuat jarak per baris progam
    cout << "========================" << endl;       //membuat tampilan susunan data elemen array
    cout << "masukan elemen array" << endl;
    cout << "========================" << endl;

    //menggunakan perulangan for untuk menyimpan data pada array
    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ": ";      //masukan atau menginputkan nilai data n
        cin >> arr[i];                              //masukan nilai data n kedalam Array arr

    }
};































int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
