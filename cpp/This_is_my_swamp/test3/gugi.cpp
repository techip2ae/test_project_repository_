#include <iostream>
#include <time.h>
using namespace std;
    
int main()
{
    srand(time(NULL));
    int max_mass;
    cin >> max_mass;
    int mass[max_mass];
    
    for(int i=1 ; i < max_mass; i++)
    {
        mass[i] = rand() % 50;
    }

    for(int i=1 ; i <= max_mass;i++)
    {    
        cout << "mass[" << i << "]=" << mass[i] << endl;
    }

}
