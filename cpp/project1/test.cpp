#include <iostream>
#define pfl(x)(cout << rand() % 10000 * x << endl)
//#define NoEgorNotDump

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
>>>>>>> 2508e564128fc246aabca4624019e682aefbc2c8
    }
#endif
    int n;
    int* arr = new int[n]{3, 3, 5, 23, -2};

    for (int i{} ; i <= 10; i++)
    {
<<<<<<< HEAD
      kok*= a[j];
    } 
    if (a[j] % 2 != 0)
    {
      r++;
=======
        cout << arr[i] << endl;
>>>>>>> 2508e564128fc246aabca4624019e682aefbc2c8
    }

<<<<<<< HEAD
  for (int j= 1 ;j <= n; j++)
  {
    cout << "A["<< j << "] = " << a[j] << endl;
  }
=======
    delete [] arr;
>>>>>>> 2508e564128fc246aabca4624019e682aefbc2c8

}
