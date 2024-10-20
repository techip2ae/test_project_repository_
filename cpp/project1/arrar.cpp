#include <iostream>
using namespace std;

void fof(int i, int *arr)
{
    for (int j = 0; j <= i ; j++)
    {
        cout << arr[j] << "\t";
    }
}

int main()
{
    int np, mp;
    cin >> np >> mp;

    int *arr = new int[np];

    for (int i = 0; i < np ; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < np ; i++)
    {
        arr[i] = rand() % mp;
    }

    for (int i = 0; i < np ; i++)
    {
        fof(i, arr);
        cout << "\n";
    }

    delete[] arr;
 
}