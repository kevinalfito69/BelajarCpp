#include <iostream>
using namespace std;
// reference adalah berbagi memory
int main(){
    // variabel
    int a = 5;
    cout << "address dari a adalah: "<< &a << endl;
    cout << "nilai dari: "<< a <<endl;
    // reference
    int &b = a;
    cout << "nilai dari b adalah: " << b << endl;
    cout << "address dari b adalah: " << &b << endl;
    b = 10;
    cout << "nilai dari a adalah: " << a << endl;
    cout << "address dari b adalah: " << b << endl;
    a = 20;
    cout << "nilai dari a adalah: " << a << endl;
    cout << "address dari b adalah: " << b << endl;
    return 0;
}