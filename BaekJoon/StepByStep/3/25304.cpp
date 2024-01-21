#include <iostream>
using namespace std;

int main(){
    int finalSum, count;
    cin >> finalSum;
    cin >> count;

    int sum = 0;

    for (int i = 0; i < count; i++)
    {
        int A, B;
        cin >> A >> B;

        sum += A * B;
    }

    if(finalSum == sum)
        cout << "Yes";
    else
        cout << "No";
        
    return 0;
}