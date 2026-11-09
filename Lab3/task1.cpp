#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a three-digit positive number N: ";
    cin >> N;
    if (N < 100 || N > 999) {
        cout << "Error: Please enter a three-digit number." << endl;
        return 1;
    }
    int hundreds = N / 100;
    int tens = (N / 10) % 10;
    int units = N % 10;
    int sum = 0;
    if (hundreds > 5) {
        sum += hundreds;
    }
    if (tens > 5) {
        sum += tens;
    }
    if (units > 5) {
        sum += units;
    }

    cout << "The sum of digits greater than 5 is: " << sum << endl;

    return 0;
}
