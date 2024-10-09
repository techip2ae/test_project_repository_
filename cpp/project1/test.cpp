#include <iostream>
#define pfl(x)(cout << rand() % 10000 * x << endl)
//#define NoEgorNotDump

using namespace std;

int main()
{
#ifdef NoEgorNotDump
    pfl(4);

    cout << "Egor is dump" << endl;

    for (int j=0 ; j<10 ; j++)
    {
        cout << "LoLoLoL" <<endl;
    }
#endif
    int n;
    int* arr = new int[n]{3, 3, 5, 23, -2};

    for (int i{} ; i <= 10; i++)
    {
        cout << arr[i] << endl;
    }

    delete [] arr;

}
