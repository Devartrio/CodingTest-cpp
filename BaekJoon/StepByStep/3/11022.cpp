#include <iostream>
using namespace std;

int main() 
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		int a, b;
		cin >> a >> b;

		cout << "Case #" <<  i << ": " << a << " + " << b << " = " << a + b << "\n";
	}
}