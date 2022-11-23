
#include <stdio.h>

int main()
{
    int n = 2, i = 0;
    printf("Ingrese el ultimo valor de la serie(que sea parte de la serie 2,7,10,15,...): "); // Impresion de mensaje
    scanf("%i", &i);                                                                          // Lectura de variable
    while (n != i)
    {                     // Ciclo while
        printf("%i ", n); // Impresion de variable
        if (n % 2 == 0)
        {              // Condicion if si el residuo de la division es 0
            n = n + 5; // Operacion
        }
        else
        {              // Condicion else
            n = n + 3; // Operacion
        }
    }
    printf("\n");
    return 0;
}
