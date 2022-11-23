// Importacion de librerias
#include <stdio.h>

// Declaracion de la funcion
int main()
{
	// Declaracion de variables
	int n;
	printf("SERIE ULAM - INGRESE N�MERO : "); // Impresion de mensaje
	scanf("%i", &n);						  // Lectura de variable
	while ((n != 1))
	{					  // Ciclo while
		printf("%i ", n); // Impresion de variable
		if ((n % 2) == 0)
		{			   // Condicion if si el residuo de la division es 0
			n = n / 2; // Operacion
		}
		else
		{				   // Condicion else
			n = 3 * n + 1; // Operacion
		}
	}
	printf("1 \n");
	return 0;
}
