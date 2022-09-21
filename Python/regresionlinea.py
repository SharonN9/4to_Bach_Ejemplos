import tensorflow as tf
import numpy as np
import matplotlib.pyplot as plt

# Datos de entrada
x = np.array([1,2,3,4,5,6,7,8,9,10])
y = np.array([2,4,7,9,11,8,7,11,14,16])

# Creacion de las capas ocultas
capa1 = tf.keras.layers.Dense(units=10, input_shape=[1])
capa2 = tf.keras.layers.Dense(units=5, input_shape=[2])
capa3 = tf.keras.layers.Dense(units=1, input_shape=[1])

# Creacion del modelo de red neuronal
red_neuronal = tf.keras.Sequential([capa1, capa2, capa3])

# Compilacion del modelo de red neuronal

red_neuronal.compile(
    loss='mean_squared_error', 
    optimizer=tf.keras.optimizers.Adam(0.01)
)

# Entrenamiento del modelo de red neuronal
red_neuronal.fit(x,y, epochs=50)

# Prediccion de los datos
# prediccion = red_neuronal.predict([15])
prediccion_x = [12,15,18,21]
prediccion_y = []
for i in prediccion_x:
    prediccion_y.append(red_neuronal.predict([i]))

prediccion_x = np.array(prediccion_x)
prediccion_y = np.array(prediccion_y)

# Impresion de los datos
# print('La prediccion de datos es: ',prediccion[0])

# Grafica de los datos
plt.plot(x,y,'o', label='Datos de entrada')
plt.plot(prediccion_x,prediccion_y, label='Prediccion de datos')
plt.grid()
plt.legend()
plt.show()
