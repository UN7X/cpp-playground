#include <string>
#include <iostream>
#include <limits>

using namespace std;

int main() {
    int input;
    cout << "current input value: " + to_string(input) + "\n";
    cin >> input;
    if (cin.fail()) {
        cin.clear(); // Clear error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Invalid input discarded.\n";
    }
    cout << "updated input value: " + to_string(input) + "\n";
}