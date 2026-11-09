#include <iostream>
using namespace std;
int main() {
    int oct1, oct2, oct3, oct4;
    cout << "Enter four numbers for the IP address: " << endl;
    cin >> oct1 >> oct2 >> oct3 >> oct4;
    if ((oct1 >= 1 && oct1 <= 255) &&
        (oct2 >= 1 && oct2 <= 255) &&
        (oct3 >= 1 && oct3 <= 255) &&
        (oct4 >= 1 && oct4 <= 255)) {
        cout << oct1 << "." << oct2 << "." << oct3 << "." << oct4 << endl;
    } else {
        cout << "Error: Each part of the IP address must be between 1 and 255." << endl;
    }
    return 0;
}
