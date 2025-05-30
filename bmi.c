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
		
if (imc < 18.5){
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
return 0;
}

