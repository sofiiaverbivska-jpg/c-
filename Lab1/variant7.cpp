#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 2.0;
    double b = 200.0;
    double angle = (a / b) * M_PI; 
    double numerator = 11.21 * (1.0 + log(b / a));
    double denominator = 1.0 - sin(angle) * cos(angle);
    double fraction = numerator / denominator;
    double y = pow(fraction, 2.0 / 3.0);
    cout << "Variant 7" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Result y = " << y << endl;
    return 0;
}
