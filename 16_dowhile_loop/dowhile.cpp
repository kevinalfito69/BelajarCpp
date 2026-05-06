#include <iostream>
using namespace std;
// perbedaan while dan do while pada do while aksi dilakukan minimal sekali karena aksi di lakukan terlebih dahulu baru syarat di cek
int main(){
    int i = 1;
    do // dilakukan dahulu baru di cek syaratnya
    {
        cout << "KOntol kuda" << i << endl;
        i++;
    } while (i<10);
    
    return 0;
}