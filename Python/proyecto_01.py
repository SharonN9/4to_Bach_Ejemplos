import tensorflow as ts
import numpy as np
import matplotlib.pyplot as plt

celsius = np.array([-40, -10, 0, 8, 15, 22,38])
fahrenheit = np.array([-40, 14, 32, 46, 59, 72, 100])

oculta1 = ts.keras.layers.Dense(units = 4, input_shape = [1])
oculta2 = ts.keras.layers.Dense(units = 4, input_shape = [1])
oculta3 = ts.keras.layers.Dense(units = 4, input_shape = [1])
oculta4 = ts.keras.layers.Dense(units = 3, input_shape = [1])
oculta5 = ts.keras.layers.Dense(units = 3, input_shape = [1])
salida = ts.keras.layers.Dense(units = 1, input_shape = [1])


## lista = [1,2,3]
modelo = ts.keras.Sequential([oculta1, oculta2, oculta3, oculta4, oculta5, salida])

modelo.compile(
    optimizer = ts.keras.optimizers.Adam(0.1),
    loss = 'mean_squared_error'
)

print('Estoy comenzando a aprender')
historial = modelo.fit(celsius, fahrenheit, epochs = 2000)
print("Modelo entrenado")


plt.xlabel("No. Iteracion")
plt.ylabel("Perdida de Datos")
plt.plot(historial.history["loss"])
plt.show()

print("Haciendo una prueba de datos")
dato_prueba = 67
resultado = modelo.predict([dato_prueba])

print("Prediccion: ", str(dato_prueba), " grados celsius son: ", str(resultado), " grados fahrenheit")





