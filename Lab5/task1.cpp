#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double x, y;
    cout << "Enter 5 values for x:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "x[" << i + 1 << "] = ";
        cin >> x;
        y = pow(sin(x), 5) + fabs(5 * x - 1.5);
        cout << "   y = " << y << endl;
    }
    return 0;
}
