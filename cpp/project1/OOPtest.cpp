#include <iostream>
#include <string>

using namespace std;

class Humas
{
public:
    int age;
    string name;

};

int main()
{
    Humas grey;

    grey.age = 12;
    grey.name = "susu";

    cout << "name: " << grey.name << endl;
    cout << "age: " << grey.age << endl;

}