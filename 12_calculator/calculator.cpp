#include <iostream>
using namespace std;

int main(){
    float a, b, hasil;
    char aritmatik;

    cout << "============= Kalkulator Sederhana =============" << endl;
    cout << "Masukan Nilai A: ";
    cin >> a;
    cout << "Masukan operator +, -, *, / :";
    cin >> aritmatik;
    cout << "Masukan Nilai B: ";
    cin >> b;

    switch (aritmatik)
    {
    case('+'):
        hasil = a+b;
        cout << a << aritmatik << b << " = " << hasil<< endl;
        break;
    case('-'):
        hasil = a-b;
        cout << a << aritmatik << b << " = " << hasil<< endl;
        break;
    case('*'):
        hasil = a*b;
        cout << a << aritmatik << b << " = " << hasil<< endl;
        break;
    case('/'):
        hasil = a/b;
        cout << a << aritmatik << b << " = " << hasil<< endl;
        break;
    default:
        cout << "Operator anda tidak valid" << endl;
        break;
    }


    return 0;
}