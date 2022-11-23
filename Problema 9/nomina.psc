Algoritmo nomina
	Definir i Como Entero
	i=0
	Definir sal, prom, nom Como Real
	Escribir "Ingrese el salario del profesor: "
	Leer sal
		
		Repetir
			nom = nom+sal
			i= i+1
			Escribir "Ingrese el salario del profesor, 0 para tereminar: "
			Leer sal
		Hasta Que sal=0
	prom = nom/i
	Escribir 'Nomina:', nom, '   Promedio de los salarios:', prom 
FinAlgoritmo
