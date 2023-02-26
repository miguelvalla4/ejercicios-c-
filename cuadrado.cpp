#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the size of the square: " << endl;
    cin >> n;

    // print the top border
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }

    cout << endl;

    // print the sides and the middle spaces
    for (int i = 0; i < n - 2; i++) {
        cout << "*";
        
        for (int j = 0; j < n - 2; j++) {
            cout << "  ";
        }
        
        cout << " *\n";
    }

    // print the bottom border
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }

    cout << endl;

    return 0;
}