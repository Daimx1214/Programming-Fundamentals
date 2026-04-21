#include <iostream>
using namespace std;

int main() {
    cout << "enter your number  "<<endl ;
    for (int i = 1; i <= 20; i++) 
    if(i%5==0&&i%3==0)
    {
        cout << i << " "<<endl;
    }
    
    return 0;
}