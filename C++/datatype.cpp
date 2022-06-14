#include <iostream>
#include <string>
using namespace std;

int main(){
    int a = 42;
    int b = -42;

    double c = 3.1415;

    float d = 3.14156;

    long double e = 3.14156789;

    // Los char se colocan entre comilla simple y los string entre
    // comillas dobles
    string s = "Hola mundo de C++";

    char f = 'H';
    char g = 'o';
    char h = 108;
    char i = 'a';

    bool j = true;
    bool k = false;

    int l[5] = {1,2,3,4,5}; // Indices 0,1,2,3,4

    int m[5];
    m[0] = 1;
    m[1] = 3;
    m[2] = 5;
    m[3] = 7;
    m[4] = 9;

    //nombre de variables que no se permiten
    // int 1_Nombre = 10;
    // string nombre apellido = "Diego Obin";
    // string p@ssword = "password";
    // string $Hola = "hola";
    // int numero-1 = 10;

    // nombre de variables que si se permiten

    string Nombre = "Diego";
    string nombre = "Andres";

    
    string Apellido = "Obin";
    string _Hola = "Hola mundo de C++";
    string Nombre_2 = "Andres";
    string apellido_2 = "Rosales";

    int numero_1 = 10;

    int myArr[5];
    int suma = 0;
    for(int x = 0; x < 5; x++){
        myArr[x] = 42;
    }

    for(int x = 0; x < 5; x++){
        suma += myArr[x];
    }

    cout << suma << endl;

    
    return 0;
}