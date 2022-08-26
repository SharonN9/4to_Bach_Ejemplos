import tensorflow as ts
import numpy as np
import matplotlib.pyplot as plt

x = np.array([0,1,2,3,4,5,6,7,8,9])
y = np.array([0,5,7,11,16,14,18,21,27,30])

capa1 = ts.keras.layers.Dense(units=1, input_shape=[1])
salida = ts.keras.layers.Dense(units=1, input_shape=[1])

modelo = ts.keras.Sequential([capa1, salida])

modelo.compile(loss='mean_squared_error', optimizer=ts.keras.optimizers.Adam(0.01))

modelo.fit(x, y, epochs=500)

print(modelo.predict([10]))

