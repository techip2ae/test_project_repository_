#include <iostream>

using namespace std;

void fofo(int *x)
{
    cout << *x << endl;
}

void fofo(double *x)
{
    cout << *x << endl;
}

int main()
{
    int g= 7;
    int *pint= &g;
    double gogo= 34.2342345;
    double *pdouble= &gogo;

    fofo(&g);

}