#include<iostream>

using namespace std;

void anyway(); 

int main()
{
    anyway();
}

void anyway()
{
    int n;
    cin >> n;
    int mass[n];
    
    for(int i=1 ; i <= n; i++)
    {
        mass[i] = rand() % n;
        cout << "mass[" << i << "]=" << mass[i] << endl;
    }  
}