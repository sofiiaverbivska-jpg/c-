#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double var1, var2, var3, var4, var5;
    cin >> var1 >> var2 >> var3 >> var4 >> var5;
    cout << fixed << setprecision(1) << var1 << endl;
    cout << fixed << setprecision(2) << var2 << endl;
    cout << fixed << setprecision(6) << var3 << endl;
    cout << fixed << setprecision(2) << var4 << endl;
    cout << fixed << setprecision(0) << var5 << endl;
    return 0;
}
