#include <iostream>
using namespace std;

int luas_kotak(int panjang, int lebar){
    return panjang * lebar;
}
int luas_kotak(int sisi){
    return sisi * sisi;
}
double luas_kotak(double sisi){
    return sisi * sisi;
}
int main(){
    cout << "Luas kotak 3x4: " << luas_kotak(3,4) << endl;

    cout << "Luas kotak 4x4: " << luas_kotak(4) << endl;
    cout << "Luas kotak 2.5x2.5: " << luas_kotak(2.5) << endl;
    return 0;
}
