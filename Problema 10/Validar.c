//  Validar si un numero es positivo o negativo con do-while

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numero;
    char respuesta;

    do
    {
        printf("Introduzca un numero: ");
        scanf("%d", &numero);

        switch (numero)
        {
            case 0:
                printf("El numero es cero (0). \r \n");
                break;
            default:
                if (numero > 0)
                    printf(" El numero es positivo. \r \n");
                else
                    printf(" El numero es negativo. \r \n");
        }
        printf("Desea continuar? (s/n): ");
        scanf("%s", &respuesta);

    } while (respuesta == 's');
    return 0;
}
