print("---------------------------")
print("----Promedio de 4 Notas----")
print("---------------------------")
while (True):
    
    nombre=input("Por favor ingrese su nombre ")

    v1=int(input("Ingrese la primera nota "))
    v2=int(input("Ingrese la segunda nota "))
    v3=int(input("Ingrese la tercera nota "))
    v4=int(input("Ingrese la cuarta nota "))
    promedio= (v1+v2+v3+v4)/4
    print("Hola :",nombre,"Tu promedio es de ",promedio)