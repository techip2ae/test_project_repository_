#include <iostream> 

using namespace std;
    
int main()
{
    int max_mass;
    cin >> max_mass;
    int mass[max_mass];
    
    for(int i=1 ; i <= max_mass; i++) {
    
    cout << "write number";
    cin >> mass[i];
    
    }
    for(int i=1 ; i <= max_mass; i++){
        cout << "mass[" << i << "]=" << mass[i] << endl;
    }
}    
