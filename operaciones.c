#include <stdio.h>

int main(){
	float a, b, resultado; 
	int  opcion;
	
	printf ("Introduce un valor entero para a: ");
	scanf("%f", &a); 
	printf ("Introduce un valor entero para b: ");
	scanf("%f", &b); 
	printf("Elige una opcion:\n");
	printf("1 Sumar\n2 Restar\n3 Dividir\n4 Multiplicar\n");
	scanf("%i", &opcion);
		
		switch(opcion){
		case 1: 
		  resultado = a + b;
		break;
		case 2: 
		  resultado = a - b;
		break;
		case 3: 
		  resultado = a / b;
		break;
		case 4: 
		  resultado = a * b;
		break;
		default:
		  printf ("Escoge una opcion permitida");
		}
		printf ("%f", resultado);
	
	return 0;
}
