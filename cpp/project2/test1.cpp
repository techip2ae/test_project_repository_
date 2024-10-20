#include <iostream>
using namespace std;

int main()
{
    int f = 5;
    int *n= &f;  // размер массива
    int *p{ new int[*n] { 1, 2, 3, 4, 5 } };
 
    // используем индексы
    for (int i{}; i < *n; i++)
    {
        std::cout << p[i] << "\t";
    }
    std::cout << std::endl;
 
    delete [] p;
}