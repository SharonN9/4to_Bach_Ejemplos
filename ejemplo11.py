# Ingreso de numeros para encontrar el numero mayor y el numero menor
# Encabezado
print("--------------------------------------------")
print("-------------- MAYOR Y MENOR ---------------")
print("--------------------------------------------")

# Pregunta
cant_numeros = int(input('Ingrese la cantidad de numeros a ingresar: '))

# Asignacion de Variables
for i in cant_numeros:
    a = int(input(f'Ingrese el numero {i+1}'))
    #insert(1, dato)
    #extend()
    #append()

# Logica de mayor y menor

lista = [] # -> [ 1, 2, 3, 4, 5, 6, 7, 8]

lista.insert(0, 1)
lista.insert(1, 2)
lista.insert(2, 3)
lista.insert(3, 4)

print(lista)

