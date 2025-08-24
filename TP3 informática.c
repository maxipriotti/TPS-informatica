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
	
	// Validar que la altura sea positiva
	do {
		printf("ingrese su altura en metros: ");
		scanf("%f", &altura);
		if (altura <= 0) {
			printf("ERROR: la altura debe ser un número positivo\n");
		}
	} while (altura <= 0);
	
	// Validar que el peso sea positivo
	do {
		printf("ingrese su peso en kg: ");
		scanf("%f", &peso);
		if (peso <= 0) {
			printf("ERROR: el peso debe ser un número positivo\n");
		}
	} while (peso <= 0);  
	
	imc = (peso / (altura * altura));
	
	if (imc < 18.5) {
		printf("Bajo peso");
	}
	
	if (imc > 18.5 && imc < 24.9) {
		printf("Normal");
	}
	
	if (imc > 25 && imc < 29.9) {
		printf("Sobrepeso");
	}
	
	if (imc > 30) {
		printf("Obesidad");
	}
	
	return 0;
}

