#include <iostream>
using namespace std;

// Ejercicio 4 Escriba una función llamada sumarHastaN que reciba un número entero positivo n y devuelva la suma de todos los enteros desde 1 hasta n.(Debe utilizar un ciclo para acumular la suma).

// int sumarHastaN(int number)
// {

//     int suma = 0;

//     for (int i = 1; i <= number; i++)
//     {

//         suma += i;
//     }

//     return suma;
// }

// int main()
// {

//     int number;

//     cout << "Ingresá un número: ";
//     cin >> number;

//     cout << "La suma de todos los números desde 1 hasta " << number << " es: " << sumarHastaN(number) << endl;

//     return 0;
// }

//     Ejercicio 5 Codificar una función contarPares que reciba un entero positivo n y devuelva cuántos números pares hay entre 1 y n inclusive.

// int contarPares (int number) {

//     int pares = 0;

//     for (int i = 1; i <= number; i++)
//     {
//         if (i % 2 == 0) {

//             pares++;
//         }
//     }
//     return pares;
// }

// int main () {
//     int number;

//     cout << "Ingrese un número entero: ";
//     cin >> number;

//     cout << "La cantidad de pares entre 1 y " << number << " es: " << contarPares(number) << endl;

//     return 0;
// }

//     Ejercicio 6 Escriba una función llamada mostrarTablaMultiplicar que reciba un entero n y devuelva la tabla de multiplicar de ese número desde 1 hasta 10 en forma de lista
//     / array.(Debe utilizar un ciclo para generar los valores).

// calcularFactorial : Devuelva el factorial de un número.

// int calcularFactorial(int numero)
// {

//     int factorial = 1;

//     if (numero == 0)
//     {
//         factorial = 1;
//     }

//     for (int i = numero; i >= 1; i--)
//     {
//         factorial *= i;
//     }

//     return factorial;

// }

// int main () {
//     int numero;

//     cout << "Ingresá un número: ";
//     cin >> numero;

//     cout << "El factorial de " << numero << " es: " << calcularFactorial(numero) << endl;

//     return 0;
// }

//                                     esDivisiblePor2y3 : Devuelva 1 si es divisible por 2 y por 3,
//     si no 0.

// int esDivisiblePor2y3 (int number) {
//     if (number % 2 == 0 && number % 3 == 0){
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

// int main () {

//     int number;
//     cout << "Ingrese un número: ";
//     cin >> number;

//    if (esDivisiblePor2y3(number) == 1) {
//        cout << "El número es divisible por 2 y 3 " << endl;
//        return 0;
//    }
//    else {
//        cout << "El número no es divisible por 2 y 3 " << endl;
//        return 0;
//    }
//    return 0;
// }

//     contarEnRango : Reciba a,
//                     b,
//                     c y cuente cuántos números entre a y b son múltiplos de c.

// Escriba una función que reciba un número entero positivo y devuelva la posición (de izquierda a derecha) del primer dígito par que aparezca.
// Si no tiene ningún dígito par, devolver 0. Ej : 3572 → 3(porque el 2 aparece en la posición 4).

// int primerDigitoPar (int numero) {

//     int cantidadDigitos = 0;
//     int contador = 1;
//     bool esPar = false;
//     int divisor = 1;
//     int digito = 0;
//     int numeroDivision = numero;

//     if (numero == 0)
//     {

//         return 0;
//     }
//     while (numeroDivision != 0)
//     {

//         numeroDivision = numeroDivision / 10;
//         cantidadDigitos++;
//     }

// while (numero !=0) {

//     for (int i = cantidadDigitos; i > 1; i--)
//     {
//         divisor = divisor * 10;
//     }

//     digito = numero / divisor;
//     numero = numero - (digito * divisor);

//     if (digito % 2 == 0)
//     {
//         esPar = true;
//         break;
//     }

//     contador++;
//     divisor = 1;
//     cantidadDigitos--;
// }
//     if (esPar == true) {
//         return contador;
//     }
//     else {
//         return 0;
//     }
// }

// int main () {

//     int number;
//     cout << "Ingrese un número: ";
//     cin >> number;

//     if (primerDigitoPar(number) != 0)

//     {
//         cout << "El primer numero par aparece en la posición: " << primerDigitoPar(number) << endl;
//         return 0;
//     }
//    else {
//        cout << "El número es 0 o no contiene números pares" << endl;
//        return 0;
//    }
//    return 0;
// }

// sumarDivisiblesPor3
//     Escriba una función que reciba un número entero positivo n y devuelva la suma de todos los números entre 1 y n que sean divisibles por 3.

// int sumarDivisiblesPor3(int numero)
// {

//     int suma = 0;

//     for (int i = 1; i <= numero; i++)
//     {
//         if (i % 3 == 0)
//         {
//             suma += i;
//         }
//     }
//     return suma;
// }

// int main()
// {
//     int numero;

//     cout << "Ingresá un número: ";
//     cin >> numero;

//     cout << "La suma de los números divisibles por tres entre 1 y " << numero << " es: " << sumarDivisiblesPor3(numero) << endl;

//     return 0;
// }

// Escriba una función que reciba un número entero positivo y devuelva cuántos dígitos impares tiene.

// int contarImpares(long long int numero)
// {

//     int digito;
//     int contador = 0;

//     while (numero > 0)
//     {
//         digito = numero % 10;
//         numero = numero / 10;

//         if (digito % 2 != 0){
//             contador++;
//         }
//     }
//     return contador;
// }

// int main () {
//     long long int numero;

//     cout << "Ingresá un número: ";
//     cin >> numero;

//     cout << "La cantidad de digitos impares que tiene el numero " << numero << " es: " << contarImpares(numero) << endl;

//     return 0;
// }

// cantidadDivisores
//     Escriba una función que reciba un número entero positivo y devuelva cuántos divisores tiene.

// int cantidadDivisores (int numero) {
//     int contador = 0;

//     for (int i = 1; i < numero; i++)
//     {
//         if (numero % i == 0) {
//             contador++;
//         }
//     }
//     return contador;
// }

// int main () {
//     int numero;

//     cout << "Ingresá un número: ";
//     cin >> numero;

//     cout << "La cantidad de divisores que tiene el numero " << numero << " es: " << cantidadDivisores(numero) << endl;

//     return 0;
// }

// int numeroPrimo(int numero)
// {

//     bool esPrimo = true;

//     for (int i = 2; i < numero; i++)
//     {
//         if (numero > 2 && numero % i == 0) {
//             esPrimo = false;
//         }
//     }
//     if (esPrimo == true) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

// int main () {
//     int numero;

//     cout << "Ingresá un número: ";
//     cin >> numero;

//     if (numeroPrimo(numero) == 1) {
//         cout << "El numero " << numero << " es primo" << endl;
//     }
//     else {
//         cout << "El numero " << numero << " no es primo" << endl;
//     }
    

//     return 0;
// }



// Función para calcular el salario familiar
// float salarioFamiliar(float mfh, int h)
// {
//     return mfh * h;
// }

// Función para calcular el monto por antigüedad
// float calculoAntiguedad(float mfa, int a)
// {
//     return mfa * a;
// }

// int main()
// {
    // declarar variables
    // float sueldoNeto, montoFijoAntiguedad = 200000, montoFijoHijo = 50000;
    // int hijos, anios;

    /* Solicitar datos */
    // cout << "Ingrese sueldo neto: ";
    // cin >> sueldoNeto;
    // cout << "Ingrese cantidad de hijos: ";
    // cin >> hijos;
    // cout << "Ingrese anios de antiguedad: ";
    // cin >> anios;

    // realizar cálculos y mostrar resultado
//     float sueldoMensual = sueldoNeto + salarioFamiliar(montoFijoHijo, hijos) + calculoAntiguedad(montoFijoAntiguedad, anios);
//     cout << "El sueldo mensual es de: " << sueldoMensual << endl;

//     return 0;
// }
