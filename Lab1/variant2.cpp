#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 2.0;
    double b = 14.36;
    double numerator = 8.15 * cbrt(b) * log(a);
    double denominator = 24.38 * cos(b) * (exp(a) - pow(a, a));
    double y = numerator / denominator;
    cout << "Variant 2" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Result y = " << y << endl;
    return 0;
}
