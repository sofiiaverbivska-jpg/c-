#include <iostream>
using namespace std;
int main() {
    const int m = 3; 
    const int n = 3;
    int arr[m][n] = {
        {2, 5, 8},
        {7, 10, 13},
        {4, 6, 9}
    };
    cout << "Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    int mainSum = 0;  
    int sideSum = 0; 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                mainSum = mainSum + arr[i][j];
            }
            if (i + j == n - 1) {
                sideSum = sideSum + arr[i][j];
            }
        }
    }
    cout << "\nSum of main diagonal: " << mainSum << endl;
    cout << "Sum of side diagonal: " << sideSum << endl;
    return 0;
}
