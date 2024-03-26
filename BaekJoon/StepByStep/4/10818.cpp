#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int array[1000001] = {0, };

  for(int i = 0; i < N; i++)
  {
    cin >> array[i];
  }

  int max = -1000000;
  int min = 1000000;

  for(int i = 0; i < N; i++)
  {
    if(array[i] >= max)
        max = array[i];

    if(array[i] <= min)
        min = array[i];
  }

  cout << min << " " << max << "\n";
  
  return 0;
}