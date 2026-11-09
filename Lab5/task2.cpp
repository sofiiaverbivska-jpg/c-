#include <iostream>
using namespace std;
int main() {
    int number;
    int sumOfSquares = 0; 
    cout << "Enter 10 natural numbers:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "Number " << i << ": ";
        cin >> number;
        sumOfSquares = sumOfSquares + (number * number);
    }
    cout << "The sum of their squares is: " << sumOfSquares << endl;
    return 0;
}
