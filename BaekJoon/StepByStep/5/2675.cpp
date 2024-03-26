#include <iostream>
using namespace std;

int main()
{
  int T;
  cin >> T;

  for(int i = 0; i < T; i++)
  {
    int R;
    cin >> R;
    string input;
    cin >> input;

    string output = "";

    for(int j = 0; j < input.length(); j++)
    {
      for(int index = 0; index < R; index++)
      {
        output += input[j];
      }
    }
    
    cout << output << "\n";
  }
  
  return 0;
}