#include <iostream>
using namespace std;

void fof(int j, int *n, int *arr)
{
    for (;j < *n; j++)
    {
        cout << arr[j] << "\t";
    }
}

int main()
{
    int *n, *m;
    cin >> *n >> *m;

    int *arr = new int[*n];

    for (int i = 0; i < *n ; i++)
    {
        arr[i] = rand() % *m;
    }

    for (int i = 0; i < *n ; i++)
    {
        fof(i, n, arr);
        cout << "\n";
    }

delete [] arr;
    
}