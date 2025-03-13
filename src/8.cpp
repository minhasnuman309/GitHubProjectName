#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> names = {"Alice", "Bob", "Charlie"};
    string input;
    cout << "Enter a name: ";
    cin >> input;
    for (auto name : names) {
        if (name == input) {
            cout << "Hello, " << name << "!" << endl;
            return 0;
        }
    }
    cout << "I don't know that person." << endl;
    return 1;
}
