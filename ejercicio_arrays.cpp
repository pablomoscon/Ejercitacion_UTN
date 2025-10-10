// ejemplo vec[10] = {1,2,3,4,-5,6,7,8,9,-10}
// salida esperada: -5 -10

#include <iostream>
using namespace std;



void imprimeValores(int vec[], int n)
{
        if (vec[n-1] < 10) {
            for (int i = 0; i < n; i++)
            {
                if (vec[i] < 0)
                
                    cout << vec[i] << " ";
            }
        }
        else {
            for (int i = 0; i < n; i++)
            {
                if (vec[i] >= 0)

                    cout << vec[i] << " ";
            }
        }
        return;
}

// void imprimeValores(int vec[])
// {
//     bool imprimirNegativos = false;
//     if (vec[9] < 10)
//         imprimirNegativos = true;
//     for (int i = 0; i < 10; i++)
//     {
//         if (imprimirNegativos && vec[i] < 0)
//             cout << vec[i] << " ";
//         else if (!imprimirNegativos && vec[i] > 0)
//             cout << vec[i] << " ";
//     }
// }