#include <iostream>
#include <iomanip> 
using namespace std;
struct Date {
    int hours;
    int minutes;
};
int main() {
    Date startTime;
    int elapsedMinutes;
    cout << "Enter start hours: ";
    cin >> startTime.hours;
    cout << "Enter start minutes: ";
    cin >> startTime.minutes;
    cout << "Enter elapsed minutes: ";
    cin >> elapsedMinutes;
    if (startTime.hours < 0 || startTime.hours >= 24) {
        cout << "Error: Hours must be between 0 and 23." << endl;
        return 1;
    }
    if (startTime.minutes < 0 || startTime.minutes >= 60) {
        cout << "Error: Minutes must be between 0 and 59." << endl;
        return 1;
    }
    if (elapsedMinutes < 0) {
        cout << "Error: Elapsed minutes cannot be negative." << endl;
        return 1;
    }
    int totalMinutes = startTime.hours * 60 + startTime.minutes + elapsedMinutes;
    int newHours = (totalMinutes / 60) % 24;
    int newMinutes = totalMinutes % 60;
    cout << "New time: ";
    cout << setfill('0') << setw(2) << newHours << ":"
         << setfill('0') << setw(2) << newMinutes << endl;
    return 0;
}
