#include <iostream>
using namespace std;
// unsigned long long
int main()
{
    int x, prod = 1;
    cout << "Ingrese un numero para obtener su factorial" << endl;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        prod = prod * i;
    }
    cout << "El factorial es: " << prod << endl;
}