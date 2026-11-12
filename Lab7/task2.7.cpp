#include <iostream> 
using namespace std; 
int main(void) { 
    double pi4 = 0.; 
    long n; 
    cout << "Number of iterations? "; 
    cin >> n; 
    double sign = 1.0;
    for (long i = 0; i < n; i++) {
        double denominator = 2 * i + 1; 
        pi4 = pi4 + sign / denominator;
        sign = -sign; 
    }
    cout << "Pi = " << (pi4 * 4.) << endl; 
    return 0; 
}
