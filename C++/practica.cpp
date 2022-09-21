/* 
    Solicitar un numero
    Despues trabajar en base a ese numero

    Solicitar un numero al usuario
    En base a ese numero crear con "  *  " un rombo 
    segun el numero ingresado el numero mas pequeño debe de ser 3.

    Ingreso 4: el valor seria 5
    Ingreso 5: el valor seria 5
    Ingreso 6: el valor seria 7
    Ingreso 7: el valor seria 7
    Ingreso 8: el valor seria 9
    Ingreso 9: el valor seria 9

    Ejemplo:
    Ingreso -> 3
                *
               * *
              * * *
               * *
                *
    
    Ingreso -> 4 -> 5
                 *
               *  *
             *  *  *
            *  *  *  * 
          *  *  *  *  *
            *  *  *  *
             *  *  *
               *  *
                 *  
*/

#include <iostream>
#include <string>
using namespace std;

int main(void){
    // Solicitar el numero
    int numero = 0;
    string cadena1 = "*";
    cout << "Ingrese el tamaño del rombo: ";
    cin >> numero;
    for(int a = 1; a<=numero; a++){
        cout << cadena1;
        cadena1 += "*";
        cout << "\n";
    }
    cadena1.erase(0,1);
    for(int a = numero; a>0; a--){
        cadena1 = cadena1.erase(0,1);    
        cout << cadena1;
        cout <<"\n";
    }
}