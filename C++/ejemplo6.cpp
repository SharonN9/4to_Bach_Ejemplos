#include <iostream>
#include <string>
// #include <stdio.h>

using namespace std;

int main(){

    // char nombre[40];
    // printf("%s", "Escribe tu nombre: ");
    // scanf("%[^\n]",nombre);
    // printf("%s", nombre);

    char nombre[20];
    // string nombre;
    cout << "Escribe tu nombre: ";
    cin.getline(nombre,40); //Aca incluimos caracteres como el espacio
    cout << "Tu nombre es: " << nombre << endl;

    


    return 0;
}