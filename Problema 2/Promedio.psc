Algoritmo nombre
	Definir prom Como Real // Declarar variable
	
	// Solicitar al usuario ingresar un valor
	Escribir 'Ingrese la calificacion del alumno '
	Leer prom // Se define la variable
	Escribir ''// Salto de linea
	
	// Condicion
	// En caso de que sea un promedio satisfactorio (mayor o igual a 6 y menor o igual a 10)
	Si  (prom >= 6  y  prom <= 10)
		Escribir '========== '// Presentacion
		Escribir ' Aprobado ' // Muestra mensaje de Aprobado
		Escribir '========== '// Presentacion
	FinSi
	// Validacion
	// No hay calificaciones mayores a 10
	Si  (prom < 0 o prom > 10)
		Escribir '================================'// Presentacion
		Escribir 'Ingrese una calificacion valida '// Muestra mensaje de error
		Escribir '================================'// Presentacion
	FinSi
FinAlgoritmo