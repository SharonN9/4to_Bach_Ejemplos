-- -----------------------------------------------------
-- Schema Empresa
-- -----------------------------------------------------
CREATE DATABASE IF NOT EXISTS EMPRESA DEFAULT CHARACTER SET utf8 ;
USE EMPRESA ;

-- -----------------------------------------------------
-- Table Vehiculo
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Vehiculo (
  `id_vehiculo` INT NOT NULL AUTO_INCREMENT,
  `nombre` VARCHAR(45) NOT NULL,
  `modelo` VARCHAR(45) NOT NULL,
  `color` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`id_vehiculo`)
);

-- -----------------------------------------------------
-- Table Empleado
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Empleado (
  `id_empleado` INT NOT NULL AUTO_INCREMENT,
  `nombre` VARCHAR(45) NOT NULL DEFAULT 'Nombre Empleado',
  `apellido` VARCHAR(45) NOT NULL DEFAULT 'ApellidoEmpleado',
  `id_vehiculo` INT NOT NULL,
  PRIMARY KEY (`id_empleado`),
  INDEX `fk_Empleado_Vehiculo_idx` (`id_vehiculo` ASC) VISIBLE,
  CONSTRAINT `fk_Empleado_Vehiculo`
    FOREIGN KEY (`id_vehiculo`)
    REFERENCES `Vehiculo` (`id_vehiculo`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
;

-- -----------------------------------------------------
-- Table `mydb`.`Cliente`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Cliente (
  `id_cliente` INT NOT NULL AUTO_INCREMENT,
  `nombre` VARCHAR(45) NOT NULL,
  `apellido` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`id_cliente`)
);


-- -----------------------------------------------------
-- Table `mydb`.`Venta`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Venta (
  `id_venta` INT NOT NULL AUTO_INCREMENT,
  `producto` VARCHAR(45) NOT NULL,
  `cantidad` INT NOT NULL,
  `precio` FLOAT NOT NULL,
  `id_cliente` INT NOT NULL,
  `id_empleado` INT NOT NULL,
  PRIMARY KEY (`id_venta`),
  INDEX `fk_Venta_Cliente1_idx` (`id_cliente` ASC) VISIBLE,
  INDEX `fk_Venta_Empleado1_idx` (`id_empleado` ASC) VISIBLE,
  CONSTRAINT `fk_Venta_Cliente1`
    FOREIGN KEY (`id_cliente`)
    REFERENCES `Cliente` (`id_cliente`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_Venta_Empleado1`
    FOREIGN KEY (`id_empleado`)
    REFERENCES `Empleado` (`id_empleado`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION
);
