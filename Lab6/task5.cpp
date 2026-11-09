#include <iostream>
using namespace std;
int main() {
    int N;
    int sum = 0;
    cout << "Enter a natural number N: ";
    cin >> N;
    if (N <= 0) {
        cout << "Error: Please enter a natural number (greater than 0)." << endl;
        return 1; 
    }
    int temp = N; 
    while (temp > 0) {
        int digit = temp % 10;
        if (digit > 5) {
            sum = sum + digit;
        }
        temp = temp / 10;
    }
    cout << "The sum of digits greater than 5 in the number " << N << " is: " << sum << endl;
    return 0;
}
