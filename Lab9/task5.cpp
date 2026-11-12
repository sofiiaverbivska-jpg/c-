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
    int largestIndex = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] > arr[largestIndex]) largestIndex = i;
    }
    int secondLargest = arr[0];
    bool found = false;
    for (int i = 1; i < N; i++) {
        if (i != largestIndex) {
            if (!found || arr[i] > secondLargest) {
                secondLargest = arr[i];
                found = true;
            }
        }
    }
    cout << "Largest: " << arr[largestIndex] << endl;
    cout << "Second largest: " << secondLargest << endl;
    return 0;
}
