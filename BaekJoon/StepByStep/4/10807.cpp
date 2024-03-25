#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int arr[100] = { 0, };
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	int match;
	cin >> match;

	int count = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] == match)
			count++;
	}

	cout << count;
}