#include <iostream>
using namespace std;
int main() {
    const int N = 10;
    int arr[N] = {-5, 3, -2, 8, -1, 10, -4, 7, -6, 2};
    cout << "Original array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int maxIndex = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    cout << "Max element is " << arr[maxIndex] << " at index " << maxIndex << endl;
    for (int i = 0; i < maxIndex; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
    cout << "Modified array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
