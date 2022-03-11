#Elaborar el algoritmo que permita obtener la distancia entre dos
# puntos en el plano cartesiano A y B utilizando funciones.
# distancia = ((Ax-Bx)**2 + (Ay-By)**2)**0.5
#--------------------Variables a Utilizar------------
#Primera coordenada (2,4)
punto1x = ''
punto1y = ''
#Segunda coordenada (3,6)
punto2x = ''
punto2y = ''
#-------------------- Calculo de Distancia ----------------------
def distancia(x1,y1,x2,y2):
    try:
        x1 = float(x1) # "diez" -> Incorrecto , "10" -> 10.0 Correcto
        x2 = float(x2)
        y1 = float(y1)
        y2 = float(y2)
        d = ((x1 - x2)**2 + (y1 - y2)**2)**0.5 # realiza el calculo de la distancia -> devuelve un float
        return "La distancia es de: " + str(d) # 10 -> "10" : devuelve el numero como cadena de texto
    except:
        return "Error, no se puede realizar este calculo"
#------------------- Pregunta al usuario -------------------
while True:
    print('''
    ---------------- CALCULO DE DISTANCIA ENTRE PUNTOS ---------------
    ''')
    punto1x = input('Ingrese la coordena X del primer punto: ')
    punto1y = input('Ingrese la coordena Y del primer punto: ')
    punto2x = input('Ingrese la coordena X del segundo punto: ')
    punto2y = input('Ingrese la coordena Y del segundo punto: ')
    dist = distancia(punto1x,punto1y,punto2x,punto2y)
    print(dist)
    input("Presione enter para continuar...")
