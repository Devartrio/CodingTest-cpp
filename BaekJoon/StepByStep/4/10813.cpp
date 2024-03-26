#include <iostream>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  int array[101] = {0, };

  for(int index = 1; index <= N; index++)
  {
    array[index] = index;
  }

  for(int index = 0; index < M; index++)
  {
    int a, b;
    cin >> a >> b;

    int temp;
    temp = array[a];
    array[a] = array[b];
    array[b] = temp;
  }

  for(int index = 1; index <= N; index++)
  {
    cout << array[index] << " ";
  }

  cout << "\n";

  return 0;
}