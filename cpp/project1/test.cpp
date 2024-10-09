#include <iostream> 
using namespace std;

int main()
{
<<<<<<< HEAD
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
=======
#ifdef NoEgorNotDump
    pfl(4);

    cout << "Egor is dump" << endl;

    for (int j=0 ; j<10 ; j++)
    {
        cout << "LoLoLoL" <<endl;
>>>>>>> parent of 1fc6e97 (Merge branch 'main' of https://github.com/techip2ae/test_project_repository_ into techi_coding_OOP)
    }
    if (a[j] < 0)
    {
<<<<<<< HEAD
      kok*= a[j];
    } 
    if (a[j] % 2 != 0)
    {
      r++;
=======
        cout << arr[i] << endl;
>>>>>>> parent of 1fc6e97 (Merge branch 'main' of https://github.com/techip2ae/test_project_repository_ into techi_coding_OOP)
    }
  }

<<<<<<< HEAD
  for (int j= 1 ;j <= n; j++)
  {
    cout << "A["<< j << "] = " << a[j] << endl;
  }
=======
    delete [] arr;
>>>>>>> parent of 1fc6e97 (Merge branch 'main' of https://github.com/techip2ae/test_project_repository_ into techi_coding_OOP)

  cout << "sum of even numbers = "<< s << endl;
  cout << "product of negative numbers = "<< kok << endl;
  cout << "number of odd elements = "<< r << endl;
}
