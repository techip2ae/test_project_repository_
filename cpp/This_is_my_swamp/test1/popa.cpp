#include <iostream>
#include <string>
 
int main()
{   
    char u;
    std::cin >> u;
    int count{};   // счетчик, сколько раз встречается символ
    std::string message = "kekech";
    for(char c : message)
    {
        if(c == u)
        {
            count++;
        }
    }
    std::cout << "Count: " << count << std::endl;   // Count: 3
}