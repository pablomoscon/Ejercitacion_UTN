#include <iostream>
using namespace std;

void cargar(int vec[], int cant)
{
    for (int i = 0; i < cant; i++)
    {
        cout << "Ingrese el monto del día " << i + 1 << ": ";
        cin >> vec[i];
    }
}
void imprimir(int vec[], int cant)
{
    for (int i = 0; i < cant; i++)
    {
        cout << "Facturación del día " << i + 1 << ": " << vec[i] << endl;
    }
}

int promedio(int arr[], int n)
{

    int suma = 0;

    for (int i = 0; i < n; i++)
    {
        suma += arr[i];
    }

    return suma / n;
}

int mejorDia(int arr[], int n)
{

    int mejorFacturacion = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mejorFacturacion)
            mejorFacturacion = arr[i];
    }

    return mejorFacturacion;
}

int segundoMejorDia(int arr[], int n)
{

    int mejorFacturacion = 0;
    int segundaMejorFacturacion = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mejorFacturacion) {
            segundaMejorFacturacion = mejorFacturacion;
            mejorFacturacion = arr[i];
        }

        else if (arr[i] > segundaMejorFacturacion)
            segundaMejorFacturacion = arr[i];
    }

    return segundaMejorFacturacion;
}

int main()
{
    int dias;
    cout << "ingrese cantidad de dias: ";
    cin >> dias;

    int facturacion[dias];

    cargar(facturacion, dias);

    imprimir(facturacion, dias);

    cout << "Promedio facturacion: " << promedio(facturacion, dias) << endl;
    cout << "La mejor facturacion es: " << mejorDia(facturacion, dias) << endl;
    cout << "La segunda mejor facturacion es: " << segundoMejorDia(facturacion, dias) << endl;
    return 0;
}