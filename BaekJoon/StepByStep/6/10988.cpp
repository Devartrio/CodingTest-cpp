#include <iostream>
using namespace std;

int main()
{ 
  string input;
  cin >> input;

  string newWord;
  for(int i = input.length() - 1;  i >= 0; i--)
  {
    newWord += input[i];
  }

  if(newWord == input)
    cout << 1;
  else
    cout << 0;
  
  return 0;
}