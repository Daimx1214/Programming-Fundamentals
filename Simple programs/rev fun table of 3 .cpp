 	#include <iostream>
using namespace std;

void Numbers() {
    cout << "The natural number are " << endl;
    for (int i = 20; i >=1; i--){
        i= i-2; 
        cout << i << endl;
    }
}

int main() {
    Numbers();
    return 0;
}