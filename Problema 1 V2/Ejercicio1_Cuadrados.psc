Algoritmo nombre
	Definir NUM Como Entero //Declarar variable
	Definir SUC, CUA Como Real //Declarar variable
	SUC=0; //Definir SUC con un valor inicial de 0
	
	//Solicitar al usuario ingrese un valor 
	Escribir ' Ingrese un numero entero (0 para terminar):'
	Leer NUM //Definir la variable NUM
	
	// Estructura repititiva do-while 
	Hacer // Hacer siguientes lineas de instrucciones (12-17)
		CUA = NUM^2 // Se eleva al cuadrado NUM y se define la variable CUA
		Escribir NUM ' al cuadrado es ' CUA // Muestra el valor del cuadrado
		SUC = SUC + CUA // Suma el valor del cuadrado y se define la variable SUC
		Escribir ' Ingrese un numero entero (0 para terminar):' // Solicita al usuario ingresar otro valor
		Leer NUM // Define el valor de la variable NUM
	Hasta Que  (NUM==0) // Mientras NUM sea igual a 0 realizar las instrucciones anteriores en do (11-17)
	Escribir ' La suma de los cuadrados es ', SUC // Muestra la suma de todos los cuadrados de los numeros ingresados
FinAlgoritmo