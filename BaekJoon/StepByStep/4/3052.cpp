#include <iostream>
using namespace std;

int main()
{
  int input[10] = {0, };

  for(int i = 0; i < 10; i++)
  {
    cin >> input[i];
  }

  int array[42] = {0, };

  for(int i = 0; i < 10; i++)
  {
    int number = input[i] % 42;
    array[number] = 1;
  }

  int count = 0;

  for(int i = 0; i < 42; i++)
  {
    if(array[i] == 1)
      count++;
  }

  cout << count << "\n";
  
  return 0;
}