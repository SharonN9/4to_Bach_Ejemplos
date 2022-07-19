// switch
#include <iostream>
#include <string>
using namespace std;

int main(void){
    int res = 0;
    string menu = "\t\tMENU\n\t1. Mostrar Datos\n\t2. Informacion del Colegio\n\t3. Salir\n";
    cout << menu;
    cin >> res;

    //Sentencia Switch
    switch(res){
        case 1:
            cout << "Diego Obin\n21 años\n23/02/2001\n";
            break;
        case 2:
            cout << "Colegio Agua de Vida Km 58\n";
            break;
        case 3:
            cout << "Adios\n";
            break;
        default:
            cout << "No has ingresado una opcion valida";
            break;
    }

}
