#include <iostream>
#include <string>
using namespace std;

int main()
{
  string input;
  getline(cin, input);

  int space = 0;

  if(input.empty())
  {
    cout << "0";
    return 0;
  }
  
  space = 1;
  for(int i = 0; i < input.length(); i++)
  {
    if(input[i] == ' ')
      space++;
  }

  if(input[0] == ' ')
    space--;
  if(input[input.length()-1] == ' ')
    space--;
  
  cout << space<< "\n";
  
  return 0;
}