# Variables -> No deben de tener tipado
# Asignacion -> No importa el tipo de dato
# Condicional if, if else, if elif
# while -> Bucle infinito
# for -> Repeticiones ->
# print() -> Imprime en consola
# input() -> Solicita por teclado
# int() -> Nos parsea a entero
# float() -> Nos parsea a float o decimal
# str() -> Nos parsea a string o cadena de texto

#Palabra reservada -> Nombre de la funcion ( "parametros") : -> Codigo

def suma(numero1, numero2):
    resultado = numero1 + numero2
    return resultado

def resta(numero1, numero2):
    resultado = numero1 - numero2
    return resultado

def multiplicacion(numero1, numero2): #3 4 -> 3 + 3 + 3 + 3
    resultado = 0
    for i in range(numero2): # 0, 1, 2, 3
        resultado += numero1
    return resultado

def division(numero1, numero2):
    resultado = 0
    if numero2 != 0:
        resultado = numero1/numero2
        return resultado
    else:
        return "Error de calculo"

def Hola(nombre):
    print("Hola", nombre, "como estas?")

def AreaCuadrado(lado):
    return lado*lado

def AreaCubo(lado):
    return lado*lado*lado

# print(division(25,5))

Hola("Abel")
