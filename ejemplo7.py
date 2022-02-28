#Decoración: Nombre del Algoritmo
from cmath import pi
print("-------------------------------------------------------")
print("CALCULAR AREAS Y PERIMETROS")
print("-------------------------------------------------------")
while True:
    res = input('''
1. Rectangulo
2. Cuadrado
3. Circulo
4. Salir
Seleccione una opcion: ''')
    
    if res == '1':
        #Entradas
        print("Ingrese la Base y la Altura: ")
        base = float( input("Base: "))
        altura = float( input("Alto: "))
        #Proceso
        area = base * altura
        perimetro = 2*(base) + 2*(altura)
        #Salida
        print("-------------------------------------------------------")
        print("Area:", area)
        print("Perimetro:", perimetro)

    elif res == '2':
        #Entrada
        lado = float(input('Ingrese el lado del cuadrado: '))
        #Proceso
        area = lado*lado
        perimetro = 4*lado
        #Salida
        print("-------------------------------------------------------")
        print("Area:", area)
        print("Perimetro:", perimetro)

    elif res == '3':
        #Entrada
        radio = float(input('Ingrese el radio del circulo: '))
        #Proceso
        area = 3.1416*radio*radio
        perimetro = 2*3.1416*radio
        #Salida
        print("-------------------------------------------------------")
        print("Area:", area)
        print("Perimetro:", perimetro)

    elif res == '4':
        print("Adiocito")
        break
    
    else:
        print('Por favor selecciona una opcion correcta')
