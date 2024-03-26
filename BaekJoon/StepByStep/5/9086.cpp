#include <iostream>
using namespace std;

int main()
{
  int T;
  cin >> T;

  string array[11];

  for(int i = 0; i < T; i++)
  {
    string temp;
    cin >> temp;

    cout << temp[0] << temp[temp.length()-1] << "\n";
  }
  
  return 0;
}