#include <iostream>
#include <limits>
using namespace std;

int main(){
    // bilangan bulat
    int a = 2; // 32bit
    long b = 6; // 64bit tapi di windows masih 32bit dibacanya
    short c = 2; // 16bit

    // decimal
    float d = 2.0;
    double e = 4.0;

    // karakter
    char f = 'a';

    // boolean
    bool g = true;
    cout << "======== Tipe Data Int ========" << endl;
    cout << a << endl;
    cout << sizeof(a) << " byte" << endl;
    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<int>::min() << endl;

    cout << "======== Tipe Data Long ========" << endl;
    cout << b << endl;
    cout << sizeof(b) << " byte" << endl;
    cout << numeric_limits<long>::max() << endl;
    cout << numeric_limits<long>::min() << endl;

    cout << "======== Tipe Data Short ========" << endl;
    cout << c << endl;
    cout << sizeof(c) << " byte" << endl;
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;

    cout << "======== Tipe Data Float ========" << endl;
    cout << d << endl;
    cout << sizeof(d) << " byte" << endl;
    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<float>::min() << endl;

    cout << "======== Tipe Data Double ========" << endl;
    cout << e << endl;
    cout << sizeof(e) << " byte" << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<double>::min() << endl;
    

    cout << "======== Tipe Data Char ========" << endl;
    cout << f << endl;
    cout << sizeof(f) << " byte" << endl;

    cout << "======== Tipe Data Boolean ========" << endl;
    cout << g << endl;
    cout << sizeof(g) << " byte" << endl;

    return 0;
}