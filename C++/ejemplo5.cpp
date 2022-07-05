// Realizar la solicitud del radio de una esfera y posteriormente calcular su volumen y presentarlo en pantalla
#include <iostream>
using namespace std;

int main(){

    //Declaracion de varibles
    float radio = 0; //Aqui se le asigna automaticamente el valor de 0.00  // tambien puede ser float
    float volumen = 0; //Declaramos el valor donde se almacenara el valor del volumen
    float pi = 3.141592654; //Declaramos el valor de pi para utilizarlo mas adelante
    
    // Solicitud de datos
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;

    //Procesamiento de datos
    volumen = (4*pi*(radio*radio*radio))/3;

    //Impresion de datos
    cout << "El resultado del volumen es: " << volumen << endl;

    return 0;
}