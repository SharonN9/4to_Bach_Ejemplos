//Solicitar dos numeros al usuario, seguidamente preguntar
//que tipo de operacion quiere hacer:
//Suma, Resta, Multiplicacion, Division, Potencia
//Utilizar la sentencia de control switch

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(void){
    int n1 = 0, n2 = 0, respuesta = 0;
    float resultado = 0;

    cout << "Ingrese el primer numero: ";
    cin>> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    string menu = "\n\t\tMENU\n\t\t1. Suma\n\t\t2. Resta\n\t\t3. Multiplicacion\n\t\t4. Division\n\t\t5. Potencia\nSeleccione el tipo de operacion a realizar: ";
    cout << menu;
    cin >> respuesta;

    switch(respuesta){
        case 1:
            // cout << "Una suma";
            resultado = n1 + n2;
            cout << "El resultado de la suma es: " << resultado;
            break;
        case 2:
            // cout << "Una resta";
            resultado = n1 - n2;
            cout << "El resultado de la resta es: " << resultado;
        case 3:
            // cout << "Una multiplicacion";
            resultado = n1 * n2;
            cout<< "El resultado de la multiplicacion es: " << resultado;
            break;
        case 4:
            // cout << "Una division";
            // resultado = ;
            cout << "El resultado de la division es: " << n1/n2;
            break;
        case 5:
            // cout << "Una potencia";
            resultado = pow(n1, n2);
            cout << "El resultado de la potencia es: " << resultado;
            break;
        default:
            cout << "Selecciona una opcion correcta :c";
    }



}