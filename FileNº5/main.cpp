#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
    int x, y, min, max;
    cout << "Valor de x: ";
    cin >> x;
    cout << "Valor de y: ";
    cin >> y;

    if (x < y)
        min = x;
    else
        min = y;

    max = (x > y ? x : y);

    cout << "El minimo es " << min << " y el maximo es " << max << endl;
    return 0;
}