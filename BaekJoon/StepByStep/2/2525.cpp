#include <iostream>
using namespace std;

int main(){
    int hour, minute, time;
    cin >> hour >> minute;
    cin >> time;

    int leftMinute;
    int leftHour;
    leftMinute = (minute + time) % 60;
    leftHour = (minute + time) / 60;

    hour = (hour + leftHour) % 24;

    cout << hour << " "<< leftMinute;

    return 0;
}