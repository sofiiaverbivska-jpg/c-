#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Task 2: Area check (Variant 2)" << endl;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    if (x >= 0 && y >= 0 && y <= -x + 2) {
        cout << "The point is INSIDE the area." << endl;
    } else {
        cout << "The point is OUTSIDE the area." << endl;
    }
    return 0;
}
