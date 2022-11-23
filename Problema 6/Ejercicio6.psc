Algoritmo nombre
	Definir num1, num2, num3 Como Real // Declarar variables como reales
	// Solicitar al usuario ingresar los 3 numeros
	Escribir 'Ingrese el valor del primer numero ' // Ingresa primer valor
	Leer num1 // Se define la variable num1
	Escribir 'Ingrese el valor del segundo numero ' // Ingresa segundo valor
	Leer num2 // Se define la variable num2
	Escribir 'Ingrese el valor del tercer numero ' // Ingresa tercer valor
	Leer num3 // Se define la variable num3
	// Condicion
	// En caso de que num1 sea el mayor
	Si  (num1 >= num2  y  num1 >= num3)
		Escribir 'El numero mayor es: ', num1 // Muestra el numero mayor con num1
	SiNo
		// Condicion
		// En caso de que num2 sea el mayor
		Si  (num2 >= num1  y  num2 >= num3)
			Escribir 'El numero mayor es: ', num2 // Muestra el mayor con num2
		SiNo
			// Condicion
			// En caso de que num3 sea el mayor
			Si  (num3 >= num1  y  num3 >= num2)
				Escribir 'El numero mayor es: ', num3 // Muestra el mayor con num3
			FinSi
		FinSi
	FinSi
FinAlgoritmo