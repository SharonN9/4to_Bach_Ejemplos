DROP DATABASE examen_alumno;
CREATE DATABASE examen_alumno;
USE examen_alumno;

CREATE TABLE Edificio(
	id_edificio INTEGER PRIMARY KEY,
    nombre VARCHAR(25),
    director VARCHAR(25),
    direccion VARCHAR(100)
);

CREATE TABLE Departamento(
	id_departamento INTEGER PRIMARY KEY,
    nombre VARCHAR(25),
    encargado VARCHAR(25),
    no_empleados INTEGER,
    id_edificio INTEGER,
    FOREIGN KEY Departamento(id_edificio) REFERENCES Edificio(id_edificio)
);

CREATE TABLE Empleados(
	id_empleado INTEGER PRIMARY KEY,
    nombre VARCHAR(25),
    apellido VARCHAR(25),
    edad INTEGER,
    direccion VARCHAR(25),
    no_telefono INTEGER,
    id_departamento INTEGER,
    FOREIGN KEY Empleado(id_departamento) REFERENCES Departamento(id_departamento)
);

INSERT INTO Edificio(id_edificio, nombre, director, direccion)
	VALUES (1, 'Novex', 'Roberth Smith','Ciudad de Guatemala');
    
INSERT INTO Departamento(id_departamento,nombre, encargado, no_empleados, id_edificio)
	VALUES (1, 'Administracion', 'Carlos Bran',3, 1);

INSERT INTO Departamento(id_departamento,nombre, encargado, no_empleados, id_edificio)
	VALUES (2, 'Contabilidad', 'Raul Estrada',4, 1);

INSERT INTO Departamento(id_departamento,nombre,encargado, no_empleados, id_edificio)
	VALUES (3, 'Recursos Humanos', 'Salvador Bautista',2, 1);
    
INSERT INTO Empleados(id_empleado,nombre,apellido,edad,direccion,no_telefono,id_departamento)
	VALUES (1,'David', 'Marroquin',25,'Ciudad',123456789,1);

INSERT INTO Empleados(id_empleado,nombre,apellido,edad,direccion,no_telefono,id_departamento)
	VALUES (2,'Luis', 'Culajay',24,'Ciudad',123456789,2);

INSERT INTO Empleados(id_empleado,nombre,apellido,edad,direccion,no_telefono,id_departamento)
	VALUES (3,'Pablo', 'Sanchez',22,'Ciudad',123456789,3);


SELECT e.nombre,e.apellido,d.nombre FROM Empleados e, Departamento d WHERE
 e.id_departamento = d.id_departamento;