#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Función que calcula la suma de los cuadrados de los números en un bucle do-while
int main()
{
    int i = 1;
    int suma = 0;
    int n = 0;
    printf("Introduzca un numero entero positivo: ");
    scanf("%d", &n);
    do
    {
        suma += pow(i, 2);
        i++;
        printf("La suma de los cuadrados es: %d \r ", suma);
    } while (i <= n);
    return 0;
}
