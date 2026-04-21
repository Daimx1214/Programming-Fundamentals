#include <iostream>
using namespace std;

void Numbers() {
  //  cout << "The natural number are " << endl;
    for (int i = 1;  i <=20;i++){
       if (i%3==0 && i%5==0)
        cout << i << endl;
    }
}

int main() {
    Numbers();
    return 0;
}