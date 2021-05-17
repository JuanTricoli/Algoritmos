#include<stdio.h>
#include<conio.h>

int edad;

main(){
	printf("Ingrese su edad: ");
	scanf("%d", &edad);
	
	if(edad >= 18){
		printf("Usted es mayor de edad");
	}
	else {
		printf("Usted es menor de edad");
	}
	
	getch();
}
