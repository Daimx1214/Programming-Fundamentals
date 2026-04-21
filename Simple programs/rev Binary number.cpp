#include <iostream>

using namespace std;

int main() {
    cout << "enter a number " << endl;

    for (int i = 20; i >= 1; i--) {
        cout << i << " " <<bitset<5>(i)<< endl;
    }

    return 0;
}