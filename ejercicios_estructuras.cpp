#include <iostream>
using namespace std;

// 1) Ejercicio 1

// struct Alumno
// {
//     char legajo[8];
//     char apellidoNombre[25];
//     int nota;
// };

// int main()

// {

//     Alumno unAlumno;
//     unAlumno.legajo = 1;
//     unAlumno.apellidoNombre = "Juan Lopez";
//     unAlumno.nota = 6;

//     return 0;
// }

// Ejercicio 3

struct Reg
{
    string nombre;
    int fecha;
};

int ingresarRegistro(Reg conjuntoRegistro[1000])
{
    int i = 0;
    string nombre;

    while (true)
    {
        cout << "Ingrese nombre (FIN para terminar): ";
        cin >> nombre;

        conjuntoRegistro[i].nombre = nombre; 

        if (nombre == "FIN")
            break; 

        cout << "Ingrese fecha de nacimiento (AAAAMMDD): ";
        cin >> conjuntoRegistro[i].fecha;

        i++;

        if (i >= 999) 
        {
            cout << "Se alcanzó el máximo de registros (999 + FIN)." << endl;
            conjuntoRegistro[i].nombre = "FIN"; 
            break;
        }
    }

    return i; 
}

void calcularMayorEdad(Reg &mayorEdad, Reg registro)
{
    if (registro.fecha < mayorEdad.fecha)
        mayorEdad = registro;
}

void mostrarMayorEdad(Reg mayorEdad)
{
    cout << "\nLa persona con mayor edad es:\n";
    cout << "Nombre: " << mayorEdad.nombre << endl;
    cout << "Fecha de nacimiento: " << mayorEdad.fecha << endl;
}

int main()
{

    int i = 0;
    Reg mayorEdad;

    Reg conjuntoRegistro[1000];

    ingresarRegistro(conjuntoRegistro);

    if (conjuntoRegistro[i].nombre != "FIN")
        mayorEdad = conjuntoRegistro[i];

    while (conjuntoRegistro[i].nombre != "FIN" && i < 1000)
    {

        calcularMayorEdad(mayorEdad, conjuntoRegistro[i]);
        i++;
    }

    mostrarMayorEdad(mayorEdad);
}