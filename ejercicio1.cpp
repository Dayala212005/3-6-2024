#include <iostream>
using namespace std;


int suma(int entero1, int entero2){
int resultado = 0;
resultado = entero1 + entero2;
    return resultado;
}
int resta(int entero1, int entero2){
    int resultado = 0;
resultado = entero1 - entero2;
  return resultado;
}

int multiplicacion(int entero1, int entero2){
    int resultado = 0;
resultado = entero1 * entero2;
 return resultado;
}
float division(float entero1, float entero2){
    float resultado;
    resultado = entero1 / entero2;
    return resultado;
}
float media(float entero1, float entero2){
    float resultado = 0;
resultado = (entero1 + entero2)/2;
 return resultado;
}
int main(){
    float n1=0, n2=0, respuesta=0;
    int opcion=0;
    cout<<"Hola\n";
    cout<<"Favor elegir una opcion\n"<<"1.Suma\n"<<"2.Resta\n"<<"3.Multiplicacion\n"<<"4.Division\n"<<"5.Media\n";
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        cout<<"Ingrese dos numero\n";
        cin>>n1;
        cin>>n2;
        respuesta = suma(n1,n2);
        cout<<"El resultado es: "<<respuesta;
        break;
    case 2:
    cout<<"Ingrese dos numero\n";
        cin>>n1;
        cin>>n2;
        respuesta = resta(n1,n2);
        cout<<"El resultado es: "<<respuesta;
        break;
    case 3:
    cout<<"Ingrese dos numero\n";
        cin>>n1;
        cin>>n2;
        respuesta = multiplicacion(n1,n2);
        cout<<"El resultado es: "<<respuesta;
        break;
    case 4:
    cout<<"Ingrese dos numero\n";
        cin>>n1;
        cin>>n2;
        respuesta = division(n1,n2);
        cout<<"El resultado es: "<<respuesta;
        break;
    case 5 :
    cout<<"Ingrese dos numero\n";
        cin>>n1;
        cin>>n2;
        respuesta = media(n1,n2);
        cout<<"El resultado es: "<<respuesta;
        break;
    default:
    cout<<"Valor no valido\n";
        break;
    }
    return 0;
}

