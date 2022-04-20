### CONTROL DE NOTAS DE 4TO Diversificado

### ¿Como usar diccionarios en python?

# DECLARACION DE LISTAS 

listaAlumnos = []
listaCursos = []
listaNotas = []
listaClaves = []

# LLENADO DE LISTAS

n1 = int(input('Ingrese la cantidad de alumnos que va a registrar: '))

### CICLO WHILE
x = 0
while x < n1:
    nombre = input('Ingrese el nombre del alumno')
    listaAlumnos.append(nombre)
    # x = x + 1
    x += 1

### CICLO FOR
for i in range(n1): ## El valor inicial de 'i' es de 0
    nombre = input('Ingrese el nombre del alumno '+ str(i+1)+ ' :')
    listaAlumnos.append(nombre)


