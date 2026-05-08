#include <iostream>
using namespace std;
// prototype
double hitung_luas(double panjang, double lebar);
int main(){
    int p,l;

    cin >> p;
    cin >> l;
    cout << "hasil luasnya adalah: ";
    cout << hitung_luas(p,l);


    return 0;   
}
double hitung_luas(double panjang, double lebar){
    return panjang * lebar;
}