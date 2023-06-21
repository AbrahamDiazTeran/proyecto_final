/*  Problema1
En este problema se ejecutara una algoritmo para la solución de saber el modulo de dos valores enteros*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2, temp;

  printf("Ingrese un numero entero: ");
  scanf("%d %d", &num1);

 printf("Ingrese otro numero entero: ");
  scanf("%d %d", &num2);
  
  
  // Realizar el intercambio si el primer número es menor que el segundo
  if (num1 < num2) {
    temp = num1;
    num1 = num2;
    num2 = temp;
  }

  // Aplicar el algoritmo de Euclides
  while (num2 != 0) {
    temp = num2;
    num2 = num1 % num2;
    num1 = temp;
  }

  printf("El MCD de los dos números es: %d", num1);
  
  return 0;
}

