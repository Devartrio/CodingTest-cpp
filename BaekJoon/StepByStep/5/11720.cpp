#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  string input;
  cin >> input;

  int sum = 0;

  for(int i = 0; i < N; i++)
  {
    sum += (int)input[i] - 48;
  }

  cout << sum;
  
  return 0;
}