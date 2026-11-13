#include <iostream>
using namespace std;
int main() {
    const int m = 4;
    const int n = 7;
    int arr[m][n] = {
        {12, 5, 8, 11, 4, 7, 1},
        {7, 10, 13, 4, 9, 2, 6},
        {4, 6, 9, 12, 15, 3, 8},
        {11, 14, 3, 8, 5, 10, 7}
    };
    cout << "Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    int minVal = arr[0][0]; 
    int minRow = 0;     
    int minCol = 0;     
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] < minVal) { 
                minVal = arr[i][j]; 
                minRow = i;         
                minCol = j;        
            }
        }
    }
    cout << "\nMinimum element is: " << minVal << endl;
    cout << "It is located at row " << minRow + 1 << ", column " << minCol + 1 << endl;
    return 0;
}
