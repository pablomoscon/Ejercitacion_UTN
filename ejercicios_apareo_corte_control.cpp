#include <iostream>
using namespace std;

// Ej. 3: Una aplicación para descargas de Series posee la información en un conjunto de datos Episodios, con un registro por cada episodio, ordenado ascendente por Id_Serie y Número de temporada, con el siguiente diseño:
// 1) Id_Serie ( 9 dígitos )
// 3) Número de temporada (1..12)
// 5) Cantidad de descargas (long)
// 2) Título del episodio (cadena)
// 4) Número de episodio (int)
// 6) Fecha de última descarga (aaaammdd)
// Se pide desarrollar la metodología necesaria para escribir un algoritmo emita el siguiente listado:

// struct Episodio
// {
//     int Id_Serie;
//     string titulo;
//     int temporada;
//     int episodio;
//     long descargas;
//     int ultimaDescarga;
// };

// Episodio episodios[20] = {
//         {1, "El comienzo", 1, 1, 12000, 20240110},
//         {1, "El regreso", 1, 2, 11500, 20240322},
//         {1, "La revelación", 2, 1, 9800, 20240515},
//         {2, "Nuevos horizontes", 1, 1, 25000, 20240203},
//         {2, "Sombra del pasado", 1, 2, 23000, 20240617},
//         {2, "El juicio", 2, 1, 22000, 20240709},
//         {3, "Conexiones", 1, 1, 17000, 20240130},
//         {3, "Traiciones", 1, 2, 16500, 20240512},
//         {3, "El fin del juego", 2, 1, 16000, 20240901},
//         {4, "El caso imposible", 1, 1, 19000, 20240128},
//         {4, "Entre sombras", 1, 2, 18500, 20240422},
//         {4, "Verdades ocultas", 2, 1, 17500, 20240630},
//         {5, "Amanecer", 1, 1, 9000, 20240310},
//         {5, "El eco del tiempo", 1, 2, 8800, 20240725},
//         {5, "Horizonte perdido", 2, 1, 8500, 20241013},
//         {6, "Nuevas tierras", 1, 1, 21000, 20240105},
//         {6, "El retorno", 1, 2, 20800, 20240505},
//         {6, "El despertar", 2, 1, 20500, 20240927},
//         {7, "Piloto", 1, 1, 30000, 20240319},
//         {7, "Destino final", 1, 2, 29500, 20241001}
//     };

// void procesarEpisodios(Episodio vecA[], int n)
// {
//     int i = 0;
//     int totalGeneralSeries;
//     cout << " ================ Listado de Descargas de Serie ================ " << endl;
//     while (i < n)
//     {
//         int keySerie = vecA[i].Id_Serie;
//         int totalEpisodiosSerie = 0;

//         totalGeneralSeries++;

//         cout << "\n==============================================" << endl;
//         cout << "Serie: " << vecA[i].Id_Serie << endl;

//         cout << "--------------------------------------------------------------" << endl;

//         while (i < n && vecA[i].Id_Serie == keySerie)
//         {
//             int keyTemporada = vecA[i].temporada;
//             int totalEpisodiosTemporada = 0;
//             int totalDescargasTemporada = 0;

//             cout << "Temporada: " << vecA[i].temporada << endl;

//                 while (i < n && vecA[i].Id_Serie == keySerie && vecA[i].temporada == keyTemporada)
//             {
//                 totalEpisodiosTemporada++; // cuenta episodio
//                 totalDescargasTemporada = totalDescargasTemporada + vecA[i].descargas;
//                 totalEpisodiosSerie++;

//                 cout << "----------------------------------------------" << endl;
//                 cout << "N° Episodio       "
//                      << "Título de episodio             "
//                      << "Cant. Descargas     "
//                      << "Última Descarga" << endl;

//                 cout << vecA[i].episodio << "                       ";
//                 cout << vecA[i].titulo << "                           ";
//                 cout << vecA[i].descargas << "                    ";
//                 cout << vecA[i].ultimaDescarga << "                " << endl;

//                 i++; // avanzar al siguiente episodio
//             }

//             // cambio de temporada

//             cout << "Total episodios temporada: " << totalEpisodiosTemporada << endl;
//             cout << "Total descargas temporada: " << totalDescargasTemporada << endl;
//             cout << "--------------------------------------------------------------" << endl;
//                 }
//         cout << "Cantidad total de episodios de la serie: " << totalEpisodiosSerie << endl;
//         cout << "==============================================" << endl;
//     }
//     cout << "Total general de series: " << totalGeneralSeries << endl;
//     cout << "==============================================" << endl;
// }

// int main()
// {
//     int miContador = 0;
//     long miVariableLong = 0;

//     procesarEpisodios(episodios, 20);
// }

// Ej. 4: El dueño de un local de venta de juegos para distintas consolas necesita desarrollar un algoritmo que genere un vector, JuegosPorConsola, ordenado por consola, con un solo registro por consola según el siguiente diseño:
// a) Consola (cadena) b) Cantidad de juegos (4 dígitos)
// Para obtener la información solicitada se cuenta con el conjunto de datos Juegos, ordenado por código de juego con un registro por cada juego que se encuentra en el local, con el siguiente diseño:
// 1) Código del juego (6 digitos)
// 3) Stock en el local (2 digitos)
// 2) Titulo del Juego (cadena)
// 4) Consola (cadena)
// Realizar el procedimiento que complete el vector JuegosPorConsola recibiendo el vector de Juegos

// struct Juego {
//     int codigo;
//     int stock;
//     string titulo;
//     string consola;
// };

// struct JuegosPorConsola {
//     string consola;
//     int cantidad;
// };

// void ordenarJuegosPorConsola (Juego arr[], int n)
// {
//     int i, j;
//     string aux;
//     i = 0;
//     bool ordenado = false;
//     while (i < n && !ordenado)
//     {
//         ordenado = true; // Arranco asumiendo que si esta ordenado
//         // Los ultimos i elementos ya estan ordenados
//         for (j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j].consola > arr[j + 1].consola)
//             {
//                 aux = arr[j].consola;
//                 arr[j].consola = arr[j + 1].consola;
//                 arr[j + 1].consola = aux;
//                 ordenado = false; // Cambio el flag si hice un swap
//             }
//         }
//         i++;
//     }
// }

// void obtenerArrPorConsola(Juego vect1[], int n, JuegosPorConsola vect2[], int &j)
// {
//     int i = 0;
//     string key;

//     while (i < n)
//     {
//         key = vect1[i].consola;
//         vect2[j].cantidad = 0;
//         vect2[j].consola = vect1[i].consola;

//         while (i < n && key == vect1[i].consola)
//         {
//             vect2[j].cantidad++;
//             i++;
//         }
//         j++;
//     }
// }

// int main () {

//     int m = 0;
//     Juego juegos[15] = {
//         {1001, 10, "The Legend of Zelda: Tears of the Kingdom", "Nintendo Switch"},
//         {1002, 5, "Super Mario Odyssey", "Nintendo Switch"},
//         {1003, 8, "Mario Kart 8 Deluxe", "Nintendo Switch"},
//         {1004, 12, "God of War: Ragnarök", "PlayStation 5"},
//         {1005, 4, "Horizon Forbidden West", "PlayStation 5"},
//         {1006, 6, "Spider-Man 2", "PlayStation 5"},
//         {1007, 3, "Forza Horizon 5", "Xbox Series X"},
//         {1008, 7, "Halo Infinite", "Xbox Series X"},
//         {1009, 2, "Starfield", "Xbox Series X"},
//         {1010, 9, "FIFA 25", "PlayStation 5"},
//         {1011, 5, "Metroid Prime Remastered", "Nintendo Switch"},
//         {1012, 8, "Elden Ring", "PlayStation 5"},
//         {1013, 6, "Gears 5", "Xbox Series X"},
//         {1014, 10, "Animal Crossing: New Horizons", "Nintendo Switch"},
//         {1015, 4, "Gran Turismo 7", "PlayStation 5"}};

//     JuegosPorConsola juegosPorConsola[m];

//     ordenarJuegosPorConsola(juegos, 15);

//     obtenerArrPorConsola(juegos, 15, juegosPorConsola, m);

//     for (int i = 0; i < m; i++)
//     {
//         cout << "Consola: " << juegosPorConsola[i].consola << endl;
//         cout << "Cantidad: " << juegosPorConsola[i].cantidad << endl;
//     }
// }

// Ej.5 : Una discográfica desea obtener un listado de los discos más vendidos en un determinado período.Para ello cuenta con los datos de los discos vendidos en una tabla donde cada columna representa un año y cada fila una venta.Cada venta posee la siguiente información :
// Id.del disco vendido(Código alfanumérico de 6 caracteres)
// Cantidad de discos vendidos(Entero largo)
// Nota : cada disco sólo aparecerá 1 vez por año, es decir, no se repetirá el mismo disco en la misma columna.La discográfica cuenta además con la información de cada disco que comercializa.De cada disco posee los siguientes datos :
// ● Id.del disco vendido(Código alfanumérico de 6 caracteres)
// ● Nombre del disco(Cadena de 40 caracteres).
// ● Id.de la banda : (Entero corto entre 0 y 100)
// ● Nombre de la banda(Cadena de 40 caracteres).La discográfica tiene en su poder 1000 discos para vender.Los datos de los discos se encuentran ordenados por id de disco.Se pide :
// ● Obtener un listado ordenado por nombre de banda con las ventas realizadas en los últimos 10 años.
// ● Consideraciones : Realizar la menor cantidad de búsquedas posibles sobre el conjunto de discos.Ej.

// struct Venta
// {
//     string id;
//     long cantidad;
// };

// struct Disco
// {
//     string id;
//     string nombre;
//     int idBanda;
//     string nombreBanda;
// };

// void matrizAVector(Venta mat[][15], int filas, int columnas, Venta vec[], int &n)
// {
//     int k = 0;
//     int inicio = columnas - 10; // desde la columna 5 hasta la 14 (si columnas=15)

//     for (int i = 0; i < filas; i++)
//     {
//         for (int j = inicio; j < columnas; j++)
//         {
//             vec[k].cantidad = mat[i][j].cantidad;
//             vec[k].id = mat[i][j].id;
//             k++;
//         }
//     }
//     n = k;
// }

//     void ordenarVentas(Venta vec[], int n)
//     {
//         int i, j;
//         Venta aux;
//         i = 0;
//         bool ordenado = false;
//         while (i < n && !ordenado)
//         {
//             ordenado = true;
//             for (j = 0; j < n - i - 1; j++)
//             {
//                 if (vec[j].id > vec[j + 1].id)
//                 {
//                     aux = vec[j];
//                     vec[j] = vec[j + 1];
//                     vec[j + 1] = aux;
//                     ordenado = false;
//                 }
//             }
//             i++;
//         }
//     }

//     string buscarNombreBandaBinaria(Disco vec[], int n, string idBuscado)
//     {
//         int inicio = 0;
//         int fin = n - 1;

//         while (inicio <= fin)
//         {
//             int medio = (inicio + fin) / 2;

//             if (vec[medio].id == idBuscado)
//             {
//                 return vec[medio].nombreBanda;
//             }
//             else if (vec[medio].id < idBuscado)
//             {
//                 inicio = medio + 1;
//             }
//             else
//             {
//                 fin = medio - 1;
//             }
//         }

//         return "Desconocida";
//     }

//     void ventasPorAño(Venta vec1[], int n, Disco vec2[], int m)
//     {

//         int i = 0;

//         while (i < n)
//         {

//             string aux;
//             aux = vec1[i].id;
//             int totalVentas = 0;

//             while (i < n && aux == vec1[i].id)
//             {
//                 totalVentas += vec1[i].cantidad;
//                 i++;
//             }

//             string banda = buscarNombreBandaBinaria (vec2, m, aux);
//             cout  << "Ventas del disco " << aux << ": " << totalVentas << ". " << "Nombre de la banda: " << banda << ". " << endl;
//         }
//     }

//     int main()
//     {
//         const int filas = 10;
//         const int columnas = 15;
//         const int totalDiscos = 50;
//         int n = filas * columnas;
//         Venta vecVentas[n];

//         Disco discos[totalDiscos] = {
//             {"D0001", "Disco 1", 1, "Banda 1"}, {"D0002", "Disco 2", 2, "Banda 2"}, {"D0003", "Disco 3", 3, "Banda 3"}, {"D0004", "Disco 4", 4, "Banda 4"}, {"D0005", "Disco 5", 5, "Banda 5"}, {"D0006", "Disco 6", 6, "Banda 6"}, {"D0007", "Disco 7", 7, "Banda 7"}, {"D0008", "Disco 8", 8, "Banda 8"}, {"D0009", "Disco 9", 9, "Banda 9"}, {"D0010", "Disco 10", 10, "Banda 10"}, {"D0011", "Disco 11", 11, "Banda 11"}, {"D0012", "Disco 12", 12, "Banda 12"}, {"D0013", "Disco 13", 13, "Banda 13"}, {"D0014", "Disco 14", 14, "Banda 14"}, {"D0015", "Disco 15", 15, "Banda 15"}, {"D0016", "Disco 16", 16, "Banda 16"}, {"D0017", "Disco 17", 17, "Banda 17"}, {"D0018", "Disco 18", 18, "Banda 18"}, {"D0019", "Disco 19", 19, "Banda 19"}, {"D0020", "Disco 20", 20, "Banda 20"}, {"D0021", "Disco 21", 21, "Banda 21"}, {"D0022", "Disco 22", 22, "Banda 22"}, {"D0023", "Disco 23", 23, "Banda 23"}, {"D0024", "Disco 24", 24, "Banda 24"}, {"D0025", "Disco 25", 25, "Banda 25"}, {"D0026", "Disco 26", 26, "Banda 26"}, {"D0027", "Disco 27", 27, "Banda 27"}, {"D0028", "Disco 28", 28, "Banda 28"}, {"D0029", "Disco 29", 29, "Banda 29"}, {"D0030", "Disco 30", 30, "Banda 30"}, {"D0031", "Disco 31", 31, "Banda 31"}, {"D0032", "Disco 32", 32, "Banda 32"}, {"D0033", "Disco 33", 33, "Banda 33"}, {"D0034", "Disco 34", 34, "Banda 34"}, {"D0035", "Disco 35", 35, "Banda 35"}, {"D0036", "Disco 36", 36, "Banda 36"}, {"D0037", "Disco 37", 37, "Banda 37"}, {"D0038", "Disco 38", 38, "Banda 38"}, {"D0039", "Disco 39", 39, "Banda 39"}, {"D0040", "Disco 40", 40, "Banda 40"}, {"D0041", "Disco 41", 41, "Banda 41"}, {"D0042", "Disco 42", 42, "Banda 42"}, {"D0043", "Disco 43", 43, "Banda 43"}, {"D0044", "Disco 44", 44, "Banda 44"}, {"D0045", "Disco 45", 45, "Banda 45"}, {"D0046", "Disco 46", 46, "Banda 46"}, {"D0047", "Disco 47", 47, "Banda 47"}, {"D0048", "Disco 48", 48, "Banda 48"}, {"D0049", "Disco 49", 49, "Banda 49"}, {"D0050", "Disco 50", 50, "Banda 50"}};

//         Venta ventas[filas][columnas] = {
//             {{"D0001", 100}, {"D0002", 110}, {"D0003", 120}, {"D0004", 130}, {"D0005", 140}, {"D0006", 150}, {"D0007", 160}, {"D0008", 170}, {"D0009", 180}, {"D0010", 190}, {"D0011", 200}, {"D0012", 210}, {"D0013", 220}, {"D0014", 230}, {"D0015", 240}},
//             {{"D0016", 105}, {"D0017", 115}, {"D0018", 125}, {"D0019", 135}, {"D0020", 145}, {"D0021", 155}, {"D0022", 165}, {"D0023", 175}, {"D0024", 185}, {"D0025", 195}, {"D0026", 205}, {"D0027", 215}, {"D0028", 225}, {"D0029", 235}, {"D0030", 245}},
//             {{"D0031", 110}, {"D0032", 120}, {"D0033", 130}, {"D0034", 140}, {"D0035", 150}, {"D0036", 160}, {"D0037", 170}, {"D0038", 180}, {"D0039", 190}, {"D0040", 200}, {"D0041", 210}, {"D0042", 220}, {"D0043", 230}, {"D0044", 240}, {"D0045", 250}},
//             {{"D0046", 115}, {"D0047", 125}, {"D0048", 135}, {"D0049", 145}, {"D0050", 155}, {"D0001", 165}, {"D0002", 175}, {"D0003", 185}, {"D0004", 195}, {"D0005", 205}, {"D0006", 215}, {"D0007", 225}, {"D0008", 235}, {"D0009", 245}, {"D0010", 255}},
//             {{"D0011", 120}, {"D0012", 130}, {"D0013", 140}, {"D0014", 150}, {"D0015", 160}, {"D0016", 170}, {"D0017", 180}, {"D0018", 190}, {"D0019", 200}, {"D0020", 210}, {"D0021", 220}, {"D0022", 230}, {"D0023", 240}, {"D0024", 250}, {"D0025", 260}},
//             {{"D0026", 125}, {"D0027", 135}, {"D0028", 145}, {"D0029", 155}, {"D0030", 165}, {"D0031", 175}, {"D0032", 185}, {"D0033", 195}, {"D0034", 205}, {"D0035", 215}, {"D0036", 225}, {"D0037", 235}, {"D0038", 245}, {"D0039", 255}, {"D0040", 265}},
//             {{"D0041", 130}, {"D0042", 140}, {"D0043", 150}, {"D0044", 160}, {"D0045", 170}, {"D0046", 180}, {"D0047", 190}, {"D0048", 200}, {"D0049", 210}, {"D0050", 220}, {"D0001", 230}, {"D0002", 240}, {"D0003", 250}, {"D0004", 260}, {"D0005", 270}},
//             {{"D0006", 135}, {"D0007", 145}, {"D0008", 155}, {"D0009", 165}, {"D0010", 175}, {"D0011", 185}, {"D0012", 195}, {"D0013", 205}, {"D0014", 215}, {"D0015", 225}, {"D0016", 235}, {"D0017", 245}, {"D0018", 255}, {"D0019", 265}, {"D0020", 275}},
//             {{"D0021", 140}, {"D0022", 150}, {"D0023", 160}, {"D0024", 170}, {"D0025", 180}, {"D0026", 190}, {"D0027", 200}, {"D0028", 210}, {"D0029", 220}, {"D0030", 230}, {"D0031", 240}, {"D0032", 250}, {"D0033", 260}, {"D0034", 270}, {"D0035", 280}},
//             {{"D0036", 145}, {"D0037", 155}, {"D0038", 165}, {"D0039", 175}, {"D0040", 185}, {"D0041", 195}, {"D0042", 205}, {"D0043", 215}, {"D0044", 225}, {"D0045", 235}, {"D0046", 245}, {"D0047", 255}, {"D0048", 265}, {"D0049", 275}, {"D0050", 285}}};

//         matrizAVector(ventas, filas, columnas, vecVentas, n);

//         ordenarVentas(vecVentas, n);

//         ventasPorAño(vecVentas, n, discos, totalDiscos);

//         return 0;
//     }

// Ej.6 : Una casa de venta de repuestos automotores comercializa 30 artículos diferentes los que vende en cada una de sus 4 sucursales.Al finalizar cada semana, se recibe la siguiente información de los movimientos de artículos : -Código de artículo(Entero entre 0 y 29).- Código de sucursal(Entero entre 0 y 3).- Tipo de movimiento(‘E’ = > Entrada, ‘S’ = > Salida).- Cantidad(Entero mayor a cero).El dueño desea un informe que muestre la cantidad en stock de cada artículo en cada sucursal y además una lista de los artículos indicando el Código cuyo stock total sea igual a cero o menor que cero(se acepta stock negativo).Nota : El stock inicial debe venir cargado en una matriz de artículos por sucursales cuyas celdas contienen un valor entero que indica el stock de cada artículo en cada sucursal.

struct Articulo
{
    int codigo;
    int codSucursal;
    string movimiento;
    int cantidad;
};

void ordenarArticulos(Articulo vect[], int n)
{
    int i = 0, j = 0;
    Articulo aux;
    bool ordenado = false;

    while (i < n && !ordenado)
    {
        ordenado = true;
        for (j = 0; j < n - i - 1; j++)
        {

            if (vect[j].codigo > vect[j + 1].codigo ||
                (vect[j].codigo == vect[j + 1].codigo && vect[j].codSucursal > vect[j + 1].codSucursal))
            {
                aux = vect[j];
                vect[j] = vect[j + 1];
                vect[j + 1] = aux;
                ordenado = false;
            }
        }
        i++;
    }
}

void copiarMatriz(int mat1[][4], int mat2[][4], int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)

            mat2[i][j] = mat1[i][j];
    }
}

void stockArticuloPorSucursal(Articulo vect[], int n, int mat[][4], int art, int suc)
{

    int i = 0;
    while (i < n)
    {

        int keyArticulo = vect[i].codigo;

        while (i < n && keyArticulo == vect[i].codigo)
        {

            int keySucursal = vect[i].codSucursal;

            while (i < n && keyArticulo == vect[i].codigo && keySucursal == vect[i].codSucursal)
            {
                if (vect[i].movimiento == "E")
                    mat[keyArticulo][keySucursal] += vect[i].cantidad;
                else
                    mat[keyArticulo][keySucursal] -= vect[i].cantidad;

                i++;
            }

            cout << "El stock del producto " << keyArticulo << " en la sucursal " << keySucursal << " es: " << mat[keyArticulo][keySucursal] << endl;
        }
    }

    cout << "Los códigos de los articulos con stock faltante son: " << endl;
    for (int i = 0; i < art; i++)
    {
        for (int j = 0; j < suc; j++)
            if (mat[i][j] <= 0)
                cout << mat[i][j] << endl;
    }
}

// void stockArticuloPorSucursal(Articulo vect[], int n, int mat[][4], int art, int suc)
// {
//     // int faltaStock[30];
//     // int m = 0;
//     int i = 0;
//     while (i < n)
//     {

//         int keyArticulo = vect[i].codigo;

//         while (i < n && keyArticulo == vect[i].codigo)
//         {
//             int resultadoMov = 0;
//             int stockArticulo = 0;
//             int keySucursal = vect[i].codSucursal;

//             while (i < n && keyArticulo == vect[i].codigo && keySucursal == vect[i].codSucursal)
//             {
//                 if (vect[i].movimiento == "E")
//                     resultadoMov += vect[i].cantidad;
//                 else
//                     resultadoMov -= vect[i].cantidad;
//                 i++;
//             }
//             stockArticulo = mat[keyArticulo][keySucursal] + resultadoMov;
//             cout << "El stock del producto " << keyArticulo << " en la sucursal " << keySucursal << " es: " << stockArticulo << endl;

// if (stockArticulo <= 0)
// {
//     faltaStock[m] = keyArticulo;
//     m++;
// }
//     }
// }

// cout << "Los códigos de los articulos con stock faltante son: " << endl;
// for (int i = 0; i < m; i++)
// {
//     cout << faltaStock[i] << endl;
// }
// }

int main()
{

    const int art = 30;
    const int suc = 4;
    int stock[art][suc] = {
        {4, 9, 3, 6},
        {1, 8, 5, 7},
        {7, 5, 8, 2},
        {7, 0, 5, 1},
        {3, 5, 2, 3},
        {9, 4, 6, 8},
        {0, 2, 1, 0},
        {8, 1, 9, 2},
        {5, 6, 4, 3},
        {2, 8, 6, 1},
        {6, 3, 7, 5},
        {1, 4, 2, 3},
        {8, 7, 5, 4},
        {3, 1, 4, 2},
        {7, 6, 8, 5},
        {4, 3, 2, 6},
        {9, 8, 7, 6},
        {2, 1, 3, 2},
        {5, 9, 8, 7},
        {6, 4, 1, 5},
        {3, 2, 4, 1},
        {8, 6, 7, 9},
        {1, 3, 5, 2},
        {7, 9, 6, 8},
        {4, 2, 1, 0},
        {5, 7, 3, 6},
        {9, 5, 8, 4},
        {2, 3, 1, 5},
        {6, 1, 4, 3},
        {3, 4, 2, 1}};

    const int n = 25;

    Articulo movimientos[n] = {
        {0, 0, "E", 5},
        {3, 1, "S", 10},
        {10, 2, "E", 8},
        {7, 3, "S", 10},
        {4, 0, "E", 10},
        {18, 1, "S", 12},
        {25, 2, "E", 6},
        {12, 3, "S", 13},
        {29, 0, "E", 12},
        {8, 1, "S", 9},
        {0, 0, "S", 2},
        {3, 1, "E", 7},
        {10, 2, "S", 4},
        {7, 3, "E", 5},
        {4, 0, "S", 6},
        {18, 1, "E", 10},
        {25, 2, "S", 3},
        {12, 3, "E", 9},
        {8, 1, "E", 6},
        {29, 0, "S", 4},
        {7, 1, "E", 4},
        {10, 3, "S", 2},
        {18, 2, "E", 3},
        {4, 1, "S", 1},
        {25, 0, "E", 8}};

    int nuevaMatriz[art][suc];

    copiarMatriz(stock, nuevaMatriz, art, suc);

    ordenarArticulos(movimientos, n);

    stockArticuloPorSucursal(movimientos, n, nuevaMatriz, art, suc);
}