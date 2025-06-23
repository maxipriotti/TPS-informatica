#include <stdio.h>

int cant_estudiantes =0; 
float nota = 0;
float suma = 0;
float nota_max = 101.0;
float nota_min = -1.0;

int main() {
	
	do{
		printf ("ingrese la acantidad de estudiantes");
		scanf ("%d", &cant_estudiantes);
		if ( cant_estudiantes <= 0 ){
			printf ("ERROR: ingrese un numero positivo mayor a 0");
		}
	} while( cant_estudiantes <= 0);
	
	for (int i = 0; cant_estudiantes > i; i++){
		do { 
		printf ("ingrese la calificacion del estudiante %d (la nota deve ser del (0 al 100)", i+1);
		scanf ("%f", &nota);
		if (nota > 100 || nota < 0)
			printf ("ERROR: ingrese una nota entre 0 y 100 \n");
		} while(nota < 0 || nota > 100);
		
		suma += nota;
		
		if (nota < nota_max) {
			nota_max = nota;
		}
		if (nota > nota_min) {
			nota_min = nota;
		}
	}
	
	
	float promedio = suma / cant_estudiantes;
	printf("El promedio de calificaciones es: %.2f\n", promedio);
	printf("La calificación más alta es: %.2f\n", nota_max);
	printf("La calificación más baja es: %.2f\n", nota_min);
	
	
	
	return 0;
}

