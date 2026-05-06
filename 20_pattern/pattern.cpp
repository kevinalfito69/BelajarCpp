#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Masukan pola: ";
    cin >> n ;
    cout << "======Pola1======" << endl;
    for (int i = 0; i <= n; i++){
        for (int j = 1; j <= i; j++)
        {
            cout << '*' ;
            
        }
        cout << endl;
        
    }
    cout << "======Pola2======" << endl;
    for (int i = 0; i <= n; i++){
        for (int j = n; j >= i; j--)
        {
            cout << '*' ;
            
        }
        cout << endl;
        
    }
    
    
    return 0;
}
