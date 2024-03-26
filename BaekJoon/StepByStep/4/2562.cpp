#include <iostream>
using namespace std;

int main()
{
  int array[9] = {0, };

  for(int i = 0; i < 9; i++)
  {
    cin >> array[i];
  }
  
  int max = 0;
  int maxindex = 0;
  
  for(int i = 0; i < 9; i++)
  {
    if(array[i] > max)
    {
      max = array[i];
      maxindex = i;
    }
  }

  cout << max << "\n" << maxindex + 1 << "\n";
  return 0;
}