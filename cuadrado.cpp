#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Introduce un numero: " << endl;
    cin >> n;

    for (int i=0; i<n; i++) {
        cout << "*";
    }

    return 0;
}