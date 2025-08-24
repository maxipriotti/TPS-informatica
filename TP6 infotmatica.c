#include <stdio.h>
#include <math.h>

float calcularAreaRectangulo (int x, int y);
float calcularPerimetroRectangulo (int x, int y);
float calcularDiagonalRectangulo (int x, int y);
float calcularAreaCirculo (int x); 
float calcularPerimetroCirculo (int x);
void imprimirResultados (float x, float y, int z);

int main(int argc, char *argv[]) {
	
	int Altura = 0;
	int Longitud = 0;
	int Radio = 0;
	int caso = 0; 
	printf ("Ingrese la figura que desea calcular (1: rectángulo, 2: círculo):");
	do{
		scanf ("%d", &caso); 
	}while ( caso !=1 && caso !=2);
	switch(caso){  
	case 1:
		printf ("Opcion de rectangulo seleccionada\n");
		printf ("Ingrese la longitud del rectángulo:");
		scanf ("%d", &Longitud);
		printf ("Ingrese la Altura del rectángulo:");
		scanf ("%d", &Altura);
		calcularAreaRectangulo (Longitud, Altura);
		calcularPerimetroRectangulo (Longitud, Altura );
		imprimirResultados (calcularAreaRectangulo (Longitud, Altura),calcularPerimetroRectangulo (Longitud, Altura ), caso);
		printf ("la diagonal del rectangulo es: %.2f\n", calcularDiagonalRectangulo (Longitud, Altura));
		break;
	case 2:
		printf ("Opcion de Circulo seleccionada\n");
		printf ("Ingrese el radio del circulo:");
		scanf ("%d", &Radio);
		calcularAreaCirculo (Radio);
		calcularPerimetroCirculo (Radio);
		imprimirResultados (calcularAreaCirculo (Radio),calcularPerimetroCirculo (Radio), caso);
		break;
				
	}
		
	return 0;
}

float calcularAreaRectangulo (int x, int y){
	
	float Area = x*y;
	
	return Area;
}

float calcularPerimetroRectangulo (int x, int y){
	
	float perimetro = 2*x + 2*y;
	
	return perimetro;
}

float calcularDiagonalRectangulo (int x, int y){
		
	float Diagonal = sqrt(x*x + y*y);
		
	return Diagonal;
		
}
float calcularAreaCirculo (int x){
	
	float Area = 3.14*x*x;
		
	return Area;
}
	float calcularPerimetroCirculo (int x){
		
		float Perimetro = 3.14*2*x;
		
		return Perimetro;
	}
	
void imprimirResultados (float x, float y, int z){
	
	if (z == 1){
	printf ("El área del rectángulo es: %.2f\n",  x); 
	printf ("El perímetro del rectángulo es: %.2f\n", y); 
	}else{
	printf ("El área del circulo es: %.2f\n",  x); 
	printf ("El perímetro del circulo es: %.2f\n", y); 	
	}
	
return;
}
