#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{

  int opc;      // Declarar variable como entero
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
  scanf("%d", &opc); // Se define la variable opcion
  printf("\n");      // Salto de linea
  // Solicitar al usuario ingresar un valor para Y
  printf("Determine un valor para Y:\t");
  scanf("%f", &ye); // Se define la variable ye

  // Se divide por casos
  switch (opc)
  {
  // Caso cuando se seleccione la opcion 0
  case 0:
    op = pow(ye, 3);                                            // Operacion para opcion 0 y se define variable op
    printf("==========================================\n");     // Presentacion
    printf("El resultado de la operacion Y^3 es: %.2f \n", op); // Muestra el resultado de la operacion
    printf("==========================================\n");     // Presentacion
    break;
  // Caso cuando se seleccione la opcion 1
  case 1:
    op = (pow(ye, 3) - 14) / (pow(ye, 3));                                     // Operacion para opcion 1 y se define variable op
    printf("==========================================================\n");    // Presentacion
    printf("El resultado de la operacion (Y^3 - 14) / (Y^3) es: %.2f \n", op); // Muestra el resultado de la operacion
    printf("==========================================================\n");    // Presentacion
    break;
  // Caso cuando se seleccione la opcion 2
  case 2:
    op = pow(ye, 3) + 5;                                              // Operacion para opcion 1 y se define variable op
    printf("===================================================\n");  // Presentacion
    printf("El resultado de la operacion (Y^3) + 5 es: %.2f \n", op); // Muestra el resultado de la operacion
    printf("===================================================\n");  // Presentacion
    break;
  // Caso cuando se seleccione la opcion 3
  case 3:
    op = sqrt(ye);                                                             // Operacion para opcion 3 y se define la variable op
    printf("=========================================================\n");     // Presentacion
    printf("El resultado de la operacion Raiz cuadrada de Y es: %.2f \n", op); // Muestra el resultado de la operacion
    printf("=========================================================\n");     // Presentacion
    break;
  // Caso cuando no se seleccione ninguna opcion disponible
  default:
    printf("===========================================\n"); // Presentacion
    printf("Favor de ingresar una opcion disponible \n");    // Muestra el resultado de la operacion
    printf("===========================================\n"); // Presentacion
    break;
  }
  return 0;
}
