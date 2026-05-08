#include <iostream>
using namespace std;
// prototype
void fungsi(int &);
void kuadrat(int &);


int main(){
    int a = 5;
    cout << "Address dari a adalah" << &a << endl;
    cout << "Nilai dari a adalah" << a << endl;
    
    fungsi(a);
    cout << "Nilai dari a adalah" << a << endl;

    kuadrat(a);
    cout << "Nilai dari a adalah" << a << endl;
    return 0;
}

void fungsi(int &b){
    cout << "Address dari b adalah" << &b << endl;
    cout << "Nilai dari b adalah" << b << endl;
}
void kuadrat(int &valRef){
    valRef = valRef * valRef;
}