#include<stdio.h>
#define pi 3.14

float radio, sup;

main(){
	printf("Ingrese el radio del circulo: ");
	scanf("%f", &radio);
	
	sup = pi * (radio * radio);
	
	printf("La superficie del circulo es: %f", sup);
}
