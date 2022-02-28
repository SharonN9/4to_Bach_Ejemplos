#Calculadora de MRU

# Encabezado
print("-----------------------------")
print("----CALCULADORA DE MRU ------")
print("-----------------------------")

#Entradas
while True:
    r = input('''
            "MENU"
        1. Calcular Distancia
        2. Calcular Tiempo
        3. Calcular Velocidad
        4. Salir

    Seleccione una opcion: ''')

    if r == '1':
        #Entradas
        print("Ingrese la velocidad y el tiempo del objeto")
        #Convirtiendo la entrada a Float
        v = float(input("Velocidad: ")) # Puede o no traer decimales
        t = float(input("Tiempo: ")) # Puede o no traer decimales
        #Proceso
        d = v * t
        #Salida
        print("El valor de la distancia es de: ", d)

    elif r == '2':
        #Entradas
        print("Ingrese la velocidad y la distancia recorrida del objeto")
        #Convirtiendo la entrada a Float
        v = float(input("Velocidad: ")) # Puede o no traer decimales
        d = float(input("Distancia: ")) # Puede o no traer decimales
        #Proceso
        t = d/v
        #Salida
        print("El tiempo empleado es de: ", t)

    elif r == '3':
        #Entradas
        print("Ingrese el tiempo y la distancia recorrida del objeto")
        #Convirtiendo la entrada a Float
        t = float(input("Tiempo: ")) # Puede o no traer decimales
        d = float(input("Distancia: ")) # Puede o no traer decimales
        #Proceso
        v = d/t
        #Salida
        print("La velocidad el objeto es: ", v)
    elif r == '4':
        print("Hasta la proximaaaaaa")
        break
    else:
        print("Seleccione una opcion valida")