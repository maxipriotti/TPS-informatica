/* 
TP3 informatica 
Calculadora de indicede masa corporal
Maximo Priotti
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float peso;
	float altura;
	float imc;
	
	printf ("ingrese su altura en metros ");
	scanf ("%f", &altura);
	
	printf ("ingrese su peso en kg ");
	scanf ("%f", &peso);  
	
	imc = (peso / (altura * altura));
	
	printf("Su índice de masa corporal es: %.2f\n", imc);
	printf("Indice       | Condicion\n");
	printf("-----------------------------\n");
	printf("<18.5        | Bajo peso\n");
	printf("18.5 a 24.9  | Normal\n");
	printf("25.0 a 29.9  | Sobrepeso\n");
	printf(">=30         | Obesidad\n");
	
	
/*	if (imc < 18.5){
		printf ("Bajo peso");
	}
	
	if (imc > 18.5 && imc < 24.9 ){
		printf ("Normal");
	}
	
	if (imc > 25 && imc < 29.9){
		printf ("Sobrepeso");
	}
	
	if (imc > 30){
		printf ("Obesidad");
	}
*/
return 0;
}

