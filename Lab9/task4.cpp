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
    int A;
    cout << "Enter A: ";
    cin >> A;
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] > A) count++;
    }
    cout << "Elements greater than " << A << ": " << count << endl;
    return 0;
}
