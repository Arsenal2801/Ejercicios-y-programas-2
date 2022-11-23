// Validar que el usuario ingrese ‘s’, ‘S’, ‘n’, ‘N’ como opción y si no seguir pidiendo que ingrese la opción válida con do-while.
//

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[])
{
    char respuesta;

    do
    {
        printf("Desea continuar? (s/n): ");
        scanf("%s", &respuesta);
        printf(" Respuesta: %c \r \n", respuesta);

    } while (respuesta == 's' || respuesta == 'S');
    return 0;
}
