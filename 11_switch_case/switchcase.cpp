#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    char operasi;

    cout << "================== operasi aritmatika switch case ==================" << endl;
    cout << "Masukan nilai A: ";
    cin >> a;
    cout << endl;

    cout << "masukan nilai B: ";
    cin >> b;
    cout << endl;

    cout << "Masukan Operasi: ";
    cin >> operasi;
    cout << endl;

    switch(operasi){
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b << endl;
        break;
    
    default:
        cout << "Operator tidak valid gunakan +, -, * atau /" << endl;
        break;
    }

    return 0;


}