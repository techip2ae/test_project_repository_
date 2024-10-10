#include <iostream>

using namespace std;

void fun1()
{
    cout << "fuf1" << endl;
}

int fun2(int a)
{
    cout << a << endl;
    return a++;
}

int main()
{
    int(*func)(int);
    func = fun2; 
    func(2);
}
