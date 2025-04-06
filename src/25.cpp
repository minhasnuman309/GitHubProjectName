#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer value: ";
    cin >> n;
    
    if (n % 2 == 0) {
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";
    } else
        cout << "The number is odd" << endl;

    return 0;
}
