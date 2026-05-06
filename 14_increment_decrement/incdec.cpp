#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 5;
    // preincrement, post increment

    //preincrement
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    cout << "=====================" << endl;
    // post increment
    cout << b << endl;
    cout << ++b << endl;
    cout << b << endl;
    return 0;
}
