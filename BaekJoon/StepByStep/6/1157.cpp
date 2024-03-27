#include <iostream>
using namespace std;

int main()
{ 
  string input;
  cin >> input;

  int array[26] = {0, };
  
  for(int i = 0;  i < input.length(); i++)
  {
    input[i] = toupper(input[i]);
    array[(int)input[i] - 65]++;
  }

  int max = -1;
  int index = -1;
  for(int i = 0;  i < 26; i++)
  {
    if(array[i] > max)
    {
      max = array[i];
      index = i;
    }
  }

  int count = 0;
  
  for(int i = 0;  i < 26; i++)
  {
    if(array[i] == max)
    {
      count++;
    }
  }

  if(count > 1) cout << "?";
  else cout << (char)(65+index);
  
  return 0;
}