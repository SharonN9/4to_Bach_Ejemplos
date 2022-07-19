#include <iostream>

using namespace std;

int main(void){
    int num1 = 0,num2 = 0,num3 = 0;

    cout<< "Ingrese el primer numero: " ;
    cin >> num1;
    cout<< "Ingrese el segundo numero: " ;
    cin >> num2;
    cout<< "Ingrese el tercer numero: " ;
    cin >> num3;

    //Encontrar el numero menor, el mediano y el mayor
    //Utilizando if's
    // if -> if else -> if else if
    // 4 9 4
    if(num1>num2){ // Comparo el 1ro con el 2do
        if(num1>num3){ // Comparo el 1ro con el 3ro
            cout << "El primer numero es el mas grande"<<endl;
            if (num2>num3){ // Comparo el 2do con el 3ro
                cout << "El segundo numero es el mediano"<<endl;
                cout << "El tercer numero es el pequeño"<<endl;
            }else{
                cout << "El tercer numero es el mediano"<<endl;
                cout << "El segundo numero es el pequeño"<<endl;
            }
        }else{
            cout<<"El tercer numero es el mas grande" << endl;
            cout<<"El primer numero es el mediano"<<endl;
            cout<<"El segundo numero es el mas pequeño"<< endl;
        }
    }else 
        if(num2>num3){
            cout <<"El segundo numero es el mas grande"<<endl;
            if(num1>num3){
                cout <<"El primero numero es el mediano"<<endl;
                cout <<"El tercer numero es el pequeño"<<endl;
            }else{
                cout <<"El tercer numero es el mediano"<<endl;
                cout <<"El primer numero es el pequeño"<<endl;
            }
        }else{
            cout<<"El tercer numero es el mas grande"<<endl;
            cout<<"El segundo numero es el mediano"<<endl;
            cout<<"El primer numero es el pequeño"<< endl;
        }

}