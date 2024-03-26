#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  float array[1001] = {0, };
  int max = 0;

  for(int i = 0; i < N; i++)
  {
    cin >> array[i];
    
    if(array[i] > max)
      max = array[i];
  }
  
  float average = 0;

  for(int i = 0; i < N; i++)
  {
    // if(array[i] != max)
      array[i] *= (float)100 / max;

    average += array[i];
  }

  average /= N;

  cout << average << "\n";
  
  return 0;
}