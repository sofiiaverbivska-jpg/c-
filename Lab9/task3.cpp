#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int N = 10;
    int arr[N];
    cout << "Original array: ";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 101 - 50;
        cout << arr[i] << " ";
    }
    cout << endl;
    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] > arr[maxIndex]) maxIndex = i;
        if (arr[i] < arr[minIndex]) minIndex = i;
    }
    cout << "Max: " << arr[maxIndex] << " (index " << maxIndex << ")" << endl;
    cout << "Min: " << arr[minIndex] << " (index " << minIndex << ")" << endl;
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
    cout << "After swap: ";
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
