#include <iostream>
// #include <string>
using namespace std;

int main()
{
  int array[] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
  
  string input;
  cin >> input;

  int sum = 0;
  
  for(int i = 0; i < input.length(); i++)
  {
    sum += array[int(input[i])- 65] + 1;
  }

  cout << sum << "\n";
  
  return 0;
}