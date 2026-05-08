#include <iostream>
using namespace std;
double volume_balok(double p = 1, double l = 1, double t = 1 );
int main(){
    cout << volume_balok() ;
    return 0;
}
double volume_balok(double p, double l, double t ){
    return p * l * t;
}