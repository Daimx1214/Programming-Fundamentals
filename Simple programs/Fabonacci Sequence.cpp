

#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, n;
    cout<<"Enter the number: ";
    cin >> n;
    cout << "Fibonacci sequence: ";
    for (int i = 1; i <= n; ++i) {
        cout << a << " ";   
        int temp = a + b;   
        a = b;              
        b = temp;     
   }

    return 0;
}