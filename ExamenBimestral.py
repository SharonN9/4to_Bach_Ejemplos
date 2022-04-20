print("---------------------------")
print("--Numeros pares e impares--")
print("---------------------------")

while (True):
    print("---------------------------------------------------------------------------")
    print("Seleccione una de las siguientes opciones ")
    print("[1]numeros pares\n [2]numeros impares \n [3]Salir ")
    opcion=input()
    if opcion=="1":
        n = 0
        while n <101:
            n= n+1
            if n % 2 == 0:
                print("el",n,"es par")
    elif opcion=="2":
        n = 3
        while n <101:
            n= n+2
            if n % 3 == 0:
                print("el",n,"es impar")
        
    elif opcion=="3":
        print("saliendo")
        break