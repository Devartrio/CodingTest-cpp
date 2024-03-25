#include <iostream>
using namespace std;

int main()
{
	int N, X;
	cin >> N >> X;

	int value;
	for (int i = 0; i < N; i++)
	{
		cin >> value;
		if (value < X) {
			cout << value << " ";
		}
	}
}