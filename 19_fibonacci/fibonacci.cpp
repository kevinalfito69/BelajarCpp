#include <iostream>
using namespace std;

int main()
{
    int n, fn, fn_1, fn_2;
    int i = 0;

    cout << "================Program Deret Fibonacci================" <<endl;
    cout << "Masukan Nilai N: ";
    cin >> n;
    fn_1 = 1;
    fn_2 = 0;
   do
   {
    cout << fn_2 << " ";
    fn = fn_1 + fn_2;
    fn_2 = fn_1;
    fn_1 = fn;
    
    i++;
   } while (i < n);
   
   
    
    return 0;
}
