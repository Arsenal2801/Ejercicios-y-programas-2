Algoritmo Crear_Serie
	Definir n, i Como Entero 																	//Declaración de variables
	n=2 																						//Inicialización de variables
	Escribir 'Ingrese el ultimo valor de la serie(que sea parte de la serie 2,7,10,15,...):' 	//Solicitud de datos
	Leer i 																						//Lectura de datos
	Mientras n<>i Hacer 																		//Inicio del ciclo
		Escribir n 																				//Impresión de datos
		Si (n%2)==0 Entonces 																	//Inicio de la condición
			n = n+5 																			//Cambio de valor de la variable
		SiNo 																					//Inicio de la condición
			n = n+3 																			//Cambio de valor de la variable
		Fin Si 																					//Fin de la condición
	FinMientras 																				//Fin del ciclo
	Escribir ' ' 																				//Impresión de datos
FinAlgoritmo
