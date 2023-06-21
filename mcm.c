
#include <stdio.h>

// Función para obtener el máximo común divisor (mcd)
int mcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mcd(b, a % b);
    }
}

// Función para obtener el mínimo común múltiplo (mcm)
int mcm(int a, int b) {
    return (a * b) / mcd(a, b);
}

// Función principal
int main() {
    int num1, num2;

    printf("Ingresa dos numeros enteros: ");
    scanf("%d %d", &num1, &num2);

    printf("El minimo comun multiplo de %d y %d es %d\n", num1, num2, mcm(num1, num2));

    return 0;
}