#include<stdio.h>

float estatura, peso, imc;

main(){
	printf("Ingrese su estatura en metros: ");
	scanf("%f", &estatura);
	
	printf("Ingrese su peso en kilogramos: ");
	scanf("%f", &peso);
	
	imc = peso / (estatura * estatura);
	
	if(imc >= 25){
		printf("Usted tiene sobrepeso.");
	} 
	else if(imc < 18.49){
		printf("Usted tiene bajo peso.");
	}
	else {
		printf("Su peso es normal");
	}
	
}
