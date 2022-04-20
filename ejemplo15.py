### FACTORIAL CON CICLO FOR
### El FACTORIAL SE LE PUEDE SACAR UNICAMENTE A NUMEROS ENTEROS MAYORES O IGUALES A 0
# 6! -> 6*5*4*3*2*1 = 720
# 5! -> 5*4*3*2*1 = 120
# 4! -> 24
# 3! -> 6
# 2! -> 2
# 1! -> 1
# 0! -> 1
numero = int(input('Ingrese un numero mayor o igual a 0: '))

factorial = 1

for i in range(1,numero+1):
    factorial *= i

print('El factorial de ese numero es: ', str(factorial))