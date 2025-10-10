#include <iostream>
using namespace std;

struct Legajo
{
    int numero;
    int anioInscripcion;
};

struct Alumno
{
    Legajo legajo;
    string apellido;
    string nombre;
};

int busquedaPorLegajo(Alumno alumnos[], int n, int m)
{
    int inicio = 0;
    int fin = n - 1;
    while (fin >= inicio)
    {
        int mitad = inicio + (fin - inicio) / 2;
        // Si el elemento es el del medio, devolvemos la posicion
        if (alumnos[mitad].legajo.numero == m)
            return mitad;
        // Si el elemento es menor entonces solo puede estar en la primer mitad
        if (alumnos[mitad].legajo.numero > m)
        {
            fin = mitad - 1; // Cambio el limite superior
        }
        else
        {
            inicio = mitad + 1; // Cambio el limite inferior
        }
    }
    // Si llegamos hasta aca es que el elemento no estaba
    return -1;
}

int buscarAlumnoSecuencial(Alumno vec[], int n, string apellido)
{
    for (int i = 0; i < n; i++)
    {
        if (vec[i].apellido == apellido)
        {
            return i;
        }
    }
    // Si no salio todavia, es que no estaba en el vector
    return -1;
}

void mostrarAlumno(Alumno alumno)
{

    cout << "El alumno con legajo " << alumno.legajo.numero << " es: "
         << alumno.nombre << " " << alumno.apellido << endl;
    cout << "Año de inscripción: " << alumno.legajo.anioInscripcion << endl;
}

int main()
{

    int numeroLegajo;

    Legajo legajos[5] = {
        {1001, 2020},
        {1002, 2021},
        {1003, 2022},
        {1004, 2023},
        {1005, 2024}};
    string nombres[5] = {
        "Lucas",
        "Martina",
        "Santiago",
        "Valentina",
        "Mateo"};
    string apellidos[5] = {
        "Gomez",
        "Lopez",
        "Fernandez",
        "Diaz",
        "Ruiz"};

    Alumno alumnos[5];

    for (int i = 0; i < 5; i++)
    {
        alumnos[i].nombre = nombres[i];
        alumnos[i].apellido = apellidos[i];
        alumnos[i].legajo = legajos[i];
    }

    cout << "Los alumnos registrados son: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << alumnos[i].nombre << " " << alumnos[i].apellido << " - " << alumnos[i].legajo.numero << " - " << alumnos[i].legajo.anioInscripcion << endl;
    }

    // cout << "¿Qué legajo desea buscar?" << endl;
    // cin >> numeroLegajo;

    string apellido;
    cout << "¿Ingrese apellido?" << endl;
    cin >> apellido;


    // Alumno alumnoEncontrado = alumnos[busquedaPorLegajo(alumnos, 5, numeroLegajo)];

    Alumno alumnoEncontrado = alumnos[buscarAlumnoSecuencial(alumnos, 5, apellido)];

    mostrarAlumno(alumnoEncontrado);
}
