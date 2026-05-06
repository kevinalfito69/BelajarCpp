#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Masukan Nilai:";
    cin >> a;

    if (a == 1){
        cout << "nilai lebih besar dari 3" <<endl;
    }else if(a < 5){
        cout << "Nilain lebih kecil dari 5" << endl;
    }else{
        cout << "nilai lebih besar dari 5" << endl;
    }
    

    return 0;
}