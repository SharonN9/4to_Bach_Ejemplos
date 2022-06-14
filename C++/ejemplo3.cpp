//Ejemplo cout y cin
#include<iostream>

using namespace std;

int main(){
    //Para imprimir datos en consola utilizamos 'cout'
    // cout << "Hola mundo" << endl;

    //Para solicitar datos en consola utilizamos 'cin'
    int numero; //Declaramos una variable de tipo entero
    cout << "Ingrese un numero: ";
    cin >> numero; //Ingresamos un numero
    cout << "El numero ingresado es: " << numero << endl;
    return 0;
}