#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int n, na; // n = numero limite para generar  na, na = numero aleatorio

    printf("Ingrese el limite del cual se le entregara un numero aleatorio o 0 para terminar el proceso \t"); // Pide el numero limite
    scanf("%d", &n); // Guarda el numero limite

    while (n>0) // Mientras el numero limite sea mayor a 0
    {
        srand(time(NULL)); // Inicializa el generador de numeros aleatorios
        na = rand() % n; // Genera un numero aleatorio entre 0 y el numero limite
        printf("El numero generado aleatoriamente es %d \t", na); // Muestra el numero aleatorio
        printf("\n Ingrese el limite del cual se le entregara un numero aleatorio o 0 para terminar el proceso \t"); // Pide el numero limite
        scanf("%d", &n); // Guarda el numero limite
    }
    return 0;
}
