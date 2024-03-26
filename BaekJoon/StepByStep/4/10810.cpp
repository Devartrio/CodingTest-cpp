#include <iostream>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  int array[101] = {0, };

  for(int index = 0; index < M; index++)
  {
    int i, j, k;
    cin >> i >> j >> k;

    for(int inner = i - 1; inner <= j - 1; inner++)
    {
      array[inner] = k;
    }
  }

  for(int index = 0; index < N; index++)
  {
    cout << array[index] << " ";
  }

  cout << "\n";

  return 0;
}