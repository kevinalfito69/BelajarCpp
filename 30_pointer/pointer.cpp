/*
Pointer adalah variabel yang menyimpan alamat memori dari variabel atau data lain, 
sehingga program dapat mengakses atau memanipulasi data tersebut secara langsung tanpa menyalin nilainya. 
Konsep ini membuat penggunaan memori lebih efisien dan banyak digunakan pada operasi level rendah 
serta struktur data seperti linked list dan tree.
*/
#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *aPtr = nullptr;
    aPtr = &a;
    cout << "Nilai dari a: " << a << endl;
    
    cout << "memory a: " << aPtr << endl;

    // deferensi meengambil data dari sebuah pointer
    cout << "mengambil nilai dari pointer aPtr: " << *aPtr << endl;
    return 0;
}