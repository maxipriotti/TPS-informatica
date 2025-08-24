/* 
TP4 informatica 
Calificaciones
Maximo Priotti
*/

#include <stdio.h>

int main() {
	
	int Nota = 0;
	
	printf("Ingrese una nota del 0 al 100 \n");
	scanf("%d", &Nota);

	if (Nota >= 90 && Nota <= 100) {
		printf("Calificación A\n");
	} else if (Nota >= 80 && Nota < 90) {
		printf("Calificación B\n");
	} else if (Nota >= 70 && Nota < 80) {
		printf("Calificación C\n");
	} else if (Nota >= 60 && Nota < 70) {
		printf("Calificación D\n");
	} else if (Nota >= 0 && Nota < 60) {
		printf("Calificación: F\n");
	} else {
		printf("Calificación inválida. Debe estar entre 0 y 100.\n");
	}
	
	return 0;


}


