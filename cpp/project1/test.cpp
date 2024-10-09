#include <iostream> 
using namespace std;

int main()
{
  int n, s= 0, r= 0, kok= 1;
  cout << "enter n quantity: ";
  cin >> n;
  int a[n];

  for (int j= 1 ;j <= n; j++)
  {
    cout << "enter "<< j << " array element: ";
    cin >> a[j];
  }
  
  for (int j= 1 ;j <= n; j++)
  {
    if (a[j] % 2 == 0)
    {
      s+= a[j];
    }
    if (a[j] < 0)
    {
      kok*= a[j];
    } 
    if (a[j] % 2 != 0)
    {
      r++;
    }
  }

  for (int j= 1 ;j <= n; j++)
  {
    cout << "A["<< j << "] = " << a[j] << endl;
  }

  cout << "sum of even numbers = "<< s << endl;
  cout << "product of negative numbers = "<< kok << endl;
  cout << "number of odd elements = "<< r << endl;
}
