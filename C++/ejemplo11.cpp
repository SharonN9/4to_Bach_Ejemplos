// AGREGAR EL USO DEL CICLO WHILE
#include<iostream>
#include<string>

using namespace std;

int main(void){

    // Usando el For para imprimir los numeros pares del 0 al 100
    // Se repite el Ciclo un total de 50 veces (controlado por el programador)
    // for(int a = 0; a <= 100; a = a+2){
    //     cout << a << endl;
    // }

    // for(int a = 0; a < 5; a++){
    //     int res = 0;
    //     cout << "Ingresa el numero 3: ";
    //     cin >> res;
    //     if(res==3){
    //         break;
    //     }
    // }

    // while(true){
    //     int res = 0;
    //     cout << "Ingresa el numero 3: ";
    //     cin >> res;
    //     if(res==3){
    //         break;
    //     }
    // }
    bool continue_ = true;
    while(continue_){
        int respuesta=0,num1=0, num2=0;
        string menu2 = "¿Que operaciones desea realizar?\n\t1. Suma\n\t2. Resta\n\t3. Multiplicacion\n\t4. Division\n\t5. Salir\n";
        string aux = "El resultado es: ";
    
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
    
        while(respuesta!=5){
            cout << menu2;
            cin >> respuesta;
            switch (respuesta)
            {
            case 1:
                cout << aux << num1 + num2 << endl;
                respuesta = 5;
                break;
            case 2:
                cout << aux << num1 - num2 << endl;
                respuesta = 5;
                break;
            case 3:
                cout << aux << num1 * num2 << endl;
                respuesta = 5;
                break;
            case 4:
                if(num2!=0){
                    cout << aux << num1 / num2 << endl;
                    respuesta = 5;
                }else{
                    cout << "No se puede dividir por Cero" << endl;
                    respuesta = 5;
                }
                break;
            case 5:
                cout << "Hasta la proximaaaaaa...."<<endl;
                continue_ = false;
                break;
            default:
                cout << "Por favor selecciona una opcion correcta" << endl;
                break;
            }
        }
    
    }


}