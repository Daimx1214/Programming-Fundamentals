#include <iostream>
using namespace std;

void prime() {
    for (int i = 2; i <= 20; i++) {
        int count = 0;
        for (int b = 2; b < i; b++) {
            if (i % b == 0) {
                count++;
            }
        }
        if (count == 0) {
            cout << "The number " << i << " is prime." << endl;
        }
        if (i % 2 == 1) {
            cout << "The number " << i << " is odd." << endl;
        }
    }
}

int main() {
    prime(); 
    return 0;
}