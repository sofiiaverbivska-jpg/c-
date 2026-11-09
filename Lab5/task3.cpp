#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;
int main() {
    double a, b, h;
    cout << "Enter start of interval (a): ";
    cin >> a;
    cout << "Enter end of interval (b): ";
    cin >> b;
    cout << "Enter step (h): ";
    cin >> h;
    double x = a; 
    cout << "-------------------" << endl;
    cout << ":   X   :   Y     :" << endl;
    cout << "-------------------" << endl;
    while (x <= b) {
        if (fabs(x - 4.0) < 0.000001) {
            cout << "-------------------" << endl;
            cout << "Error: x = " << x << " is not in the domain (division by zero)!" << endl;
            break; 
        }
        double y = 1.0 / pow(x - 4.0, 2) + 6.0;
        cout << ": " << setw(5) << fixed << setprecision(2) << x 
             << " : " << setw(7) << fixed << setprecision(4) << y << " :" << endl;
        x = x + h; 
    }
    if (x > b) {
        cout << "-------------------" << endl;
    }
    return 0;
}
