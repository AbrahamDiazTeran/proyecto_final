//4. Dado un arreglo de 50 números enteros aleatorios, solicitar al usuario dos valores V1 y V2,
//buscar el valor V1 en el arreglo y si se encuentra intercambiarlo por el valor V2. Todos los
//valores V1 se deben intercambiar por el valor V2.
#include<stdio.h>
#include<stdlib.h>

int main() {
	int arreglo[50];
	int i;
	int v1;
	int v2;
	printf("Ingerese valor 1\n");
	scanf("%i",&v1);
	printf("Ingrese valor 2\n");
	scanf("%i",&v2);
	for (i=0;i<=49;i+=1) {
		arreglo[i] = (0+rand()%49);
	}
	for (i=0;i<=49;i+=1) {
		printf("%i,",arreglo[i]);
	}
	printf("\n");
	printf("Se reescriben los valor dados\n");
	printf("\n");
	for (i=0;i<=49;i+=1) {
		if (arreglo[i]==v1) {
			arreglo[i] = v2;
		}
	}
	for (i=0;i<=49;i+=1) {
		printf("%i,",arreglo[i]);
	}
	return 0;
}

