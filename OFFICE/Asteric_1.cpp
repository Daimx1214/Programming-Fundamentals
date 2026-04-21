#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i = 1; i <= 5; i++)
    {
        if(i == 1 || i == 5)
        cout << "*****" << endl;
    
        else
        cout << "*   *" << endl;
    }    
    return 0;
}