#include <iostream>
#include <string>
using namespace std;

int main()
{
  string input;
  cin >> input;

  for(int i = 97; i <= 122; i++)
  {
    cout << (int)input.find((char)i) << " ";
  }
  
  return 0;
}