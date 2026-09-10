#include <stdio.h>

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int cuantos;
    cout << "Cuantos datos va a introducir? ";
    cin >> cuantos;

    if (cuantos <= 0) {
        cout << "La cantidad no es valida\n";
    } else {
        int llevo = 0;
        double suma = 0, dato, media = 0;

        while (llevo < cuantos) {
            llevo++;
            cout << "Introduzca el dato " << llevo << "/" << cuantos << ": ";
            cin >> dato;
            suma += dato;
        }

        media = suma / cuantos;
        cout << "La media de los " << cuantos << " datos es " << media << ".\n";
    }

    return 0;
}