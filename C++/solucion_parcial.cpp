#include<iostream>
#include<string>

using namespace std;

int main(void){
    /*
    Menu con 3 opciones: 1. Calculadora, 2. Informacion del Programador, 3. Salir
    1. Calculadora -> Pedir dos numeros y luego preguntar la operacion que se desea hacer
        <- Operaciones -> 
            1. Suma
            2. Resta
            3. Multiplicacion
            4. Division
    2. Informacion del Programador -> Mostrar sus datos personales
        Diego Obin
        El Teacher de Compu
        Cuarto Diversificado
    3. Salir
        Hasta pronto
    */

    int respuesta, num1, num2, resultado;
    string menu1 = "\tMENU\n\t1. Calculadora\n\t2. Informacion del Programador\n\t3. Salir\nSelecciona una opcion: ";
    string menu2 = "¿Que operaciones desea realizar?\n\t1. Suma\n\t2. Resta\n\t3. Multiplicacion\n\t4. Division\n";
    string datos = "\tDiego Obin\n\tTeacher de Compu\n\tCuarto Diversificado\n";
    string aux = "El resultado es: ";
    
    cout << menu1;
    cin >> respuesta;

    switch (respuesta)
    {
    case 1:
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        
        cout << menu2;
        cin >> respuesta;

        switch (respuesta)
        {
        case 1:
            cout << aux << num1 + num2 << endl;
            break;
        case 2:
            cout << aux << num1 - num2 << endl;
            break;
        case 3:
            cout << aux << num1 * num2 << endl;
            break;
        case 4:
            if(num2!=0){
                cout << aux << num1 / num2 << endl;
            }else{
                cout << "No se puede dividir por Cero" << endl;
            }
            break;
        default:
            cout << "Por favor selecciona una opcion correcta" << endl;
            break;
        }
        break;
    case 2:
        cout << datos;
        break;
    case 3:
        cout << "Hasta pronto";
        break;
    default:
        cout << "Por favor selecciona una opcion correcta" << endl;
        break;
    }





}