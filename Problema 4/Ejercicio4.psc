Algoritmo nombre
	Definir prom Como Real // Declarar variable
	// Solicitar al usuario ingresar un valor
	Escribir 'Ingrese la calificacion del alumno'
	Leer prom // Se define la variable prom
	Escribir '' // Salto de linea
	// Condicion
	// En caso de que sea un promedio satisfactorio (mayor a 6)
	Si  (prom >= 6  y  prom <= 10)
		Escribir '========== '// Presentacion
		Escribir ' Aprobado ' // Muestra mensaje de Aprobado
		Escribir '========== '// Presentacion
	SiNo
		Si  (prom >= 0  y  prom < 6)
			Escribir '=========== ' // Presentacion
			Escribir ' Reprobado '  // Muestra mensaje de Reprobado
			Escribir '=========== ' // Presentacion
		FinSi
	FinSi
	// Validacion
	// No hay calificaciones menores a 0 o mayores a 10
	Si  (prom < 0 | prom > 10)
		Escribir '================================' // Presentacion
		Escribir 'Ingrese una calificacion valida ' // Muestra mensaje de error
		Escribir '================================' // Presentacion
	FinSi
FinAlgoritmo