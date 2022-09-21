#include<iostream>
#include<string>
using namespace std;

void print(string cadena){
    cout << cadena << endl;
}

int main(void){
    // Ejemplo utilizando arrays

    // Declarando el Array
    string nombres[10] = {
        "Pablo",
        "Raul",
        "Angel",
        "Javier C",
        "Sharon",
        "Javier G",
        "Ximena",
        "Carlos",
        "Rodrigo",
        "Erika"
    };

    int edades[10] = {16,16,16,15,16,16,16,16,16,16};
    // Pablo, Raul, Angel, Javier C, Sharon, Javier G, Ximena,Carlos, Rodrigo, Erika
    // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    // Posicion de inicio de los indices?
    // La primera posicion es 0 y la ultima es: n-1
    // Los indices van del 0 al 9
    for(int j = 0; j<10; j++){
        cout << "La edad de "<< nombres[j] << " es de: " << edades[j] << endl;

    }
    // SALIDA EN PANTALLA:
    // La edad de Pablo es de 16
    // La edad de Raul es de 16
    // La edad de Angel es de 16
    // La edad de Javier C es de 15
    // La edad de Sharon es de 16
    // La edad de Javier G es de 16
    // La edad de Ximena es de 16
    // La edad de Carlos es de 16
    // La edad de Rodrigo es de 16
    // La edad de Erika es de 16
    
}

