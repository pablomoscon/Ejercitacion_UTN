
#include <iostream>
using namespace std;

#define MAX_FILAS 100
#define MAX_COLS 100

// 17. Ingresar dos valores, M (< 30) y N (< 25) y a continuación por filas todos los componentes de una matriz MATRIZA de M filas y N columnas. Desarrollar un programa que:
// a) Imprima la matriz MATRIZA por columnas.
// b) Calcule e imprima el valor promedio de los componentes de la matriz.
// c) Genere e imprima un vector VECSUMCOL donde cada componente sea la suma de la columna
// homóloga.
// d) Genere e imprima un vector VECMAXFIL donde cada componente sea el valor máximo de cada fila.

// #define MAX_FILAS 100
// #define MAX_COLS 100

// void imprimirMatriz(int matriz[MAX_FILAS][MAX_COLS], int m, int n)
// {

//     cout << "La matriz por columna es:\n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << matriz[j][i] << " ";
//         }
//         cout << endl;
//     }
// }

// float valorPromedio(int matriz[MAX_FILAS][MAX_COLS], int m, int n)
// {
//     float suma = 0;

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             suma += matriz[i][j];
//         }
//     }
//     return suma;
// }

// void sumarColumnas (int matriz[MAX_FILAS][MAX_COLS], int m, int n)
// {
//     int vecMaxCol[n];

//     for (int i = 0; i < n; i++)
//     {
//         vecMaxCol[i] = 0;
//         for (int j = 0; j < m; j++)
//         {
//             vecMaxCol[i] += matriz[j][i];
//         }
//     }

//     cout << "La suma de las columnas es: ";

//     for (int i = 0; i < n; i++)
//     {
//         cout << vecMaxCol[i] << " ";
//     }
//     cout << endl;
// }

// void valMaxFila(int matriz[MAX_FILAS][MAX_COLS], int m, int n)
// {
//     int vecMaxFil[m];

//     for (int i = 0; i < m; i++)
//     {
//         vecMaxFil[i] = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (matriz[i][j] > vecMaxFil[i])
//                 vecMaxFil[i] = matriz[i][j];
//         }
//     }

//     cout << "El valor máximo de cada fila es: ";

//     for (int i = 0; i < n; i++)
//     {
//         cout << "fila" << i + 1 << "- " << vecMaxFil[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int m, n;

//     cout << "Ingrese un número menor de 30: ";
//     cin >> m;

//     cout << "Ingrese un número menor de 25: ";
//     cin >> n;

//     int matriz[MAX_FILAS][MAX_COLS];

//     cout << "Ingrese los elementos de la matriz:\n";
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> matriz[i][j];
//         }
//     }

//     imprimirMatriz(matriz, m, n);

//     cout << "El promedio es: " << valorPromedio(matriz, m, n) / (n * m) << endl;

//     sumarColumnas(matriz, m, n);
    
//     valMaxFila(matriz, m, n);

// }


// 18. Ingresar un valor N (< 25) y luego por filas una matriz cuadrada CUADRADA de N filas y columnas. Desarrollar un programa que determine e imprima:
// a) Todos los elementos de la diagonal principal o secundaria según de cual resulte mayor la sumatoria de elementos.
// b) Los elementos del cuarto (N/2 filas y N/2 columnas) cuya sumatoria resulte mayor (considerando que N fuera par).
// c) Los elementos de la triangular superior o inferior dependiendo de cual tenga mayor sumatoria de elementos.

void diagonal(int matriz[MAX_FILAS][MAX_COLS], int n)
{

    cout << "Los elementos de la diagonal principal son: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << matriz[i][i] << " " << endl;
        ;
    }
}

void cuartoMayor(int matriz[MAX_FILAS][MAX_COLS], int n)
{
    int mitad = n / 2;
    int sumaSI = 0, sumaSD = 0, sumaII = 0, sumaID = 0;

    for (int i = 0; i < mitad; i++)
        for (int j = 0; j < mitad; j++)
            sumaSI += matriz[i][j];

    for (int i = 0; i < mitad; i++)
        for (int j = mitad; j < n; j++)
            sumaSD += matriz[i][j];

    for (int i = mitad; i < n; i++)
        for (int j = 0; j < mitad; j++)
            sumaII += matriz[i][j];

    for (int i = mitad; i < n; i++)
        for (int j = mitad; j < n; j++)
            sumaID += matriz[i][j];

    
    int mayor = sumaSI;
    int cuarto = 1;

    if (sumaSD > mayor)
    {
        mayor = sumaSD;
        cuarto = 2;
    }
    if (sumaII > mayor)
    {
        mayor = sumaII;
        cuarto = 3;
    }
    if (sumaID > mayor)
    {
        mayor = sumaID;
        cuarto = 4;
    }

    cout << "El cuarto con mayor suma es: ";
    if (cuarto == 1)
        cout << "Superior Izquierdo\n";
    if (cuarto == 2)
        cout << "Superior Derecho\n";
    if (cuarto == 3)
        cout << "Inferior Izquierdo\n";
    if (cuarto == 4)
        cout << "Inferior Derecho\n";

    cout << "Elementos:\n";

    int filaIni = (cuarto > 2) ? mitad : 0;
    int filaFin = (cuarto > 2) ? n : mitad;
    int colIni = (cuarto == 2 || cuarto == 4) ? mitad : 0;
    int colFin = (cuarto == 2 || cuarto == 4) ? n : mitad;

    for (int i = filaIni; i < filaFin; i++)
    {
        for (int j = colIni; j < colFin; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

    int main()
{
    int n;

    cout << "Ingrese un número menor de 25: ";
    cin >> n;

    int matriz[MAX_FILAS][MAX_COLS];

    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matriz[i][j];
        }
    }

    diagonal(matriz, n);

    cuartoMayor(matriz, n);
}

// 19. Ingresar dos valores, M (< 20) y N (< 25) y a continuación por columnas todos los componentes de una matriz DESORDE de M filas y N columnas. Desarrollar un programa que:
// a) Ordene (creciente) cada columna de la matriz sobre si misma y la imprima a razón de una columna por renglón.
// b) Ordene (creciente) la matriz sobre si misma por fila desde el elemento 1,1 al M,N y la imprima a
// razón de una fila por renglón.



// 20. Ingresar por plano, fila y columna todos los elementos de una matriz MATRIDIM de M planos, filas y columnas. Desarrollar un programa que:
// a) Imprima la matriz MATRIDIM por columnas, fila, plano.
// b) Calcule e imprima el valor promedio de la matriz.
// c) Determine e imprima el mayor valor y en que lugar del la matriz se encuentra.
// d) Genere e imprima una matriz MATCSUMCOL donde cada elemento sea la suma de la columna
// homóloga.
// e) Genere e imprima una matriz MATMAXFIL donde cada elemento sea el valor máximo de cada fila.