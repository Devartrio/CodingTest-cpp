#include <iostream>
using namespace std;

int main() 
{
	int T;
	cin >> T;

	string output;

	for (int i = 0; i < T / 4; i++)
	{
		output += "long ";
	}

	if(T % 4 != 0)
		output += "long ";

	output += "int";

	cout << output;
}