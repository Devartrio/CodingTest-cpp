#include <iostream>
using namespace std;

int main()
{
  string input;

  while(true)
  {
    getline(cin, input);

    if(input == "") break;

    cout << input << "\n";
  }
  
  return 0;
}