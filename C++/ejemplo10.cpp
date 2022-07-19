// Uso del ciclo for

#include <iostream>
#include <string>

using namespace std;

int main(void){

    string nombre = "";
    int nota = 0, suma = 0, promedio = 0;
    cout<< "Escribe tu nombre: ";
    getline(cin, nombre);

    // 4 bimestres
    for(int a = 1; a<5; a++){
        cout << "Escriba la nota del bimestre " << a << ": ";
        cin >> nota; // 90
        suma += nota;
    }

    promedio = suma/4;

    cout << nombre << " tu nota final es de: " << promedio;
}