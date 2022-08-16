USE db_cloud;

INSERT INTO Pais(id_pais,nombre)
VALUES (1,'Guatemala');

INSERT INTO Pais(id_pais,nombre)
VALUES (2,'El Salvador');

INSERT INTO Pais(id_pais,nombre)
VALUES (3,'Nicaragua');


INSERT INTO Departamento(id_departamento,nombre,id_pais)
VALUES (1,'Alta Verapaz',1);

INSERT INTO Departamento(id_departamento,nombre,id_pais)
VALUES (2,'Baja Verapaz',1);

INSERT INTO Departamento(id_departamento,nombre,id_pais)
VALUES (3,'Chimaltenango',1);

INSERT INTO Departamento(id_departamento,nombre,id_pais)
VALUES (4,'Chiquimula',1);

INSERT INTO Departamento(id_departamento,nombre,id_pais)
VALUES (5,'El Peten',1);

INSERT INTO Departamento(id_departamento,nombre,id_pais)
VALUES (6,'El Progreso',1);

INSERT INTO Departamento(id_departamento,nombre,id_pais)
VALUES (7,'Chiquimula',1);



INSERT INTO Municipio(id_municipio, nombre, id_departamento)
VALUES (1, 'Coban', 1);

INSERT INTO Municipio(id_municipio, nombre, id_departamento)
VALUES (2, 'Santa Cruz Verapaz', 1);

INSERT INTO Municipio(id_municipio, nombre, id_departamento)
VALUES (3, 'San Cristobal Verapaz', 1);

