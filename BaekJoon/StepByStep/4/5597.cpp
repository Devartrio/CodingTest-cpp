#include <iostream>
using namespace std;

int main()
{
  int array[30] = {0, };

  for(int i = 0; i < 30; i++)
  {
    int a ;
    cin >> a;

    array[a - 1] = 1;
  }

  for(int i = 0; i < 30; i++)
  {
    if(array[i] != 1)
      cout << i + 1 << "\n";
  }
  
  return 0;
}