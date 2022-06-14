#include <iostream>

using namespace std;

int main(){
    //Llenamos el array de 3x3x3 de forma manual
    int a[3][3][3] = {
        { //Primera Capa
            {1,2,3}, //Primer Fila
            {4,5,6}, //Segunda Fila
            {7,8,9} //Tercera Fila
        },
        { //Segunda Capa
            {10,11,12}, //Primer Fila
            {13,14,15}, //Segunda Fila
            {16,17,18} //Tercera Fila
        },
        { //Tecerera Capa
            {19,20,21}, //Primer Fila
            {22,23,24}, //Segunda Fila
            {25,26,27} //Tercera Fila
        }
    };

    //Recorremos el array
    for (int i = 0; i < 3; i++){ // Recorremos la primea dimension
        for (int j = 0; j < 3; j++){ //Recorremos la segunda dimension
            for (int k = 0; k < 3; k++){ //Recorremos la tercera dimension
                cout << a[i][j][k] << " ";
            }
        }
    }
    return 0;
}