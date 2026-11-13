#include <iostream>
using namespace std;
int main() {
    const int m = 3; 
    const int n = 4;
    int arr[m][n] = {
        {2, 5, 8, 11},
        {7, 10, 13, 4},
        {4, 6, 9, 12}
    };
    cout << "Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    int maxVal = arr[0][0]; 
    int maxRow = 0;   
    int maxCol = 0;      
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j]; 
                maxRow = i;      
                maxCol = j;       
            }
        }
    }
    cout << "\nMaximum element is: " << maxVal << endl;
    cout << "It is located at row " << maxRow + 1 << ", column " << maxCol + 1 << endl;

    return 0;
}
