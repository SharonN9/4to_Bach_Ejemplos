create database repaso;
use repaso;

-- crear una tabla que contenga las columnas: 
-- identificador de farmacia (llave primaria)
-- nombre de la farmacia 
-- direccion de la farmacia 
-- telefono
-- empleados

create table Farmacia (
	id_farmacia integer auto_increment primary key,
    nombre varchar(20),
    direccion varchar(50),
    telefono integer,
    empleados integer
);

insert into Farmacia(nombre, direccion, telefono, empleados) 
values ('Farmacia 1','Direccion 1',4321,10);

insert into Farmacia(nombre, direccion, telefono, empleados) 
values ('Farmacia 2','Direccion 2',1234,20);

insert into Farmacia(nombre, direccion, telefono, empleados) 
values ('Farmacia 3','Direccion 3',1423,30);

select * from Farmacia;



