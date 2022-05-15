
def dirty_successors(n):
    if n == 1: return [3, 5]
    elif n == 2: return [4, 6]
    elif n == 3: return [7, 1]
    elif n == 4: return [8, 2]
    elif n == 5: return [6, 1]
    elif n == 6: return [2, 5]
    elif n == 7: return [8, 3]
    elif n == 8: return [4, 7]
    else: return None

def clean_successors(n):
    if n == 1: return [3]
    elif n == 2: return [4]
    elif n == 3: return [7]
    elif n == 4: return [8]
    elif n == 5: return [6]
    elif n == 6: return [2]
    elif n == 7: return [8]
    elif n == 8: return [4]
    else: return None


def recorrerTodo(nodo_inicio):
    estados = list(range(1, 9))
    lista = [nodo_inicio]
    while lista:
        actual = lista.pop(0)
        estados.remove(actual)
        print(actual, end=' ')
        temp = dirty_successors(actual)
        if temp:
            while temp:
                aux = temp.pop(0)
                if aux in estados:
                    lista.append(aux)
                    break
        if estados: print('>', end=' ')
    print('\nSOLUCION\n')


def busquedaAnchura(nodo_inicio, nodo_fin):
    lista = [nodo_inicio]
    while lista:
        nodo_actual = lista.pop(0)
        print(nodo_actual, end=' ')
        if nodo_actual == nodo_fin:
            return print("\nSOLUCIÓN\n")
        temp = clean_successors(nodo_actual)
        if temp:
            lista.extend(temp)
            print('>', end=' ')
    print("NO-SOLUCIÓN")

def busquedaProfundidad (nodo_inicio, nodo_fin):
    lista = [nodo_inicio]
    while lista:
        nodo_actual = lista.pop(0)
        print(nodo_actual, end=' ')
        if nodo_actual == nodo_fin:
            return print("\nSOLUCIÓN\n")
        temp = clean_successors(nodo_actual)
        temp.reverse()
        if temp:
            temp.extend(lista)
            lista = temp
            print('>', end=' ')
    print("NO-SOLUCIÓN")

recorrerTodo(3)
busquedaAnchura(2, 8)
busquedaProfundidad(5, 4)