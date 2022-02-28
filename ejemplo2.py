from math import pi
print("CALCULADORA DEL VOLUMEN DE UNA ESFERA\n")

while True:
    radio = input("Escriba el radio de la esfera: ")
    
    if radio == "exit":
        break

    try:
        volumen = (4/3)*pi*float(radio)**3
        print("El volumen de la esfera es de: ", volumen)
    except:
        print("Error, solo se pueden ingresar numeros")

