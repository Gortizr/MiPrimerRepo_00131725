#include <iostream>
using namespace std;

int main()
{
    float numeros[1000];
    float suma = 0;
    int i;

    do {
        for (i = 0; i < 4; i++) {
            cout << "Ingresa un número (negativo para terminar): ";
            cin >> numeros[i];


    } } while (numeros[i] >= 0); // Repite si el número no fue negativo

    cout << "La suma total de tus números es: " << suma << endl;

    return 0;
}
