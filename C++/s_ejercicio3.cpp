#include <iostream>

using namespace std;

int main(){

    int arr[] = {11,35,62,555,989}; //Array de 5 posiciones
    int suma = 0; //Variable que nos lleva la suma de los datos

    //Sumar el array
    for (int i = 0; i < 5; i++){ //Recorremos el array
        suma += arr[i]; //Sumamos el valor de la posicion actual
    }
    //Imprimir el resultado
    cout << "La suma de los datos del array es: " << suma << endl;

    return 0;
}