// Realizar un menú donde se soliciten 4 datos diferentes de una persona y mostrar estos datos.
// El algoritmo se debe repetir las veces que el usuario decida.
//

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    // Variables
    char respuesta;
    char nombre[20];
    char apellido[20];
    char edad = 0;
    char sexo;
    // Ciclo do-while
    do
    {
        // Ingreso de datos
        printf("Introduzca su nombre: ");
        scanf("%s", &nombre);
        printf("Introduzca su apellido: ");
        scanf("%s", &apellido);
        printf("Introduzca su edad: ");
        scanf("%s", &edad);
        printf("Introduzca su sexo: ");
        scanf("%s", &sexo);
        // Impresion de datos
        printf("---------------------------------- \r \n");
        printf(" Nombre: %s \r \n", nombre);
        printf(" Apellido: %s \r \n", apellido);
        printf(" Edad: %s \r \n", edad);
        printf(" Sexo: %c \r \n", sexo);
        printf("---------------------------------- \r \n");
        // Pregunta si desea continuar
        printf("Desea continuar? (s/n): ");
        scanf("%s", &respuesta);
    } while (respuesta == 's' || respuesta == 'S');
    return 0;
}
