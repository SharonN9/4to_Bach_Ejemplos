USE db_Andrea;

-- SELECCIONAMOS TODOS LOS PAISES
SELECT * FROM pais;

-- SELECCIONAMOS TODOS LOS DEPARTAMENTOS
SELECT * FROM departamento;

-- SELECCIONAMOS TODOS LOS MUNICIPIOS
SELECT * FROM municipio;

-- SELECCIONAMOS EL DEPARTAMENTO DE CHIMALTENANGO
SELECT * FROM departamento WHERE nombre='Chimaltenango';

-- SELECCIONAMOS LOS MUNICIPIOS DE CHIMALTENANGO
SELECT * FROM municipio WHERE id_departamento = 3;

-- SELECCIONAMOS LOS MUNICIPIOS CON SUS DEPARTAMENTOS
-- RELACIONAR 2 TABLAS CON LLAME PRIMARIA - LLAVE FORANEA
SELECT * 
FROM 
	municipio m, departamento d  
WHERE 
	m.id_departamento = d.id_departamento;

-- SELECCIONAMOS EL PAIS CON SUS DEPARTAMENTOS Y SUS MUNICIPIOS
-- CON LLAVE PRIMARA - LLAVE FORANEA
SELECT *
FROM
	pais p,
    departamento d,
    municipio m
WHERE
	p.id_pais = d.id_pais AND
    d.id_departamento = m.id_departamento
;

-- SELECCIONAMOS SOLO LAS COLUMAS QUE NECESITAMOS
SELECT 
	p.nombre,
    d.nombre,
    m.nombre
FROM
	pais p,
    departamento d,
    municipio m
WHERE
	p.id_pais = d.id_pais AND
    d.id_departamento = m.id_departamento
;

-- SELECCIONAMOS SOLO LAS COLUMAS QUE NECESITAMOS CON
-- NOMBRES QUE NOSOTROS LE DEMOS
USE db_Andrea;
SELECT 
	p.nombre AS 'Pais',
    d.nombre AS 'Departamento',
    m.nombre AS 'Municipio'
FROM
	pais p,
    departamento d,
    municipio m
WHERE
	p.id_pais = d.id_pais AND
    d.id_departamento = m.id_departamento
;




