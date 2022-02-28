#Promedio de 4 notas

#Encabezado
print("-----------------------------")
print("---- PROMEDIO DE 4 NOTAS ----")
print("-----------------------------")

while True:
    #Entradas
    n = int(input("Ingrese la cantidad de notas del alumno: "))
    suma = 0
    
    for a in range(0,n):
        suma += int(input("Ingrese la nota " + str(a+1) + ": "))
    #Proceso
    p = suma/n 
    #Salida

    print("El promedio es de: ", p)

