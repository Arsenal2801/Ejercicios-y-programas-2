#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

  int opcion;   // Declarar variable como entero
  float ye, op; // Declarar variable como real

  // Mostrar menu de opciones para el usuario
  printf("========================\n");
  printf("0- Y al cubo (Y^3)\n");
  printf("1- (Y^3 - 14) / (Y^3)\n");
  printf("2- (Y^3) + 5\n");
  printf("3- Raiz cuadrada de Y\n");
  printf("========================\n");
  // Solicitar al usuario que seleccione un opcion
  printf("Seleccione una operacion a realizar:\t");
  scanf("%d", &opcion); // Se define la variable opcion
  printf("\n");         // Salto de linea
  // Solicitar al usuario ingresar un valor para Y
  printf("Determine un valor para Y:\t");
  scanf("%f", &ye); // Se define la variable ye

  // Condicion
  // En caso de que seleccione la opcion 0
  if (opcion == 0)
  {
    op = pow(ye, 3);                                            // Operacion para opcion 0 y se define variable op
    printf("==========================================\n");     // Presentacion
    printf("El resultado de la operacion Y^3 es: %.2f \n", op); // Muestra el resultado de la operacion
    printf("==========================================\n");     // Presentacion
  }
  // Si no se selecciona 0 entonces
  else
  {
    // Condicion
    // En caso de que seleccione la opcion 1
    if (opcion == 1)
    {
      op = (pow(ye, 3) - 14) / (pow(ye, 3));                                     // Operacion para opcion 1 y se define variable op
      printf("==========================================================\n");    // Presentacion
      printf("El resultado de la operacion (Y^3 - 14) / (Y^3) es: %.2f \n", op); // Muestra el resultado de la operacion
      printf("==========================================================\n");    // Presentacion
    }
    // Si no se selecciona 1 entonces
    else
    {
      // Condicion
      // En caso de que seleccione la opcion 2
      if (opcion == 2)
      {
        op = pow(ye, 3) + 5;                                              // Operacion para opcion 1 y se define variable op
        printf("===================================================\n");  // Presentacion
        printf("El resultado de la operacion (Y^3) + 5 es: %.2f \n", op); // Muestra el resultado de la operacion
        printf("===================================================\n");  // Presentacion
      }
      // Si no se selecciona 2 entonces
      else
      {
        // Condicion
        // En caso de que seleccione la opcion 3
        if (opcion == 3)
        {
          op = sqrt(ye);                                                             // Operacion para opcion 3 y se define la variable op
          printf("=========================================================\n");     // Presentacion
          printf("El resultado de la operacion Raiz cuadrada de Y es: %.2f \n", op); // Muestra el resultado de la operacion
          printf("=========================================================\n");     // Presentacion
        }
        // Si no se selecciona  ninguna de las opciones entonces
        else
        {
          // Validacion
          // En caso de que no se selecciones ninguna opcion disponible
          if (opcion < 0 || opcion > 3)
          {
            printf("===========================================\n"); // Presentacion
            printf("Favor de ingresar una opcion disponible \n");    // Muestra el resultado de la operacion
            printf("===========================================\n"); // Presentacion
          }
        }
      }
    }
  }
  return 0;
}
