Algoritmo nombre
	Definir opcio Como Entero // Declarar variable como entero
	Definir ye, op Como Real // Declarar variable como real
	// Mostrar menu de opciones para el usuario
	Escribir '========================'
	Escribir '0- Y al cubo Y^3'
	Escribir '1- Y^3 - 14 / Y^3'
	Escribir '2- Y^3 + 5'
	Escribir '3- Raiz cuadrada de Y'
	Escribir '========================'
	// Solicitar al usuario que seleccione un opcion
	Escribir 'Seleccione una operacion a realizar: '
	Leer opcio // Se define la variable opcion
	Escribir '' // Salto de linea
	// Solicitar al usuario ingresar un valor para Y
	Escribir 'Determine un valor para Y: '
	Leer ye // Se define la variable ye
	// Condicion
	// En caso de que seleccione la opcion 0
	Si  (opcio == 0)
		op = ye ^ 3 // Operacion para opcion 0 y se define variable op
		Escribir '==========================================' // Presentacion
		Escribir 'El resultado de la operacion Y^3 es:  ', op // Muestra el resultado de la operacion
		Escribir '==========================================' // Presentacion
		// Si no se selecciona 0 entonces
	SiNo
		// Condicion
		// En caso de que seleccione la opcion 1
		Si  (opcio == 1)
			op = ((ye ^ 3) - 14) / (ye ^ 3) // Operacion para opcion 1 y se define variable op
			Escribir '==========================================================' // Presentacion
			Escribir 'El resultado de la operacion Y^3 - 14 / Y^3 es: ', op // Muestra el resultado de la operacion
			Escribir '==========================================================' // Presentacion
			// Si no se selecciona 1 entonces
		SiNo
			// Condicion
			// En caso de que seleccione la opcion 2
			Si  (opcio == 2)
				op = ye ^ 3 + 5 // Operacion para opcion 1 y se define variable op
				Escribir '===================================================' // Presentacion
				Escribir 'El resultado de la operacion Y^3 + 5 es: ', op // Muestra el resultado de la operacion
				Escribir '===================================================' // Presentacion
				// Si no se selecciona 2 entonces
			SiNo
				// Condicion
				// En caso de que seleccione la opcion 3
				Si  (opcio == 3)
					op <- rc(ye) // Operacion para opcion 3 y se define la variable op
					Escribir '=========================================================' // Presentacion
					Escribir 'El resultado de la operacion Raiz cuadrada de Y es: ', op // Muestra el resultado de la operacion
					Escribir '=========================================================' // Presentacion
					// Si no se selecciona  ninguna de las opciones entonces
				SiNo
					// Validacion
					// En caso de que no se selecciones ninguna opcion disponible
					Si  (opcio < 0 | opcio > 3)
						Escribir '===========================================' // Presentacion
						Escribir 'Favor de ingresar una opcion disponible ' // Muestra el resultado de la operacion
						Escribir '===========================================' // Presentacion
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo