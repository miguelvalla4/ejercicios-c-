/*
 Hacer un programa en C++ que calcule la serie de Fibonacci. La serie de Fibonacci es la sucesión de números:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

Cada número se calcula sumando los dos anteriores a él. 
*/
#include <iostream>

using namespace std;

int main()
{
    int n, y = 0, x = 1, z = 1;

    cout << "Introduce el numero de digitos a mostrar de la sucesion: " << endl;
    cin >> n;

    cout << "0, ";

    for (int i = 0; i < n; i++)
    {
        z = x + y;

        cout << z << ", ";

        x = y;
        y = z;
    }
}