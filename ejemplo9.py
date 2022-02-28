#Decoración: Nombre del Algoritmo
print("-------------------------------------------------------")
print("CONVERSOR DE UNIDADES")
print("-------------------------------------------------------")
#Constantes
menu = '''
1. Longitud
2. Masa
3. Tiempo
4. Energia y Potencia
5. Volumen
6. Fuerza
7. Presion
8. Area
9. Salir
Seleccione una opcion para continuar: '''

dato1 = '''
Ingrese el valor a convertir con sus unidades (dejando separacion de un espacio): '''
dato2 = '''Ingrese la unidad a convertir: '''

#Funciones
def Longitud(valor,dim1, dim2):
    if dim1 == 'km':
        if dim2 == 'm':
            return valor*1000
        if dim2 == 'dm':
            return valor*10000
        if dim2 == 'mm':
            return valor*1000000
        if dim2 == 'um':
            return valor*1000000000
        if dim2 == 'nm':
            return valor*1000000000000
        if dim2 == 'pm':
            return valor*1000000000000000

    else:
        return "Verifica las dimensiones"

def Masa():
    ''

def Tiempo():
    ''
#Entradas

print(Longitud(10,"km", "pm"))
#Proceso
#Salida

