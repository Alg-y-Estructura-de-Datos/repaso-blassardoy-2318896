/*Escribe un programa en C++ que tenga una función llamada marcarAsiento que
tome un puntero a un booleano y lo cambie a true para indicar que el asiento está
reservado. Luego, en la función main, crea un arreglo que represente los asientos
del teatro (inicialmente todos libres), pide al usuario que elija un asiento para
reservar, llama a la función marcarAsiento y muestra el estado de los asientos antes
y después de la reserva.
*/
#include <iostream>
using namespace std;

void marcarAsiento(bool *asiento)
{
    *asiento = true;
}

int main()
{
    bool asientos[5] = {false, false, false, false, false};
    int asiento;
    cout << "Asientos disponibles: " << endl;
    for (int i = 0; i < 5; i++)
    {
        if (asientos[i] == false)
        {
            cout << "Libre" << endl;
        }
        else
        {
            cout << "Ocupado" << endl;
        }
    }
    cout << "Ingrese el asiento que desea reservar: ";
    cin >> asiento;
    marcarAsiento(&asientos[asiento - 1]);

    cout << "Asientos disponibles: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Asiento " << i + 1 << ": ";
        if (asientos[i] == false)
        {
            cout << "Libre" << endl;
        }
        else
        {
            cout << "Ocupado" << endl;
        }
    }
}