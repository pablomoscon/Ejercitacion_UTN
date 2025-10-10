#include <iostream>
#include <iomanip>
using namespace std;

// Dada la longitud de un lado de un cuadrado calcular e informar por pantalla:
// a) El perímetro del cuadrado
// b) El área del cuadrado

int main () {

    float lado, perimetro, area;

    cout << "Ingrese la longitud del lado del cuadrado: ";
    cin >> lado;

    perimetro = 4 * lado;
    area = lado * lado;

    cout << "El perimetro del cuadrado es: " << perimetro << endl;
    cout << "El area del cuadrado es: " << area << endl;
    return 0;

}

// Dado el radio de un círculo calcular e informar:
// a) El área del círculo (se obtiene multiplicando el radio al cuadrado por el número Pi)
// b) El perímetro del círculo (se obtiene multiplicando el diámetro por el número Pi)

int main ()
{
    float radio, area, perimetro;
    const float PI = 3.1416;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    area = PI * radio * radio;
    perimetro = 2 * PI * radio;
    cout << "El area del circulo es: " << area << endl;
    cout << "El perimetro del circulo es: " << perimetro << endl;

    return 0;
}

// Dada una cantidad de segundos informar por pantalla el mismo valor pero en horas, ejemplo : 4860000 milisegundos son 1, 35 horas

int main()
{
    double milisegundos, horas;
    cout << "Ingrese la cantidad de horas: ";
    cin >> horas;

    milisegundos = horas * 3600 * 1000;

    cout << fixed;           // evita notación científica
    cout << setprecision(0); // cantidad de decimales (0 si querés entero)
    cout << "La cantidad de milisegundos es: " << milisegundos << " ms" << endl;

    return 0;
}

// Ejercicio 6 Dado un año informar si es bisiesto o no. Tener en cuenta que un año es bisiesto si cumple los siguientes criterios: ∙ Es divisible entre 4. ∙ Si termina en 00, es divisible entre 400 (2000 y 2400 sí son bisiestos. 2100, 2200 y 2300 no lo son).

int main()
{
    int año;
    bool esBisiesto;
    cout << "Ingrese el año: ";
    cin >> año;

    if ((año % 4 == 0) || ((año % 10 == 0) && (año % 400 != 0)))
    {
        esBisiesto = true;
        cout << "El año " << año << " es bisiesto." << endl;
    }
    else
    {
        esBisiesto = false;
        cout << "El año " << año << " no es bisiesto." << endl;
    }

    return 0;
}

// Dados un mes y año correspondiente informar cuantos días tiene el mes.

int main () {
    int mes, año, dias;
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;
    cout << "Ingrese el año: ";
    cin >> año;

    if (mes == 2) {
        if ((año % 4 == 0) || ((año % 10 == 0) && (año % 400 != 0)))
            dias = 29;
        else
            dias = 28;
    } 
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        dias = 30;
    else
        dias = 31;
    cout << "El mes " << mes << " del año " << año << " tiene " << dias << " días." << endl;
    return 0;
}

// Ejercicio 8 Según la edad de un socio ingresada, mostrar por pantalla alguna de las siguientes leyendas ‘menor’ si la edad es menor o igual a 12 ∙ ‘cadete’ si la edad está comprendida entre 13 y 18 ∙ ‘juvenil’ si la edad es mayor que 18 y no supera los 26 ∙ ‘mayor’ en el caso que no cumpla ninguna de las condiciones anteriores

int main()
{
    int edad;
    cout << "Ingrese la edad del socio: ";
    cin >> edad;

    if (edad <= 12)
    {
        cout << "Cadete. " << endl;
    }
    else if (edad >= 13 && edad <= 18)
    {
        cout << "Menor. " << endl;
    }
    else if (edad > 18 && edad < 26)
    {
        cout << "Juvenil. " << endl;
    }
    else
    {
        cout << "Mayor. " << endl;
    }
    return 0;
}

// Ejercicio 9 Ingresar la edad de una persona e informar si es mayor o menor de edad.

int main()
{
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18)
    {
        cout << "Es mayor de edad. " << endl;
    }
    else
    {
        cout << "Es menor de edad. " << endl;
    }
    return 0;
}

// Ejercicio 10 Ingresar el género (1. Masculino, 2. Femenino), la edad y la cantidad de aportes de una persona e informar si puede o no jubilarse teniendo en cuenta que las mujeres pueden jubilarse a los 60 años con 30 años de aportes y los hombres a los 65 años con 30 años de aportes.

int main()
{

    int edad, genero, aportes;
    cout << "Ingrese su género:\n";
    cout << "1. Hombre\n";
    cout << "2. Mujer\n";
    cout << "Elija una opción (1 o 2): ";
    cin >> genero;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Aportes: ";
    cin >> aportes;

    if ((genero == 2 && edad >= 60 && aportes >= 30) ||
        (genero == 1 && edad >= 65 && aportes >= 30))
    {
        cout << "Puede jubilarse. " << endl;
    }
    else
    {
        cout << "No puede jubilarse. " << endl;
    }
    return 0;
}
