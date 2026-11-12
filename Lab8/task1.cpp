#include <iostream>
using namespace std;

int main() {
    const int N = 12;
    int arr[N] = {5, -2, 8, 0, 15, -7, 3, 12, 1, -9, 4, 6}; 
    cout << "Original array: ";
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Ascending:  ";
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Descending: ";
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
