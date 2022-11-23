Algoritmo nombre
	 Definir precio, importe, final Como Real // Declarar variables como reales
	// Solicitar al usuario ingresar un valor
	Escribir 'Ingrese el precio del producto importado '
	Leer precio // Se define el valor de la variable precio
	Escribir '' // Salto de linea
	Hacer  // Hacer siguientes lineas de instrucciones (7-51)
		Si  (precio > 0  y  precio < 1500)
			importe = precio * .11 // Operacion para sacar el 11% del precio ademas se define la variable importe
			final = importe + precio // Operacion para obtener el precion final del producto, se define la variable final
			Escribir '===========================================================================' // Presentacion
			Escribir ' El precio final del producto con un incremento del 11 por ciento es:  ', final // Muestra el precio final con el incremento
			Escribir '===========================================================================' // Presentacion
			Escribir 'Ingrese el precio del producto importado (0 para terminar) ' // Solicitar al usuario ingresar un valor
			Leer precio // Se define el valor de la variable precio
		FinSi
		// Condicion
		// En caso de que el precio sea mayor o igual a 1500
		Si  (precio > 1500)
			Escribir '=======================================================' // Presentacion
			Escribir ' El precio ' precio ' es aceptable y no se le incrementara' // Muestra mensaje
			Escribir '=======================================================' // Presentacion
			Escribir 'Ingrese el precio del producto importado (0 para terminar) ' // Solicitar al usuario ingresar un valor
			Leer precio // Se define el valor de la variable precio
		FinSi
		// Condicion
		// En caso de que el precio sea menor a 0
		Si  (precio < 0)
			Escribir '================================================' // Presentacion
			Escribir ' Favor de colocar bien el precio del producto' // Muestra mensaje de error
			Escribir '================================================' // Presentacion
			Escribir 'Ingrese el precio del producto importado (0 para terminar) ' // Solicitar al usuario ingresar un valor
			Leer precio // Se define el valor de la variable precio
		FinSi
	Hasta Que  (precio = 0) // Mientras precio sea diferente de 0 realizar las instrucciones anteriores en do (7-51)
FinAlgoritmo
