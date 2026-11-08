#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 2.5;
    double c = 1.5;
    double x;
    cout << "Task 1: Function calculation" << endl;
    cout << "Enter x: ";
    cin >> x;
    double Y;
    if (x <= 0) {
        Y = 2 * pow(x, 2) + a;
    } else {
        Y = (x + 3 * a) * c;
    }
    cout << "Result Y = " << Y << endl;
    return 0;
}
