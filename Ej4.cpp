/*Crear un programa con un menú de opciones visible por terminal, que tenga los
métodos sumarEnteros, calcularAreaCirculo y calcular la potencia de un número. El
menú deberá solicitar los parámetros al usuario de acuerdo a la opción
seleccionada.
*/
#include <iostream>
#include <cmath>
using namespace std;
void menu()
{

    cout << "Ingrese una opción: " << endl;
    cout << "1. Sumar Enteros" << endl;
    cout << "2. Calcular Area Circulo" << endl;
    cout << "3. Calcular Potencia" << endl;
    cout << "4. Salir" << endl;
}

void sumarEnteros(int a, int b)
{
    cout << "La suma de los enteros es: " << a + b << endl;
}
int main()
{
    int opcion;
    do
    {
        menu();
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            int a, b;
            cout << "Ingrese el primer entero: " << endl;
            cin >> a;
            cout << "Ingrese el segundo entero: " << endl;
            cin >> b;
            sumarEnteros(a, b);
            break;
        case 2:
            float radio;
            cout << "Ingrese el radio del círculo: " << endl;
            cin >> radio;
            cout << "El área del círculo es: " << 3.1416 * radio * radio << endl;
            break;
        case 3:
            int base, exponente;
            cout << "Ingrese la base: " << endl;
            cin >> base;
            cout << "Ingrese el exponente: " << endl;
            cin >> exponente;
            cout << "La potencia es: " << pow(base, exponente) << endl;
            break;
        case 4:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opción inválida" << endl;
            break;
        }

    } while (opcion != 4);
}