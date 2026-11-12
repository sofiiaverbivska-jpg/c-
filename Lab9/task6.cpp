#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    const int N = 10;
    int arr[N];
    cout << "Array: ";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 101 - 50;
        cout << arr[i] << " ";
    }
    cout << endl;
    int firstZeroIndex = -1;
    for (int i = 0; i < N; i++) {
        if (arr[i] == 0) {
            firstZeroIndex = i;
            break; 
        }
    }
    if (firstZeroIndex != -1) {
        cout << "First zero element is at index: " << firstZeroIndex << endl;
    } else {
        cout << "The array does not contain zero elements." << endl;
    }
    return 0;
}
