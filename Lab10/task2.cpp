#include <iostream>
using namespace std;
int main() {
    const int m = 6; 
    const int n = 4; 
    int arr[m][n] = {
        {2, 5, 8, 11},
        {7, 10, 13, 4},
        {4, 6, 9, 12},
        {11, 14, 3, 8},
        {6, 7, 10, 15},
        {9, 12, 5, 2}
    };
    cout << "Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nCount of even numbers in each column:" << endl;
    for (int j = 0; j < n; j++) {
        int evenCount = 0;
        for (int i = 0; i < m; i++) {
            if (arr[i][j] % 2 == 0) {
                evenCount++;
            }
        } 
        cout << "Column " << j + 1 << ": " << evenCount << endl;
    }
    return 0;
}
