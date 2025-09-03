//https://github.com/maxipriotti/TPS-informatica
#include <stdio.h>
#define TAM 5

int main(int argc, char *argv[]) {
	int N = 0;
	int codigos[TAM] = {0};
	float precios[TAM] = {0};
	float control = 0;
	float mayor, menor;
	int mayorC, menorC;
	printf ("Ingrese %d productos, se solicitará el código y precio:\n", TAM);
	
	for (int i = 0; i< TAM; i++){
		
		printf ("Ingrese el código de barras (1-999999999): "); 
		scanf ("%d", &codigos[i]);
		control = codigos [i]; 
		if (control > 999999999 || control < 0){ 
			printf ("Error. El código de barras debe estar entre 1 y 999999999]\n");
			i = i-1;
		}
		
		printf ("Ingrese el precio: "); 
		scanf ("%f", &precios[i]);
		control = precios [i]; 
		if (control  < 0){ 
			printf ("Error. El precio no puede ser negativo\n");
			i = i-1;
		}
		
	}
	
	printf ("%-10s %-10s\n", "Código", "Precio");
	
	for (int i = 0; i< TAM; i++){
		printf ("%-10d %-10.2f\n", codigos[i], precios[i]);
	}
	
	mayor = menor = precios[0];
	mayorC = menorC = codigos[0];
	
	for (int i = 1; i < TAM; i++) {
		if (precios[i] > mayor) {
			mayor = precios[i];
			mayorC = codigos[i];
		}
		if (precios[i] < menor) {
			menor = precios[i];
			menorC = codigos[i];
		}
	}
	
	printf("Más caro: [%d] %.2f\n", mayorC, mayor);
	printf("Más barato: [%d] %.2f\n", menorC, menor);
	
	return 0;
}

