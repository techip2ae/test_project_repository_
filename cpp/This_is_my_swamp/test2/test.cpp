#include <iostream>
 
using namespace std;

int main()
{
    int x ;
    cin >> (x);
      
    switch(x)
    {
        case 1: 
            cout << "x = 1" << "\n";
            break;
        case 2: 
            cout << "x = 2" << "\n";
            break;
        case 3: 
            cout << "x = 3" << "\n";
            break;
        default: 
            cout << "x is undefined" << "\n";
            break;
    }
}