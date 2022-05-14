USE EMPRESA;

insert into	Vehiculo(nombre, modelo, color) values ('Carro 4', '2011', 'Gris');

insert into Empleado(nombre, apellido, id_vehiculo) values ('Nombre 2', 'Apellido 2', 2);

insert into Cliente(nombre, apellido) values ('Cliente 3', 'Apellido C 3');

insert into Venta(producto, cantidad, precio, id_cliente, id_empleado) values('Carro', 2, 15000.25, 3, 2);

SELECT * FROM Vehiculo;
SELECT * FROM Empleado;
SELECT * FROM Cliente;
SELECT * FROM Venta;