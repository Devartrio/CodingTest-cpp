#include <iostream>
using namespace std;

int main(){
    int first, second, third;
    cin >> first >> second >> third;

    if(first == second && second == third)
        cout << 10000 + first * 1000;
    else if(first == second)
        cout << 1000 + first * 100;
    else if(second  == third)
        cout << 1000 + second * 100;
    else if(third == first)
        cout << 1000 + third * 100;
    else
    {
        int max = first;
        if(second > max) max = second;
        if(third > max) max = third;

        cout << max * 100;
    }


    return 0;
}