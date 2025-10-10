#include <iostream>
using namespace std;

// 1. Ingresar un valor N(< 25).Generar un arreglo de N componentes en el cual las mismas contengan los primeros números naturales pares e imprimirlo.

// int main (){

//     int n;

//     cout << "Ingrese un número menor de 25: ";
//     cin >> n;

//     if (n >= 25 || n <= 0)
//     {
//         cout << "El valor de N debe ser mayor que 0 y menor que 25: ";
//         return 0;
//     }

//     int arreglo[n];

//     for (int i = 0; i < n; i++)
//     {
//         arreglo[i] = (i + 1) * 2;

//     }

//     cout << "Los primeros número naturales pares son: ";

//     for (int i = 0; i < n; i++)
//     {
//         cout << arreglo[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// 2. Ingresar un valor entero N(< 30) y a continuación un conjunto de N elementos.Si el último
//     elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los
//     demás.

// int main () {
//     int n;

//     cout << "Ingrese un número entero menor de 30: ";
//     cin >> n;

//     int arreglo[n];

//     cout << "Ingrese " << n << " elementos: " << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arreglo[i];
//     }

//     cout << "Resultado: " << endl;
//     if (arreglo[n - 1] < 10)
//     {
//         for (int i = 0; i < n; i++) {
//             if (arreglo[i] < 0) {
//                 cout << arreglo[i] << " "<< endl;
//             }
//         }
//     }
//             else {
//                 for (int i = 0; i < n; i++)
//                 {
//                     if (arreglo[i] >= 0)
//                     {
//                         cout << arreglo[i] << " " << endl;
//                         ;
//                     }
//                 }
//         }

//         cout << endl;

//         return 0;
// }

// 3. Ingresar un valor entero N(< 20. A continuación ingresar un conjunto VEC de N componentes.A partir de este conjunto generar otro FACT en el que cada elemento sea el factorial del elemento homólogo de VEC.Finalmente imprimir ambos vectores a razón de un valor de cada uno por renglón

// int factorial(int n)
// {
//     int result = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         result *= i;
//     }
//     return result;
// }

// int main () {
//     int n;

//     cout << "Ingrese un número menor de 20: ";
//     cin >> n;

//     int array[n];
//     int factArray[n];

//     cout << "Ingrese " << n << " elementos: " << endl;
//     for (int i = 0; i < n; i++) {
//     cin >> array[i];
//         }

//     for (int i = 0; i < n; i++) {

//         factArray[i] = factorial(array[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << "El factorial de " << array[i] << " es " << factArray[i] << endl;

//     }

//     return 0;
// }

// 4. Ingresar un valor entero N(< 25).A continuación ingresar un conjunto VEC de N componentes.Si la suma de las componentes resulta mayor que cero imprimir las de índice impar, sino los otros elementos.

// float isTotalPositive(float array[], int n)
// {

//     float total = 0;

//     for (int i = 0; i < n; i++)
//     {
//         total += array[i];
//     }

//     return total;
// }

// int main()

// {

//     int n;
//     float total = 0;

//     cout << "Ingrese un número menor de 25: ";
//     cin >> n;

//     float array[n];

//     cout << "Ingrese " << n << " elementos: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     total = isTotalPositive(array, n);

//     if (total > 0)
//     {
//         cout << "Los número con índice impar son: " << endl;

//         for (int i = 0; i < n; i++)
//         {
//             if (i % 2 != 0)
//             cout << array[i] << endl;
//         }
//     }
//     else
//     {
//         for (int i = 0; i < n; i++)
//             cout << "Los elementos de la suma negativa son: "<< array[i] << endl;
//     }

// return 0;
// }

// 5. Ingresar un valor entero N(< 30).A continuación ingresar un conjunto UNO y luego otro conjunto DOS, ambos de N componentes.Generar e imprimir otro conjunto TRES intercalando los valores de posición impar de DOS y los valores de posición par de UNO.

// void mergeArrays (int array1[], int array2[], int mergeArray[], int num1) {

//     int num2 = 0;

//     for (int i = 0; i < num1; i++) {
//         mergeArray[num2++] = array1[i];
//         mergeArray[num2++] = array2[i];
//     }
// }

// int main()

// {

//     int num1, num2;

//     cout << "Ingrese un número menor de 25: ";
//     cin >> num1;

//     int array1[num1];
//     int array2[num1];
//     int mergeArray[num1 * 2];

//     cout << "Ingrese " << num1 << " elementos: " << endl;
//     for (int i = 0; i < num1; i++)
//     {
//         cin >> array1[i];
//     }

//     cout << "Ingrese " << num1 << " elementos: " << endl;
//     for (int i = 0; i < num1; i++)
//     {
//         cin >> array2[i];
//     }

//     mergeArrays(array1, array2, mergeArray, num1);

//     cout << "Los elementos del primer array son: " << endl;
//     for (int i = 0; i < num1; i++)
//     {
//         cout << array1[i] << endl;
//     }

//     cout << "Los elementos del segundo array son: " << endl;
//     for (int i = 0; i < num1; i++)
//     {
//         cout << array2[i] << endl;
//     }

//     cout << "Los elementos del array mezclado son: " << endl;
//     for (int i = 0; i < num1 * 2; i++) {
//         cout << mergeArray[i] << endl;
//     }

//     cout << endl;

//     return 0;
// }

// 6. Ingresar un valor entero N (< 40). A continuación ingresar un conjunto VALOR de N elementos.
// Determinar e imprimir el valor máximo y la posición del mismo dentro del conjunto. Si el máximo no es único, imprimir todas las posiciones en que se encuentra.

// void maxNum(int array[], int n)
// {
//     int majorNum = array[0];
//     int positions[40];
//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (array[i] > majorNum)
//         {
//             majorNum = array[i];
//             count = 0;
//             positions[count++] = i;
//         }
//         else if (array[i] == majorNum)
//         {
//             positions[count++] = i;
//         }
//     }

//     cout << "El valor máximo es: " << majorNum << endl;
//     cout << "Este número está en la(s) posición(es): ";

//     for (int i = 0; i < count; i++)
//     {
//         cout << positions[i] << " ";
//     }
//     cout << endl;
// }

// int main()

// {

//     int n;

//     cout << "Ingrese un número menor de 40: ";
//     cin >> n;

//     int array[n];

//     cout << "Ingrese " << n << " elementos: " << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     maxNum(array, n);

//     return 0;
// }

// 7. Ingresar un valor entero N (< 15). A continuación ingresar un conjunto DATO de N elementos.
// Generar otro conjunto de dos componentes MEJORDATO donde el primer elemento sea el mayor valor de DATO y el segundo el siguiente mayor (puede ser el mismo si está repetido). c

// void getMaxValues(int array[], int n)
// {
//     int firstMax = array[0];
//     int secondMax = array[1];
//     int maxValuesArray[2];

//     for (int i = 0; i < n; i++) {

//         if (array[i] > firstMax) {
//             secondMax = firstMax;
//             firstMax = array[i];

//         }
//         else if (array[i] > secondMax && array[i] != firstMax)
//         {
//             secondMax = array[i];
//         }
//     }

//     maxValuesArray[0] = firstMax;
//     maxValuesArray[1] = secondMax;

//     cout << "Los dos números mayores son: ";
//     for (int i = 0; i < 2; i++)
//     {
//         cout << "index: " << i << ") " << maxValuesArray[i] << " ";
//     }
// }

// int main()
// {

//     int n;

//     cout << "Ingrese un número menor de 40: ";
//     cin >> n;

//     int array[n];

//     cout << "Ingrese " << n << " elementos: " << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     getMaxValues(array, n);

//     return 0;
// }

// 8. Ingresar un valor entero N (< 25). A continuación ingresar un conjunto GG de N elementos.
// Imprimir el arreglo en orden inverso generando tres estrategias para imprimir los elementos a razón
// de: a) Uno por línea, b) Diez por línea, c) Cinco por línea con identificación

// void getReverseArray(int array[], int n) {

//     int reverseArray[n];
//     int a = n;

//     for (int i = 0; i < n; i++)
//     {
//         reverseArray[--a] = array[i];
//     }

//     cout << "\nArray invertido (uno por línea):\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << reverseArray[i] << endl;
//     }

//     cout << "\nArray invertido (diez por línea):\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << reverseArray[i] << " ";
//         if ((i + 1) % 10 == 0)
//             cout << endl;
//     }
//     cout << endl;

//     cout << "\nArray invertido (cinco por línea con identificación):\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << "[" << i << "]=" << reverseArray[i] << " ";
//         if ((i + 1) % 5 == 0)
//             cout << endl;
//     }
//     cout << endl;
// }

// int main()
// {

//     int n;

//     cout << "Ingrese un número menor de 25: ";
//     cin >> n;

//     int array[n];

//     cout << "Ingrese " << n << " elementos: " << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     getReverseArray(array, n);

//     return 0;
// }

// 9. Ingresar un valor entero N (< 40). A continuación ingresar un conjunto A y luego otro conjunto B
// ambos de N elementos. Generar un arreglo C donde cada elemento se forme de la siguiente forma: C[1] = A[1]+B[N] C[2] = A[2]+B[N-1]

// void getMergeArray(int array1[], int array2[], int n) {

//     int mergeArray[n];

//     for (int i = 0; i < n; i++)
//     {

//         mergeArray[i] = array1[i] + array2[n - 1 - i];
//     }

//     cout << "EL nuevo array es: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << mergeArray[i] << " ";
//     }

//     cout << endl;
// }

// int main()
// {

//     int n;

//     cout << "Ingrese un número menor de 40: ";
//     cin >> n;

//     int array1[n];
//     int array2[n];

//     cout << "Ingrese los" << n << " elementos del primer conjunto: " << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> array1[i];
//     }

//     cout << "Ingrese los " << n << " elementos del segundo conjunto: " << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> array2[i];
//     }

//     getMergeArray(array1, array2, n);

//     return 0;
// }

// 10. Ingresar dos valores enteros M (< 10) y N (< 15). A continuación ingresar un conjunto A de M
// elementos y luego otro B de N elementos. Generar e imprimir:
// a) Un conjunto C resultante de la anexión de A y B.
// b) Un conjunto D resultante de la anexión de los elementos distintos de cero de A y B.

// void getFirstMergeArray(int array1[], int array2[], int m, int n)
// {

//     int mergeArray[m + n];

//     for (int i = 0; i < m + n; i++)
//     {
//         if (i < m)
//         {
//             mergeArray[i] = array1[i];
//         }
//         else
//         {
//             mergeArray[i] = array2[i - m];
//         }
//     }

//     cout << "EL nuevo array es: ";
//     for (int i = 0; i < m + n; i++)
//     {
//         cout << mergeArray[i] << " ";
//     }

//     cout << endl;
// }

// void getSecondMergeArray(int array1[], int array2[], int m, int n)
// {
//     int count = 0;
//     for (int i = 0; i < m; i++)
//         if (array1[i] != 0)
//             count++;
//     for (int i = 0; i < n; i++)
//         if (array2[i] != 0)
//             count++;

//     int mergeArray[count];
//     int k = 0;

//     for (int i = 0; i < m; i++)
//         if (array1[i] != 0)
//             mergeArray[k++] = array1[i];

//     for (int i = 0; i < n; i++)
//         if (array2[i] != 0)
//             mergeArray[k++] = array2[i];

//     cout << "El nuevo array (sin ceros) es: ";
//     for (int i = 0; i < count; i++)
//         cout << mergeArray[i] << " ";
//     cout << endl;
// }


// int main()
// {

//     int m;
//     int n;

//     cout << "Ingrese un número menor de 15: ";
//     cin >> m;

//     cout << endl;

//     int array1[m];

//     cout << "Ingrese los " << m << " elementos del primer conjunto: " << endl;

//     for (int i = 0; i < m; i++)
//     {
//         cin >> array1[i];
//     }

//     cout << endl;

//     cout << "Ingrese un número menor de 15: ";
//     cin >> n;

//     int array2[n];

//     cout << "Ingrese los " << n << " elementos del segundo conjunto: " << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> array2[i];
//     }

//     getFirstMergeArray(array1, array2, m, n);

//     getSecondMergeArray(array1, array2, m, n);

//     return 0;
// }

// 11. Ingresar dos valores enteros M(< 25) y N(< 10) A continuación ingresar un conjunto A de M
//     elementos y luego otro B de N elementos,
//     ambos ordenados en forma creciente por magnitud.Generar e imprimir el conjunto TOTAL resultante del apareo por magnitud de los conjuntos A y B.

    int main()
{

    int m;
    int n;

    cout << "Ingrese un número menor de 10: ";
    cin >> m;

    cout << endl;

    int array1[m];

    cout << "Ingrese los " << m << " elementos del primer conjunto: " << endl;

    for (int i = 0; i < m; i++)
    {
        cin >> array1[i];

    }

    cout << endl;

    cout << "Ingrese un número menor de 10: ";
    cin >> n;

    int array2[n];

    cout << "Ingrese los " << n << " elementos del segundo conjunto: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> array2[i];
    }


    return 0;
}
