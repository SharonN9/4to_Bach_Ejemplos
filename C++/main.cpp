#include <iostream>
#include <string>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;

	while ((aux1 != NULL) && (aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}

	if(lista==aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}

	nuevo_nodo -> siguiente = aux1;

	cout << "Dato ingresado correctamente :3" << endl;
}

void imprimirLista(Nodo *&lista){
	Nodo *aux1 = lista;

	cout << "Datos: \n";
	while ((aux1->siguiente != NULL)){
		cout << aux1->dato << endl ;
		aux1 = aux1->siguiente;
	}
	cout << aux1->dato << endl;
}

int main() {
	Nodo *lista = NULL;
	cout << "Hola mundo de C++" << endl;

	insertarLista(lista,12);
	insertarLista(lista,10);
	insertarLista(lista,40);
	insertarLista(lista,25);
	imprimirLista(lista);
	return 0;
	
}

