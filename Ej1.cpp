/*Imagina que tienes dos vasos, uno con jugo de naranja y otro con jugo de manzana.
Queremos escribir un programa en C++ que tenga una función llamada
intercambiarJugos que tome dos vasos (representados como variables) y los
intercambie. Luego, en la función main, pedimos al usuario que ingrese la cantidad
de jugo en cada vaso, llamamos a la función intercambiarJugos y mostramos las
cantidades después del intercambio.
*/

#include <iostream>
using namespace std;

void intercambiojugos(int &j1, int &j2)
{
    int aux;
    aux = j1;
    j1 = j2;
    j2 = aux;
}
int main()
{

    int j1, j2;
    cout << "ingrese j1" << endl;
    cin >> j1;
    cout << "ingrese j2" << endl;
    cin >> j2;
    intercambiojugos(j1, j2);
    cout << "j1: " << j1 << endl;
    cout << "j2: " << j2 << endl;
}
