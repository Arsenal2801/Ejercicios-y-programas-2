Algoritmo Crear_Serie
	Definir n, i Como Entero 																	//Declaraci�n de variables
	n=2 																						//Inicializaci�n de variables
	Escribir 'Ingrese el ultimo valor de la serie(que sea parte de la serie 2,7,10,15,...):' 	//Solicitud de datos
	Leer i 																						//Lectura de datos
	Mientras n<>i Hacer 																		//Inicio del ciclo
		Escribir n 																				//Impresi�n de datos
		Si (n%2)==0 Entonces 																	//Inicio de la condici�n
			n = n+5 																			//Cambio de valor de la variable
		SiNo 																					//Inicio de la condici�n
			n = n+3 																			//Cambio de valor de la variable
		Fin Si 																					//Fin de la condici�n
	FinMientras 																				//Fin del ciclo
	Escribir ' ' 																				//Impresi�n de datos
FinAlgoritmo
