#include<iostream>
using namespace std;

int main()
{ int a;
cout << "enter a number";
cin>>a;
int b;
cout << "enter other number";
cin>>b;
int power =1;
if(a<=b) {
for(int step=0;step<=a;step++)
    { power =power*a;
   }
         }
        cout << power << endl;
        a++;
        return 0;
    
    
}