  // C++ program to check whether a number is prime or not
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is neither prime nor composite." << endl;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                cout << n << " is not prime." << endl;
                break;
            }
        }
        if (i * i > n) {
            cout << n << " is prime." << endl;
        }
    }
    return 0;
}