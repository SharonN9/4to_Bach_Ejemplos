#include <iostream>
#include <string>

using namespace std;

int main(void){
    //Utilizando el condicional IF
    int numero_1 = 0, numero_2 = 0;
    cout << "Escriba el primer numero: ";
    cin >> numero_1;
    cout << "Escriba el segundo numero: ";
    cin >> numero_2;

    //Saber el numero mas grande
    // Pablo -> Correcto
    if(numero_1 > numero_2){
        cout << "El numero 1 es mayor que el numero 2"<< endl;
    }
    if(numero_1 < numero_2){
        cout << "El numero 1 es menor que el numero 2"<< endl;
    }

    // Carlos -> Correcta
    if(numero_1 >=numero_2){  
        cout<< "numero_1 es mayor que numero_2"<< endl;
    }
    else{
        cout<< "numero_2 es mayor que numero_1"<< endl;
    }

    // Abel -> Correcta
    if (numero_1 > numero_2){
        cout << "El numero uno es mayor que el segundo numero" << endl;
    }else if (numero_1 < numero_2){
        cout << "El primer numero es menor que el segundo numero" << endl;
    }

}