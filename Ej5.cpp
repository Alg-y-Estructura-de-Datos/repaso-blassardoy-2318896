/*Crear una clase calculadora, dicha clase debe tener los métodos sumar, restar,
dividir, multiplicar que realizarán operaciones en dos propiedades A y B. En el
método dividir verifique que el divisor no es 0. Si el divisor es 0, arroje una
excepción.
*/

#include <iostream>
using namespace std;
class calculadora{
    private:
    double a;
    double b;
    public:
    calculadora();
    calculadora(double a,double b);
    void sumar();
    void restar();
    void dividir();
    void multiplicar();
};
calculadora::calculadora(){
}
calculadora::calculadora(double a, double b) : a(a), b(b) {}

void calculadora::sumar(){
    cout<<"La suma de los numeros es: "<<a+b<<endl;
}
void calculadora::restar(){
    cout<<"La resta de los numeros es: "<<a-b<<endl;
}
void calculadora::dividir(){
    if(b==0){
        throw "No se puede dividir por 0";
    }
    cout<<"La division de los numeros es: "<<a/b<<endl;
}
void calculadora::multiplicar(){
    cout<<"La multiplicacion de los numeros es: "<<a*b<<endl;
}

int main(){
    double a,b;
    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    calculadora c(a,b);
    c.sumar();
    c.restar();
    try{
        c.dividir();
    }catch(const char* msg){
        cerr<<msg<<endl;
    }
    c.multiplicar();
}