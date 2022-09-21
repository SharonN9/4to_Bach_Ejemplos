DROP DATABASE IF EXISTS vm_data;
CREATE DATABASE IF NOT EXISTS vm_data;
USE vm_data ;

-- -----------------------------------------------------
-- Table Grado
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Grado (
    id_grado INT NOT NULL AUTO_INCREMENT,
    nombre VARCHAR(45) NOT NULL,
    PRIMARY KEY (id_grado))
;

-- -----------------------------------------------------
-- Table Estudiante
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Estudiante (
    id_estudiante INT NOT NULL AUTO_INCREMENT,
    clave INT NOT NULL,
    nombres VARCHAR(45) NOT NULL,
    apellidos VARCHAR(45) NULL,
    id_grado INT NOT NULL,
    PRIMARY KEY (id_estudiante),
    FOREIGN KEY Estudiante(id_grado) REFERENCES Grado(id_grado)
);

-- -----------------------------------------------------
-- Table Catedratico
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Catedratico (
    id_catedratico INT NOT NULL AUTO_INCREMENT,
    nombres VARCHAR(45) NOT NULL,
    apellidos VARCHAR(45) NOT NULL,
    usuario VARCHAR(45) NOT NULL,
    password VARCHAR(45) NOT NULL,
    PRIMARY KEY (id_catedratico))
;

-- -----------------------------------------------------
-- Table Curso
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Curso (
    id_curso INT NOT NULL AUTO_INCREMENT,
    nombre VARCHAR(45) NULL,
    PRIMARY KEY (id_curso))
;


-- -----------------------------------------------------
-- Table Nota
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Nota (
    id_nota INT NOT NULL AUTO_INCREMENT,
    parcial INT NOT NULL,
    examen INT NOT NULL,
    progrentis INT NOT NULL,
    taller INT NOT NULL,
    asistencia INT NOT NULL,
    PRIMARY KEY (id_nota))
;

-- -----------------------------------------------------
-- Table Asignacion
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Asignacion (
    id_asignacion INT NOT NULL AUTO_INCREMENT,
    id_catedratico INT NOT NULL,
    id_estudiante INT NOT NULL,
    id_curso INT NOT NULL,
    id_nota INT NOT NULL,
    PRIMARY KEY (id_asignacion),
    FOREIGN KEY (id_catedratico) REFERENCES Catedratico(id_catedratico),
    FOREIGN KEY (id_estudiante) REFERENCES Estudiante(id_estudiante),
    FOREIGN KEY (id_curso) REFERENCES Curso(id_curso),
    FOREIGN KEY (id_nota) REFERENCES Nota(id_nota)
);

