#include <iostream>

using namespace std;

int main()
{

    string trans;
    int opcion;

    cout << "Seleciona un tipo de transporte" << endl;
    cout << "1. Bus\n";
    cout << "2. Metro\n";
    cout << "3. Taxi\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "El costo del viaje es: $1.\n";
        break;

    case 2:
        cout << "El costo del viaje es: $2.\n";
        break;

    case 3:
        cout << "El costo del viaje es: $3.\n";
        break;

    default:
        cout << "Seleccione una opcion del menu.\n";
        break;
    }

    return 0;
}