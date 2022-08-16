import numpy as np
import matplotlib.pyplot as plt

x = np.array([1,2,3,4,5,6,7,8,9,10]) # Valores para el eje X
y = np.array([3,4,6,10,18,24,32,46,58,62]) # Valores para el eje y

# Datos de salida
# Estos deben de salir de la Inteligencia Artificial
datos_salida_x = np.array([1,2,3,4,5,6,7,8,9,10])
datos_salida_y = np.array([6,12,18,24,30,36,42,48,54,60])


plt.plot(x,y,"o", label="Entrada")
plt.plot(datos_salida_x, datos_salida_y, label="Salida")
plt.xlabel("Eje X")
plt.ylabel("Eje Y")
plt.grid()
plt.legend()
plt.show()