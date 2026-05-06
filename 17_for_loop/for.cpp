#include <iostream>
using namespace std;

int main(){
    for ( int i = 1; i <= 10; i++){
        cout << i << endl;
    }
    for(int i = 1; i <= 10; i+=2){
        cout << i<< endl;
    }
    int total = 0;
    for ( int i = 1; i <= 10; i++, total += i){
        
        cout << i << "||" << total << endl;
    }
    return 0;

}