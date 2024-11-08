#include <iostream>

using namespace std;

class consoleShowTable;
class getTable;
class renderingTable;


class preparationTable
{

private:
    int *XTable, *YTable;
    
public:

    void setXTable(int &x){ XTable= &x;}
    void setYTable(int &y){ YTable= &y;}
    int getXTable(){ return *XTable;}
    int getYtable(){ return *YTable;}

    preparationTable(int x, int y)
    {
        setXTable(x);
        setYTable(y);
    }

    friend getTable;
    friend void testReadTable();
};

class getTable
{

private:

public:

    void testReadTable()
    {
        int x, y;
        cin >> x >> y;
        preparationTable s(x, y);
    }
};


int main()
{
}