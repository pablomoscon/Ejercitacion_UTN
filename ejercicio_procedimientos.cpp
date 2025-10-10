// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 15; i > 0; i--)
//     {
//         cout << i-- << ",";

//         if (i % 2 == 0) {
//             i--;
//         }
//     }

//     return 0;
// }

// 15, 12, 10, 8, 6, 4, 2

#include <iostream>
using namespace std;
int mayor(int vector[], int n)
{
    int valMayor = vector[0];
    for (int i = 1; i < n; i++)
    {
        if (vector[i] > valMayor)
        {
            valMayor = vector[i];
        }
    }

    return valMayor;
}
int main()
{
    const int cantidad = 5;
    int vector[cantidad] = {26, 46, 8878, 4500000, 2};
    cout << mayor(vector, cantidad);
    return 0;
}