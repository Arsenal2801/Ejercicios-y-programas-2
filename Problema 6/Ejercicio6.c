#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

  float num1, num2, num3; // Declarar variables como reales

  // Solicitar al usuario ingresar los 3 numeros
  printf("Ingrese el valor del primer numero \t");  // Ingresa primer valor
  scanf("%f", &num1);                               // Se define la variable num1
  printf("Ingrese el valor del segundo numero \t"); // Ingresa segundo valor
  scanf("%f", &num2);                               // Se define la variable num2
  printf("Ingrese el valor del tercer numero \t");  // Ingresa tercer valor
  scanf("%f", &num3);                               // Se define la variable num3

  // Condicion
  // En caso de que num1 sea el mayor
  if (num1 >= num2 && num1 >= num3)
  {
    printf("El numero mayor es: %.2f \t", num1); // Muestra el numero mayor con num1
  }
  else
  {
    // Condicion
    // En caso de que num2 sea el mayor
    if (num2 >= num1 && num2 >= num3)
    {
      printf("El numero mayor es: %.2f \t", num2); // Muestra el mayor con num2
    }
    else
    {
      // Condicion
      // En caso de que num3 sea el mayor
      if (num3 >= num1 && num3 >= num2)
      {
        printf("El numero mayor es: %.2f \t", num3); // Muestra el mayor con num3
      }
    }
    return 0;
  }
}
