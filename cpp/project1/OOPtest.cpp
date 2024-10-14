#include <iostream>

using namespace std;

class sysu
{
private:
    int *x;
public:

    sysu(int siz)
    {
        this->x = new int[siz];
        for(int i{};i<siz;i++)
        {
            x[i]= i;
        }
    };

    void print(int siz)
    {
        cout << "x array=/" << endl;
        for (int i{}; i < siz; i++)
        {
            cout << x[siz] << endl;
        }
    }

    ~sysu(){delete[] x;};

};

int main()
{
    sysu(5);
}