#include <iostream>

using namespace std;

class Humas
{
public:
    int age;
    string name;

    void vice(int age_f, string name_f)
    {
        cout << "age: " << age << "\n" << "name: " << name << endl;
    }

};

int main()
{
    Humas grey;

    grey.vice(12, "susu");

}