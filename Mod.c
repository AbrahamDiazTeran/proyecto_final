#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2, modulo;
  
  printf("Ingrese el primer número: ");
  scanf("%d", &num1);
  
  printf("Ingrese el segundo número: ");
  scanf("%d", &num2);
  
  modulo = num1 % num2;
  printf("El módulo de %d y %d es: %d", num1, num2, modulo);
  
  return 0;
}