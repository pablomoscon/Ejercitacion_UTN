#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;

    return;
}

int main()
{

    int x, y;

    cout << "Ingrese el primero número: ";
    cin >> x;

    cout << "Ingrese el segund número: ";
    cin >> y;

    swap(x, y);

    cout << "El primer numero es " << x << " y el segundo número es " << y << endl;
}

int suma(int &a, int &b)
{
    int resultado;
    resultado = a + b;
    a = resultado;
    return resultado;
}

int main () {

    int x = 10, y = 20;

    cout << suma(x, y) << endl;


    cout << suma(x, y) << endl;
}


