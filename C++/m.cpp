#include <iostream>
#include <string>
using namespace std;

int main(){
    // Usuario: Alumno661 -> Char [20]
    // Password: p4ssw0rd -> Char [20]
    string usuario = "Diego";
    string password= "password";

    string usuario_ingresado;
    string password_ingresado;
    
    cout << "**INGRESAR**" << endl;
    cout << "Usuario: ";
    cin >> usuario_ingresado;
    cout << "Contraseña: ";
    cin >> password_ingresado;

    if(usuario_ingresado == usuario){
        if(password_ingresado == password){
            cout << "Bienvenido " << usuario << endl;
        }else{
            cout << "Contraseña incorrecta" << endl;
        }
    }else{
        cout << "Usuario incorrecto" << endl;
    }
    return 0;
}
