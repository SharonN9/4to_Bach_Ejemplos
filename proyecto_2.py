from statistics import mode
from matplotlib import image
import matplotlib.pyplot as plt
from numpy import imag
import tensorflow as tf
import tensorflow_datasets as tfds

datos, metadatos = tfds.load('fashion_mnist', as_supervised=True, with_info=True)

print(metadatos)

datos_entrenamiento, datos_pruebas = datos['train'], datos['test']

nombres_clases = metadatos.features['label'].names

print(nombres_clases)

#Normalizar los datos (Pasar de 0 - 255 a 0 - 1)

def normalizar(imagenes, etiquetas):
    imagenes = tf.cast(imagenes, tf.float32)
    imagenes /= 255 #Aqui lo pasa de 0 - 255 a 1
    return imagenes, etiquetas

#Normalizar los datosde entrenamiento y pruebas con la funcion que hicimos 
datos_entrenamiento = datos_entrenamiento.map(normalizar)
datos_pruebas = datos_pruebas.map(normalizar)

#Agregar Cache (usar la memoria en lugar de disco)
datos_entrenamiento = datos_entrenamiento.cache()
datos_pruebas = datos_pruebas.cache()


#Mostrar una imagen de los datos de pruebas, de momento mostraremos la primera
for imagen, etiqueta in datos_entrenamiento.take(1):
    break

imagen = imagen.numpy().reshape((28,28)) #Redimensiona la imagen

import matplotlib.pyplot as plt

#Dibujar
# plt.figure()
# plt.imshow(imagen, cmap = plt.cm.binary)
# plt.colorbar()
# plt.grid(False)
# plt.show()

plt.figure(figsize=(10,10))
for i,(imagen, etiqueta) in enumerate(datos_entrenamiento.take(25)):
    imagen = imagen.numpy().reshape((28,28))
    plt.subplot(5,5,i+1)
    plt.xticks([])
    plt.yticks([])
    plt.grid(False)
    plt.imshow(imagen, cmap = plt.cm.binary)
    plt.xlabel(nombres_clases[etiqueta])

plt.show()


modelo = tf.keras.Sequencial([
    tf.keras.layers.Flatten(input_shape = (28,28,1)), #1 Blanco y negro
    tf.keras.layers.Dense(50, activation = tf.nn.relu),
    tf.keras.layers.Dense(50, activation = tf.nn.relu),
    tf.keras.layers.Dense(10, activation = tf.nn.softmax) #Para redes de  clasficiacion
])

modelo.compile(
    optimizer = 'adam',
    loss = tf.keras.losses.SparceCategoricalCrossentropy(),
    matrics = ['accuracy']
)

num_eje_entrenamiento = metadatos.splits['train'].num_examples
num_eje_pruebas = metadatos.splits['test'].num_examples

TAMANO_LOTE = 32
datos_entrenamiento = datos_entrenamiento.repeat().shuffle(60000)
