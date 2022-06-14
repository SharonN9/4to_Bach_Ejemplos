//Solicitud de datos en consola
#include<iostream>
#include<string>
using namespace std;

int main(){
    //Decramos todas las variables a utilizar
    string nombre;
    int edad;
    string fecha_de_nacimiento;
    bool casado;

    //Solicitamos los datos
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su fecha de nacimiento: ";
    cin >> fecha_de_nacimiento;
    cout << "Ingrese si esta casado o no: "; // si o no
    //si
    //no
    string respuesta;
    cin >> respuesta;
    if(respuesta == "si"){
        casado = true;
    }else{
        casado = false;
    }

    //Imprimimos los datos
    cout << "Su nombre es: " << nombre << endl;
    cout << "Su edad es: " << edad << endl;
    cout << "Su fecha de nacimiento es: " << fecha_de_nacimiento << endl;
    //Si casado == true -> cout << "Si esta casado"
    //Si casado == false -> cout << "No esta casado"
    cout << "Esta casado: " << casado << endl;

    return 0;
}