-- REPASO TERCER BIMESTRE --
-- CREAR UNA BASE DE DATOS --
CREATE DATABASE Nombre_de_la_base_de_datos ;

-- ELIMINAR UNA BASE DE DATOS --
-- La base de datos debe de existir
-- DROP DATABASE Nombre_de_la_base_de_datos ;

-- UTILIZAR UNA BASE DE DATOS --
USE Nombre_de_la_base_de_datos;

-- CREAR UNA TABLA DENTRO DE UNA BASE DE DATOS --
-- Primero tenemos que indicar que base de datos vamos a utilizar
CREATE TABLE Nombre_de_la_tabla (
	id INTEGER PRIMARY KEY,
    nombre VARCHAR(25)
);

-- ELIMINAR UNA TABLA DENTRO DE UNA BASE DE DATOS --
-- La tabla tiene que existir
-- DROP TABLE Nombre_de_la_tabla ;

-- INSERTAR DATOS EN UNA TABLA -- 
-- La tabla tiene que existir
INSERT INTO Nombre_de_la_tabla (id, nombre) 
	VALUES (1, 'Repaso tercer bimestre');

INSERT INTO Nombre_de_la_tabla (id, nombre) 
	VALUES (2, 'Segundo dato insertado');

INSERT INTO Nombre_de_la_tabla (id, nombre) 
	VALUES (3, 'Tercer dato insertado');

-- MOSTRAR LOS DATOS DE UNA TABLA --
-- La tabla tiene que existir
SELECT * FROM Nombre_de_la_tabla;
