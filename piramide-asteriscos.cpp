/*
Hacer que imprima una pirámide de asteriscos tomando como entrada el número de filas de la misma. 
La pirámide debe quedar de la siguiente manera:
    *
    ***
    *****
*/
#include <iostream>

using namespace std;
    
int main()
{
    int n;

    cout << "Ingrese un numero entero: ";
    cin >> n;
    cout << endl;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
} 