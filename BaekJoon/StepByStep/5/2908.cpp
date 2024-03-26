#include <iostream>
using namespace std;

int main()
{
  string first, second;
  cin >> first >> second;

  string bigger;
  
  for(int i = 2; i >= 0; i--)
  {
    if(first[i] > second[i]){
      bigger = first; break;
    }
    else if(first[i] < second[i]){
      bigger = second; break;
    }
      
  }

  cout << bigger[2] << bigger[1] << bigger[0] << "\n";
  
  return 0;
}