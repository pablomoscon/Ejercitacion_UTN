// Ej.1 : Se dispone de un conjunto de boletas de inscripción de alumnos(100 como máximo) a examen en el mes de mayo.Cada boleta tiene los siguientes datos : apellido, número de legajo, código de materia, día, mes y año del examen.Los datos finalizan con un legajo igual a 0.a. Desarrollar un programa que, a partir del ingreso de las boletas mencionadas, por teclado genere un vector de inscripción de alumnos a exámenes finales según el siguiente diseño : a.1 Nro.de legajo(8 dígitos) a.2 Código de materia(6 dígitos) a.3 Día del examen(1..31) a.4 Mes del examen(1..12) a.5 Año del examen(4 dígitos) a.6 Apellido(25 caract) b.Dado el vector generado, desarrolle un procedimiento que genere un vector ordenado por número de legajo(cada registro debe tener los campos legajo y apellido y nombre) para todos los alumnos que se inscribieron una o más veces.Cada legajo debe ocupar una posición única y predecible.El intervalo de los legajos es 80001 a 80100 y están todos al menos una vez.

#include <iostream>
using namespace std;

// struct fecha {
//     int dia;
//     int mes;
//     int anio;
// };

// struct alumno {
//     string apellido;
//     int numeroLegajo;
// };

// struct boletasInscripcion
// {
//     alumno alumno;
//     int codigoMateria;
//     fecha fecha;
// };

// int
// main()
// {

//     boletasInscripcion boletasInscripcion[100];

//     int i = 0;
//     int n = i + 1;

//     cout << "Ingrese el número de legajo: " << endl;
//     cin >> boletasInscripcion[i].alumno.numeroLegajo;

//     while (boletasInscripcion[i].alumno.numeroLegajo != 0 && i < 100)
//     {
//         cout << "Ingrese el apellido del alumno: " << endl;
//         cin >> boletasInscripcion[i].alumno.apellido;

//         cout << "Ingrese el número de código de materia: " << endl;
//         cin >> boletasInscripcion[i].codigoMateria;

//         cout << "Ingrese el día del examen(1-31): " << endl;
//         cin >> boletasInscripcion[i].fecha.dia;

//         cout << "Ingrese el mes del examen(1-12): " << endl;
//         cin >> boletasInscripcion[i].fecha.mes;

//         cout << "Ingrese el año del examen(4 dígitos): " << endl;
//         cin >> boletasInscripcion[i].fecha.anio;

//         i++;

//         n++;

//         cout << "Ingrese el número de legajo: " << endl;
//         cin >> boletasInscripcion[i].alumno.numeroLegajo;
//     }

//     cout << "Completaste el ingreso de Boletas" << endl;

//     cout << "Las boletas ingresadas son:" << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cout << boletasInscripcion[i].alumno.numeroLegajo << "  " << boletasInscripcion[i].alumno.apellido << "  " << boletasInscripcion[i].codigoMateria << "  " << boletasInscripcion[i].fecha.dia << "/" << boletasInscripcion[i].fecha.mes << "/" << boletasInscripcion[i].fecha.anio << endl;
//     }

//     alumno vectorOrdenado[100];
//     int legajoAInsertar;

//     for (int i = 0; i < 100; i++)
//     {
//         legajoAInsertar = boletasInscripcion[i].alumno.numeroLegajo;
//         vectorOrdenado[legajoAInsertar - 80001].apellido = boletasInscripcion[i].alumno.apellido;
//     }
// }

// Ej.2: Dado un vector de productos que contiene 100 registros, y cada registro corresponde a un producto que está codificado del 1 a 100, ordenado por código de producto con el siguiente diseño:
// Código de producto (1..100) Stock (int)
// y otro vector de pedidos, con el siguiente diseño:
// Número de pedido(int) Número de cliente(long)
// Código de producto (1..100, char) Cantidad pedida (int)
// Se pide desarrollar un procedimiento que reciba ambos vectores, y procese los pedidos haciendo lo siguiente a) Actualizar el campo stock del vector de productos, por cada pedido que pueda ser realizado.

// struct Productos
// {
//     int codigoProducto;
//     int stock;
// };

// struct Pedidos
// {
//     int numeroPedido;
//     long numeroCliente;
//     int codigoProducto;
//     int cantidadPedida;
// };

// int buscarProducto(Productos productos[], int n, int x)
// {
//     // Cuando arranco evalúo todo el vector de 0 a n - 1
//     int inicio = 0;
//     int fin = n - 1;
//     while (fin >= inicio)
//     {
//         int mitad = inicio + (fin - inicio) / 2;
//         // Si el elemento es el del medio, devolvemos la posicion
//         if (productos[mitad].codigoProducto == x)
//             return mitad;
//         // Si el elemento es menor entonces solo puede estar en la primer mitad
//         if (productos[mitad].codigoProducto > x)
//         {
//             fin = mitad - 1; // Cambio el limite superior
//         }
//         else
//         {
//             inicio = mitad + 1; // Cambio el limite inferior
//         }
//     }
//     // Si llegamos hasta aca es que el elemento no estaba
//     return -1;
// }

// void mostrarPedidos(const string &titulo, Pedidos pedidos[], int cantidad)
// {
//     cout << "\n======================================================\n";
//     cout << titulo << endl;
//     cout << "------------------------------------------------------\n";
//     cout << "Numero de pedido    Numero de cliente    Codigo de producto    Cantidad pedida\n";
//     cout << "------------------------------------------------------\n";

//     if (cantidad == 0)
//     {
//         cout << "(No hay pedidos para mostrar)\n";
//         return;
//     }

//     for (int i = 0; i < cantidad; i++)
//     {
//         cout << "    " << pedidos[i].numeroPedido
//              << "                  " << pedidos[i].numeroCliente
//              << "                    " << pedidos[i].codigoProducto
//              << "                " << pedidos[i].cantidadPedida
//              << endl;
//     }
// }

//     int main()
// {

//     Productos productos[100];
//     Pedidos pedidosSatisfechos[20];
//     Pedidos pedidosInsatisfechos[20];
//     Pedidos pedidos[20];
//     int n = 0;
//     int m = 0;

//     for (int i = 0; i < 100; i++)
//     {
//         productos[i].codigoProducto = i + 1;
//         productos[i].stock = (i * 7 + 23) % 101;
//     }

//     for (int i = 0; i < 20; i++)
//     {
//         pedidos[i].numeroPedido = i + 1;
//         pedidos[i].codigoProducto = i + 4;
//         pedidos[i].numeroCliente = ((i * 10 + 40) % 100) + 1;
//         pedidos[i].cantidadPedida = (i * 6 + 50) % 15;
//     }

//     for (int i = 0; i < 20; i++)
//     {
//         int pos = buscarProducto(productos,100, pedidos[i].codigoProducto);
//         if (pos != -1)
//         {
//             if (productos[pos].stock >= pedidos[i].cantidadPedida)
//             {
//                 pedidosSatisfechos[n++] = pedidos[i];
//                 productos[pos].stock -= pedidos[i].cantidadPedida;
//             }
//             else
//             {
//                 pedidosInsatisfechos[m++] = pedidos[i];
//             }
//         }
//     }

//     mostrarPedidos("Pedidos Satisfechos", pedidosSatisfechos, n);
//     mostrarPedidos("Pedidos Insatisfechos", pedidosInsatisfechos, m);

// }

// Ej.3 Rehacer el ejercicio 2, considerando que el código de productos es numérico pero sus valores no son consecutivos de 1 a 100, sino enteros de 8 dígitos.Asuma que el conjunto se encuentra desordenado y no es posible recorrerlo secuencialmente para realizar búsquedas.
//     void ordenarProductos(Productos arr[], int n)
// {
//     int i = 0, j;
//     Productos aux;
//     bool ordenado = false;

//     while (i < n && !ordenado)
//     {
//         ordenado = true; // Arranco asumiendo que si esta ordenado
//         // Los ultimos i elementos ya estan ordenados
//         for (j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j].codigoProducto > arr[j + 1].codigoProducto)
//             {
//                 aux  = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr [j + 1] = aux;
//                 ordenado = false; // Cambio el flag si hice un swap
//             }
//         }
//         i++;
//     }
// }

// int buscarProducto(Productos productos[], int n, int x)
// {
//     // Cuando arranco evalúo todo el vector de 0 a n - 1
//     int inicio = 0;
//     int fin = n - 1;
//     while (fin >= inicio)
//     {
//         int mitad = inicio + (fin - inicio) / 2;
//         // Si el elemento es el del medio, devolvemos la posicion
//         if (productos[mitad].codigoProducto == x)
//             return mitad;
//         // Si el elemento es menor entonces solo puede estar en la primer mitad
//         if (productos[mitad].codigoProducto > x)
//         {
//             fin = mitad - 1; // Cambio el limite superior
//         }
//         else
//         {
//             inicio = mitad + 1; // Cambio el limite inferior
//         }
//     }
//     // Si llegamos hasta aca es que el elemento no estaba
//     return -1;
// }

// int main()
// {
//     Productos productos[100];
//     Pedidos pedidosSatisfechos[20];
//     Pedidos pedidosInsatisfechos[20];
//     Pedidos pedidos[20];
//     int n = 0;
//     int m = 0;

//     for (int i = 0; i < 100; i++)
//     {
//         productos[i].codigoProducto = 10000000 + (rand() % 90000000);
//         productos[i].stock = (i * 7 + 23) % 101;
//     }

//     for (int i = 0; i < 20; i++)
//     {
//         pedidos[i].numeroPedido = i + 1;
//         int indiceProducto = rand() % 100;
//         pedidos[i].codigoProducto = productos[indiceProducto].codigoProducto;
//         pedidos[i].numeroCliente = ((i * 10 + 40) % 100) + 1;
//         pedidos[i].cantidadPedida = (i * 6 + 50) % 15;
//     }

//     ordenarProductos(productos, 100);

//     for (int i = 0; i < 20; i++)
//     {
//         int pos = buscarProducto(productos, 100, pedidos[i].codigoProducto);
//         if (pos != -1)
//         {
//             if (productos[pos].stock >= pedidos[i].cantidadPedida)
//             {
//                 pedidosSatisfechos[n++] = pedidos[i];
//                 productos[pos].stock -= pedidos[i].cantidadPedida;
//             }
//             else
//             {
//                 pedidosInsatisfechos[m++] = pedidos[i];
//             }
//         }
//     }

//     mostrarPedidos("Pedidos Satisfechos", pedidosSatisfechos, n);
//     mostrarPedidos("Pedidos Insatisfechos", pedidosInsatisfechos, m);
// }

// Ej.4 : Una empresa carga los datos del presentismo de sus empleados ingresando por cada empleado : Legajo(entero de 8 dígitos) y por cada día del mes un 1 si se presentó a trabajar o un 0 si faltó.Para simplificar, todos los empleados trabajan 31 días.Realizar un programa que permita : a - Cargar los datos de N empleados, siendo N también informado por el usuario b - Informar los legajos de los tres empleados con mejor presentismo c - Informar el número del día con mayor ausentismo.


struct Empleado
{
    long legajo;
    string nombre;
    int asistencia[31];
};

int contarAsistenciasEmpleados(const Empleado empleado)
{
    int total = 0;
    for (int i = 0; i < 31; i++)
    {
        total += empleado.asistencia[i];
    }
    return total;
}

int contarAsistenciaDias () {

}



void ordenarAsistenciasEmpleados(Empleado arr[], int n)
{
    int i =0, j;
    Empleado aux;
    bool ordenado = false;
    while (i < n && !ordenado)
    {
        ordenado = true; // Arranco asumiendo que si esta ordenado
        // Los ultimos i elementos ya estan ordenados
        for (j = 0; j < n - i - 1; j++)
        {

            if (contarAsistenciasEmpleados(arr[j]) < contarAsistenciasEmpleados(arr[j + 1]))
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                ordenado = false;
            }
        }
        i++;
    }

    cout << "Los tres empleados con mejor presentismo son: " << endl;
    for (int n = 0; n < 3; n++) {
        cout << arr[n].nombre << "  " << arr[n].legajo << ". " << endl;
    }
}

int main()
{
    
    int n;
    cout << "¿Cuántos empleados quiere cargar?: " << endl;
    cin >> n;

    Empleado empleados[n];

    for (int i = 0; i < n; i++)
    {
        empleados[i].legajo = 10000000 + (rand() % 90000000);
        cout << "Escriba el nombre del empleado: " << endl;
        cin >> empleados[i].nombre;
        for (int j = 0; j < 31; j++)
        {
            empleados[i].asistencia[j] = rand() % 2;
        }
    }

    // for (int i = 0; i < n; i++) 
    // {
    //     cout << "Las asistencias de " << empleados[i].nombre << " son: " << contarAsistencias(empleados[i]) << endl;
    // }

    ordenarAsistenciasEmpleados(empleados, n);
}