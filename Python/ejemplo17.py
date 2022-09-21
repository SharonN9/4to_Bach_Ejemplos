import numpy as np
import matplotlib.pyplot as plt

# DATOS DE ENTRADA
x = np.array([1,2,3,4,5,6,7,8,9,10]) # Valores para el eje X
y = np.array([3,4,6,10,18,24,32,46,58,62]) # Valores para el eje y

# ANALISIS DE DATOS


# DATOS DE SALIDA
# Estos deben de salir de la Inteligencia Artificial
datos_salida_x = [12, 16, 19]
datos_salida_y = []
predict = 74
for dato in datos_salida_x:
    #Aqui se realiza la prediccion
    # predict = modelo.predict(dato)
    predict += 9
    datos_salida_y.append(predict)

# Pasamos de una array simple a un array de numpy
datos_salida_x = np.array(datos_salida_x)
datos_salida_y = np.array(datos_salida_y)

plt.plot(x,y,"o", label="Entrada")
plt.plot(datos_salida_x, datos_salida_y, label="Salida")
plt.xlabel("Eje X")
plt.ylabel("Eje Y")
plt.grid()
plt.legend()
plt.show()
