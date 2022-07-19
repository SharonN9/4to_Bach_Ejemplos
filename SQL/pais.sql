DROP DATABASE IF EXISTS db_cloud;
CREATE DATABASE IF NOT EXISTS db_cloud;
USE db_cloud;

CREATE TABLE IF NOT EXISTS Pais(
	id_pais INTEGER PRIMARY KEY,
    nombre VARCHAR(25)
);

CREATE TABLE IF NOT EXISTS Departamento(
	id_departamento INTEGER PRIMARY KEY,
    nombre VARCHAR(25),
    id_pais INTEGER,
    FOREIGN KEY (id_pais) REFERENCES Pais(id_pais)
);

CREATE TABLE IF NOT EXISTS Municipio(
	id_municipio INTEGER PRIMARY KEY,
    nombre VARCHAR(25),
    id_departamento INTEGER,
    FOREIGN KEY (id_departamento) REFERENCES Departamento(id_departamento)
);

CREATE TABLE IF NOT EXISTS A_C(
	id_a_c INTEGER PRIMARY KEY,
    nombre VARCHAR(25),
    id_municipio INTEGER,
    FOREIGN KEY (id_municipio) REFERENCES Municipio(id_municipio)
);