#include <iostream>
using namespace std;

struct Fecha
{
    int dia;
    int mes;
    int anio;
};

struct Cliente
{
    int id;
    string nombre;
    string apellido;
    string email;
};

struct Producto
{
    string SKU;
    string nombre;
    float precio;
};

struct Item
{
    Producto producto;
    int cantidad;
};

struct Factura
{
    int numero;
    Fecha fecha;
    int clienteId;
    int nItems;
    Item items[10];
    float totalVentas = 0;
};

void ingresarClientes(Cliente clientes[], int &id, int &nClientes)
{
    int n;

    cout << "Cuántos clientes desea ingresar: " << endl;
    cin >> n;

    for (int i = nClientes; i < nClientes + n; i++)
    {
        cout << "Ingreso del cliente: " << endl;
        ;
        clientes[i].id = id++;
        cout << "Ingrese el nombre del cliente: ";
        cin >> clientes[i].nombre;
        cout << "Ingrese el apellido del cliente: ";
        cin >> clientes[i].apellido;
        cout << "Ingrese el email del cliente: ";
        cin >> clientes[i].email;
    }

    nClientes += n;
}

float calcularTotalVentas(Factura factura)
{
    float total = 0;
    for (int j = 0; j < factura.nItems; j++)
    {
        total += factura.items[j].producto.precio * factura.items[j].cantidad;
    }
    return total;
}

void ingresarFactura(Factura facturas[], Cliente clientes[], Producto productos[], Item items[], int &nFactura)
{
    int n;
    cout << "Cuántas facturas desea ingresar: " << endl;
    cin >> n;

    for (int i = nFactura; i < nFactura + n; i++)
    {
        facturas[i].numero = i + 1;

        cout << "Fecha de la factura " << endl
             << "Ingrese el día: " << endl;
        cin >> facturas[i].fecha.dia;
        cout << "Ingrese el mes: " << endl;
        cin >> facturas[i].fecha.mes;
        cout << "Ingrese el año: " << endl;
        cin >> facturas[i].fecha.anio;

        cout << "Ingrese el id del cliente: ";
        cin >> facturas[i].clienteId;

        cout << "Cuántos productos desea agregar (máx 10): ";
        cin >> facturas[i].nItems;

        if (facturas[i].nItems > 10)
            facturas[i].nItems = 10;

        for (int j = 0; j < facturas[i].nItems; j++)
        {
            int opcionProducto;
            cout << "\nSeleccione el producto #" << j + 1 << ":" << endl;
            for (int k = 0; k < 10; k++)
            {
                cout << k + 1 << ". " << productos[k].nombre << " - $" << productos[k].precio << endl;
            }
            cout << "Opción: ";
            cin >> opcionProducto;

            while (opcionProducto < 1 || opcionProducto > 10)
            {
                cout << "Opción inválida. Intentelo otra vez." << endl;
                cout << "Opción: ";
                cin >> opcionProducto;
            }

            facturas[i].items[j].producto = productos[opcionProducto - 1];

            cout << "Ingrese la cantidad: ";
            cin >> facturas[i].items[j].cantidad;
        }

        facturas[i].totalVentas = calcularTotalVentas(facturas[i]);
    }
    nFactura += n;
}


void cerrarCaja(Factura facturas[], int nFacturas)
{

    Fecha sesionCaja;
    float ventasPorFactura = 0;
    float totalVentasSesion = 0;
    float maxImporte = 0;

    cout << "Fecha del día a cerrar caja" << endl;
    cout << "Dia: " << endl;
    cin >> sesionCaja.dia;
    cout << "Mes: " << endl;
    cin >> sesionCaja.mes;
    cout << "Año: " << endl;
    cin >> sesionCaja.anio;

    for (int i = 0; i < nFacturas; i++)
    {
        if (facturas[i].fecha.dia == sesionCaja.dia && facturas[i].fecha.mes == sesionCaja.mes && facturas[i].fecha.anio == sesionCaja.anio)
        {
            if (maxImporte < facturas[i].totalVentas)
            {
                maxImporte = facturas[i].totalVentas;
            }

            totalVentasSesion += facturas[i].totalVentas;
        }
    }
    cout << "La máxima factura del día es: " << maxImporte << endl;
    cout << "total ventas del día: " << sesionCaja.dia << "/" << sesionCaja.mes << "/" << sesionCaja.anio << " es : " << totalVentasSesion << endl;
}

int main()
{

    int opcion;
    int id = 1;
    Cliente clientes[100];
    Factura facturas[100];
    Item items[10];
    int nClientes = 0;
    int nFacturas = 0;
    Producto productos[10] = {
        {"SKU001", "Arroz 1kg", 120.50},
        {"SKU002", "Fideos 500g", 85.00},
        {"SKU003", "Azúcar 1kg", 90.00},
        {"SKU004", "Aceite 1L", 250.75},
        {"SKU005", "Leche 1L", 150.20},
        {"SKU006", "Pan de molde", 180.00},
        {"SKU007", "Café 250g", 320.50},
        {"SKU008", "Galletitas 200g", 95.00},
        {"SKU009", "Jugo 1L", 140.00},
        {"SKU010", "Manteca 200g", 210.00}};

    cout << "=========================\n";
    cout << "      MENU PRINCIPAL     \n";
    cout << "=========================\n";
    cout << "1. Ingresar clientes\n";
    cout << "2. Ingresar facturas\n";
    cout << "3. Cerrar caja\n";
    cout << "0. Salir\n";
    cout << "=========================\n";
    cout << "Ingrese una opción: ";
    cin >> opcion;

    while (opcion != 0)
    {
        switch (opcion)
        {
        case 1:
            ingresarClientes(clientes, id, nClientes);
            break;

        case 2:
            ingresarFactura(facturas, clientes, productos, items, nFacturas);
            break;

        case 3:
            cerrarCaja(facturas, nFacturas);
            break;

        default:
            cout << "Opción no válida. Intente nuevamente.\n";
            break;
        }

        cout << "\n=========================\n";
        cout << "1. Ingresar clientes\n";
        cout << "2. Ingresar facturas\n";
        cout << "3. Cerrar caja\n";
        cout << "0. Salir\n";
        cout << "=========================\n";
        cout << "Ingrese una opción: ";
        cin >> opcion;
    }

    // cout << "Los clientes son: " << endl;

    // for (int i = 0; i < nClientes; i++)
    // {
    //     cout << clientes[i].id << " " << clientes[i].nombre << " " << clientes[i].apellido << " " << clientes[i].email << endl;
    // }

    // cout << "\nPrograma finalizado.\n";

    return 0;
}