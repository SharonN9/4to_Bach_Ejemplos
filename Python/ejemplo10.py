def MenuP():
    while True:
        res = input('''
------------------- CONVERSOR DE MONENAS --------------
MONEDA A CAMBIAR:
1. Dolar
2. Quetzal
3. Euro
Seleccione un opcion: ''')
        if res == '1' or res == '2' or res == '3':
            return res
        else:
            print('Selecciona una opcion correcta')    

def MenuS():
    while True:
        res = input('''
MONEDA DE CAMBIO:
1. Dolar
2. Quetzal
3. Euro
Seleccione un opcion: ''')
        if res == '1' or res == '2' or res == '3':
                return res
        else:
            print('Selecciona una opcion correcta')  

def tazaCambio(valor1, valor2):
    # dolar -> quetzal
    if valor1 == '1' and valor2 == '2':
        return 7.70
    # quetzal -> euro
    elif valor1 == '1' and valor2 == '3':
        return 0.90
    # dolar -> quetzal
    elif valor1 == '2' and valor2 == '1':
        return 0.13
    # dolar -> euro
    elif valor1 == '2' and valor2 == '3':
        return 0.12
    # euro -> quetzal
    elif valor1 == '3' and valor2 == '1':
        return 1.11
    # euro -> dolar 
    elif valor1 == '3' and valor2 == '2':
        return 8.53
    else:
        return 0

def Programa():
    while True:
        moneda = MenuP()
        moneda_deseada = MenuS()
        taza_cambio = tazaCambio(moneda, moneda_deseada)
        if taza_cambio != 0:
            cantidad = input('Ingresa la cantidad que tienes: ') # -> Numero (10)
            try:
                conversion = taza_cambio*float(cantidad)
            except:
                print('No se puede realizar esta operacion')
                continue
            print('La conversion es de: ', conversion)
        else:
            print('No se puede realizar la conversion entre las mismas monedas')

Programa()

# 1. Dolar
# 2. Quetzal
# 3. Euro