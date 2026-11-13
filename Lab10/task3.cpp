#include <iostream>
using namespace std;
int main() {
    const int m = 5; 
    const int n = 7;
    int arr[m][n] = {
        {2, 5, 8, 11, 4, 7, 1},
        {7, 10, 13, 4, 9, 2, 6},
        {4, 6, 9, 12, 15, 3, 8},
        {11, 14, 3, 8, 5, 10, 7},
        {6, 7, 10, 15, 2, 9, 4}
    };
    cout << "Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nSum of elements in each row:" << endl;
    for (int i = 0; i < m; i++) {
        int rowSum = 0; 
        for (int j = 0; j < n; j++) {
            rowSum = rowSum + arr[i][j]; 
        }        
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
    return 0;
}
