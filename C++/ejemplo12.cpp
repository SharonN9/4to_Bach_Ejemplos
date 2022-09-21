#include<iostream>
#include<string>

using namespace std;

int main(void){
    //Preguntar al usuario
    //la tabla que desea imprimir
    // ingreso -> 6
    // imprimir la tabla del 6
    while(true){
        int numero = 0;
        cout << "Ingresa la tabla que deseas imprimir: ";
        cin >> numero;

        cout << "IMPRIMIENDO LA TABLA DEL " << numero << endl;
        for(int i=1; i<11; i++){
            cout << numero << " * " << i << " = " << numero*i << endl;
        }
    }
}