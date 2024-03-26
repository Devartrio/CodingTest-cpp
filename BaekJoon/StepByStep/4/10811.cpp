#include <iostream>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  int array[101] = {0, };

  for(int i = 1; i <= N; i++)
  {
    array[i] = i;
  }

  for(int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;

    for(int j = 0; j <= (b - a) / 2; j++)
    {
      swap((array[a+j]), array[b-j]);
    }
  }

  for(int i = 1; i <= N; i++) {
    cout << array[i] << ' ';
  }
  
  return 0;
}