#include <iostream>
using namespace std;
int main() {
    const int m = 4; 
    const int n = 6;
    int arr[m][n] = {
        {2, 5, 8, 11, 4, 7},
        {7, 10, 13, 4, 9, 2},
        {4, 6, 9, 12, 15, 3},
        {11, 14, 3, 8, 5, 10}
    };
    cout << "Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nSum of elements in each column:" << endl;
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum = colSum + arr[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
    return 0;
}
