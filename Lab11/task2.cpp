#include <iostream>
#include <iomanip>
using namespace std;
struct Date {
    int hours;
    int minutes;
};
int main() {
    Date startTime, endTime;
    cout << "Enter start time (hours minutes): ";
    cin >> startTime.hours >> startTime.minutes;
    cout << "Enter end time (hours minutes): ";
    cin >> endTime.hours >> endTime.minutes;
    if (startTime.hours < 0 || startTime.hours >= 24 || startTime.minutes < 0 || startTime.minutes >= 60) {
        cout << "Error: Invalid start time." << endl;
        return 1;
    }
    if (endTime.hours < 0 || endTime.hours >= 24 || endTime.minutes < 0 || endTime.minutes >= 60) {
        cout << "Error: Invalid end time." << endl;
        return 1;
    }
    int startTotal = startTime.hours * 60 + startTime.minutes;
    int endTotal = endTime.hours * 60 + endTime.minutes;
    int diff = endTotal - startTotal;
    if (diff < 0) {
        diff = diff + 24 * 60;
    }
    int diffHours = diff / 60;
    int diffMinutes = diff % 60;
    cout << "Duration: " << diffHours << ":" << diffMinutes << endl;
    return 0;
}
