USE vm_data;

-- CREAR GRADO --

DELIMITER $$
	CREATE PROCEDURE crearGrado(
		IN nombre VARCHAR(50)
	)
	BEGIN
		DECLARE existe INT;
		SET existe=(SELECT g.id FROM Grado g WHERE g.nombre = nombre);
		IF existe = 0 THEN
			INSERT INTO Grado (nombre) VALUES (nombre);
			SET existe = (SELECT LAST_INSERT_ID());
		ELSE
			SET existe = -1;
		END IF;
		SELECT existe;

	END; $$
DELIMITER ;


DELIMITER $$
	CREATE PROCEDURE getGrados()
	BEGIN
		
		SELECT nombre FROM Grado;
	END; $$
DELIMITER ;

SELECT * FROM Grado;