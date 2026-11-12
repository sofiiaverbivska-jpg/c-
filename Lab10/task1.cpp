#include <iostream>
using namespace std;
int main() {
    const int m = 4; 
    const int n = 3; 
 
    int arr[m][n] = {
        {2, 5, 8},   
        {7, 10, 13},  
        {4, 6, 9},   
        {11, 14, 3} 
    };
    cout << "Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nCount of even numbers in each row:" << endl;
    for (int i = 0; i < m; i++) {
        int evenCount = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] % 2 == 0) {
                evenCount++;
            }
        }
        cout << "Row " << i + 1 << ": " << evenCount << endl;
    }
    return 0;
}
