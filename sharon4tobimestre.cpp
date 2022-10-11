#include <iostream>
#include <cmath>
using namespace std;
int main(void){
int r1 = 0, r2= 0, r3= 0, n1 = 0, n2 = 0, res = 0;
 string menu = "\t\tMENU\n\t1. Operaciones Básicas\n\t2. Operaciones combinadas\n\t3. Factorial\n\t4. Rombo\n\t5. Serie de Fibonachi";
 string aux = "El resultado es: " ;
 cout << menu;

switch(r1) {
  case 1:
  cout<<" OPERACIONES BASICAS"<<endl;
  cout<<" 1) Suma"<<endl;
  cout<<" 2) Resta"<<endl;
  cout<<" 3) Multiplicacion"<<endl; 
  cout<<" 4) Division"<<endl;
  cout<<" 5) Potencia"<<endl;
  cout<<"6) Salir"<< endl;
  cin>> r1;
  cout<<" SUMA "<<endl;
  cout<<""<<endl;
  cout<<"Ingresa el sumando "<<endl;
  cin>>n1;
  cout<<"Ingresa el 2do sumando "<< endl;
  cin>>n2;
  res = n1+n2;
  cout<<"El resultado fue "<<res<<" :D"<<endl;
  break;

  case 2:
  cout<<" RESTA "<<endl;
  cout<<""<<endl;
  cout<<"Ingresa el minuendo "<<endl;
  cin>>n1;
  cout<<"Ingresa el sustraendo "<< endl;
  cin>>n2;
  res = n1-n2;
  cout<<"El resultado fue "<<res<<endl;
  break;

  case 3:
  cout<<"MULTIPLICACION "<<endl;
  cout<<""<<endl;
  cout<<"Ingresa el multiplicando "<<endl;
  cin>>n1;
  cout<<"Ingresa el multiplicador "<< endl;
  cin>>n2;
  res = n1*n2;
  cout<<"El resultado fue "<<res<<" :D"<<endl;
  break;

  case 4:
  cout<<" DIVISION "<<endl;
  cout<<""<<endl;
  cout<<"Ingresa el dividendo "<<endl;
  cin>>n1;
  cout<<"Ingresa el divisor "<< endl;
  cin>>n2;
  res = n1/n2;
  cout<<"El resultado fue "<<res<<" :D"<<endl;
  break;

  case 5:
  cout<<" POTENCIA "<<endl;
  cout<<""<<endl;
  cout<<"Ingresa la base "<<endl;
  cin>>n1;
  cout<<"Ingresa el exponente "<< endl;
  cin>>n2;
  res = pow(n1, n2);
  cout<<"El resultado fue "<<res<<" :D"<<endl;
  break;
  case 6:
      cout << "Hasta pronto "<< endl;
      break;
  default:
      cout << "Opcion no valida"<< endl;
      break;

  }
  switch(r3) {
  case 3:
    cout<<" FACTORIAL "<<endl;
  int n;
      int i;
      int fac;
      cout << "FACTORIAL"<<endl;
      cout << "Ingresa el primer numero";
      cin >> n;
    fac=1;
    for(i=1;i<=n;i++)
          fac = fac * i;
    cout << "Factorial de " << n << " es: " << fac << endl;
  }
  switch(r3) {
  case 4:
    int num ;
    cout << " Ingrese el tamaño del rombo: " ;
    cin >> num ;
    for (int a = 0; a <num ; a++) {
        for (int i = 0; i < num-a-1; i++)
            cout << " ";
        for (int i = 0; i < 2*a+1; i++)
             cout << "*" ;
        cout << endl ;
    }

    for (int a=num-2; a>=0; a--) {
        for (int i=0; i<num-a-1; i++)
            cout << " " ;
        for (int i=0; i<2*a+1; i++)
            cout << "*" ;
        cout << endl ;
    }
    return 0;

}
  }
