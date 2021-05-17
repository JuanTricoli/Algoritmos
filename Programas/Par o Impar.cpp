#include<stdio.h>

int numero, resto;

main(){
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	
	resto = numero % 2;
	
	if(resto == 0){
		printf("Su numero es par.");
	} else 
	{
		printf("Su numero es impar.");
	}
	
}
