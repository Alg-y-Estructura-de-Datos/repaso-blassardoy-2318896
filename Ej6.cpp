/*Escribe un programa en C++ que tenga una función llamada agregarContacto que
tome un vector<string> por referencia y dos string (uno para el nombre y otro para el
número de teléfono) y los agregue a la lista de contactos en formato "Nombre:
Número". También tendrá una función llamada mostrarContactos que tome un
vector<string> por referencia y muestre todos los contactos en la lista. En la función
main, permite al usuario agregar contactos y mostrar la lista de contactos hasta que
decida salir mediante el uso de un menú.*/
#include <iostream>
#include <vector>
using namespace std;

void agregar(vector<string> &contactos, string nombre, string numero)
{
    contactos.push_back(nombre + ": " + numero);
}

void mostrar(vector<string> &contactos)
{
    for (int i = 0; i < contactos.size(); i++)
    {
        cout << contactos[i] << endl;
    }
}

int main()
{
    vector<string> contactos;
    int opcion;
    string nombre, numero;
    do
    {
        cout << "Ingrese una opcion: " << endl;
        cout << "1. Agregar contacto" << endl;
        cout << "2. Mostrar contactos" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Ingrese el nombre: ";
            cin >> nombre;
            cout << "Ingrese el número de teléfono: ";
            cin >> numero;
            agregar(contactos, nombre, numero);
            break;
        case 2:
            mostrar(contactos);
            break;
        case 3:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opción inválida" << endl;
            break;
        }
    } while (opcion != 3);
}
