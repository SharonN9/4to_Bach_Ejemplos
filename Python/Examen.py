print("----------------------")
print("--numero par o impar--")
print("----------------------")

while (True):
    print("----------------------------------")
    print("seleccione la ocion que desea realizar")
    print("[1]par [2]impar")
    opcion=input()
    if opcion=="1":
        x = 1
        while x <= 100:
            if x % 2 == 0:
                print("el nuemero",x,"es par")
            x = x + 1
    elif opcion=="2":
        x = 3
        while x <= 101:
            if x % 3 == 0:
                print("el numero",x,"es impar")
            x = x + 2