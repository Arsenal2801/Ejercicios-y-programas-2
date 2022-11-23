Algoritmo Serie_Ulam
	Definir n Como Entero // Definir n como entero
	Escribir 'Ingresa un numero para crear la serie de ulam' Sin Saltar // Imprime en pantalla
	Leer n // Lee el numero ingresado
	Mientras (n>1) Hacer // Mientras n sea diferente de 1
		Escribir n,' ' Sin Saltar // Imprime en pantalla
		Si (n MOD 2)==0 Entonces // Si n modulo 2 es igual a 0
			n <- n/2 // n es igual a n entre 2
		SiNo // Si no
			n <- 3*n+1 // n es igual a 3*n+1
		FinSi
	FinMientras
	Escribir '1'
FinAlgoritmo
