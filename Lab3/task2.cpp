#include <iostream>
using namespace std;

int main() {
    int modelNumber;
    cout << "Enter car model number (1-4): ";
    cin >> modelNumber;
    switch (modelNumber) {
        case 1:
            cout << "Model: Toyota Corolla" << endl;
            cout << "Year: 2020" << endl;
            cout << "Price: $20,000" << endl;
            break; 
        case 2:
            cout << "Model: Ford Mustang" << endl;
            cout << "Year: 2019" << endl;
            cout << "Price: $35,000" << endl;
            break;
        case 3:
            cout << "Model: Tesla Model 3" << endl;
            cout << "Year: 2022" << endl;
            cout << "Price: $45,000" << endl;
            break;
        case 4:
            cout << "Model: BMW X5" << endl;
            cout << "Year: 2021" << endl;
            cout << "Price: $60,000" << endl;
            break;
        default:
            cout << "Error: Unknown car model number." << endl;
            break;
    }
    return 0;
}
