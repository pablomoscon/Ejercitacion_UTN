// Defina una función maximo que reciba tres números enteros y retorne el mayor.

//     En el main,
//     pida al usuario ingresar tres números y muestre el número máximo usando la función.

#include <iostream>
using namespace std;

int findMax(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int main()
{
    int x, y, z;

    cout << "Escriba un número: ";
    cin >> x;
    cout << "Escriba un número: ";
    cin >> y;
    cout << "Escriba un número: ";
    cin >> z;


   cout
       << "El número mayor es " << findMax(x, y, z) << endl;
       
   return 0;
}
