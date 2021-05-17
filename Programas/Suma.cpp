#include<stdio.h>
#
float num_uno, num_dos, suma;

main(){
	printf("Ingrese el primer numero: ");
	scanf("%f", num_uno);
	printf("Ingrese el segundo numero: ");
	scanf("%f", num_dos);
	
	suma = num_uno + num_dos;
	
	printf("La suma es: %f", suma);
}
