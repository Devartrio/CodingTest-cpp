#include <iostream>
using namespace std;

int main(){
    int A, B;

    cin >> A >> B;

    int firstB = B / 100;
    int secondB = B % 100 / 10;
    int thirdB = B % 10;

    cout << A * thirdB << "\n";
    cout << A * secondB << "\n";
    cout << A * firstB << "\n";
    cout << A * B << "\n";

    return 0;
}