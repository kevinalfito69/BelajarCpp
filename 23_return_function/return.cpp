#include <iostream>
using namespace std;
int kuadrat(int x){
    int y = x * x;
    return y;
}
int main(){
    int x;
    cout << "Masukan nilai x: ";
    cin >> x;
    int hasil = kuadrat(x);
    cout << "hasil dari kuadrat "<< x << " adalah " << hasil << endl;

    return 0;
}