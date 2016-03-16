#include <stdio.h>

void imprimir(int arreglo[], int tamaño){
	for (int i=0; i<tamaño; i++){
		printf("%d", arreglo[i]);
	}
}

void qs(int arreglo[], int inicio, int tamaño){
	int cero= inicio, fin = tamaño;
	int ref, aux, dd;
	dd= (cero + fin)/2;
	ref = arreglo[dd];
	cero = inicio;
	fin = tamaño;
	do{
	while(cero <tamaño && arreglo [cero] <ref){
	cero++;
	}
	while(fin> inicio && ref<arreglo[fin]){
	fin--;
	}
	if (cero <= fin){
	aux = arreglo[fin];
	arreglo [fin]= arreglo[cero];
	arreglo[cero] = aux;
	fin--;
	cero++;
	}
	}while (cero<= fin);
	if (inicio<fin){
	qs (arreglo, inicio, fin);
	}
	if (tamaño>cero){
	qs (arreglo, cero, tamaño);
	}
}

int main (){
	int tamaño;
	printf ("Cuántos valores tiene tu arreglo: \n ");
	scanf ("%d", &tamaño);
	int arreglo[tamaño];
	printf ("Dame los valores: \n ");
	for (int i=0; i<tamaño; i++){
	int valor;
	scanf ("%d", &valor);
	arreglo[i]= valor;
	}
	qs (arreglo, 0, tamaño-1);
	printf("El orden de tus valores es: \n ");
	imprimir (arreglo, tamaño);
	printf("\n");
	return 0;
}
