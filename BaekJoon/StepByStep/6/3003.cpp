#include <iostream>
using namespace std;

int main()
{ 
  int correct[6] = { 1, 1, 2, 2, 2, 8};
  int array[6] = {0, };

  for(int i = 0; i < 6; i++)
  {
    cin >> array[i];  
    correct[i] -= array[i];
  }

  for(int i = 0; i < 6; i++)
  {
    cout << correct[i] << " ";
  }
  
  return 0;
}