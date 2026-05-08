/*
Pointer adalah variabel yang menyimpan alamat memori dari variabel atau data lain, 
sehingga program dapat mengakses atau memanipulasi data tersebut secara langsung tanpa menyalin nilainya. 
Konsep ini membuat penggunaan memori lebih efisien dan banyak digunakan pada operasi level rendah 
serta struktur data seperti linked list dan tree.
*/
#include <iostream>
using namespace std;
// prototype
void fungsi(int *);
void kuadrat(int *);


int main(){
    int a = 5;
    cout << "Address a: " << &a << endl;
    cout << "nilai a: " << a << endl;

    //fungsi(&a); // fungsi dengan input pointer
    kuadrat(&a);
    cout << "Address a: " << &a << endl;
    cout << "nilai a: " << a << endl;
    cin.get();
    return 0;
}
void fungsi(int *b){
    cout << "Address b: " << b << endl;
    cout << "nilai b: " << *b << endl;
}
void kuadrat(int * valPtr){
    *valPtr = (*valPtr) * (*valPtr);
}