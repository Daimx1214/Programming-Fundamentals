#include <iostream>
using namespace std;

int main() {
	int start = 1;
    int row = 6;

    for (int i = 1; i <= 6; i++) {
        int num = start;
        for 
		(int j = 1; j <= i; j++) {
            cout << num << " ";
            num = num - (6 - j);  
        }

        row--;
        start = start + row;
        cout << endl; 
    }

    return 0;
}
