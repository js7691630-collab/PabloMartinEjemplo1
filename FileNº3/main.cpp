#include <stdio.h>


using namespace std;

int main(int argc, char** argv)
{
    int x = 'a';
    x = x + 1;
    char c = x;
    cout << "El valor del int \"x\" es " << x << "." << endl;
    cout << "El valor del char \"c\" es " << c << "." << endl;
    return 0;
}