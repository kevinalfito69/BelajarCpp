#include <iostream>
using namespace std;

int main(){
    int a = 2;
    int b = 3;
    bool hasil;
    // not
    cout << "Untuk not" << endl;
    hasil = !(a == 2);
    cout << hasil << endl;
    // and
    cout << "Untuk and" << endl;
    hasil = (a == 2) && (b == 3);
    cout << hasil << endl;

    cout << "Untuk or" << endl;
    hasil = (a ==1) || (b == 1);
    cout << hasil << endl;

    return 0;
}