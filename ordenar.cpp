/*------------------------------------------------
  |	Universidad Politecnica de Tulancingo        |
  |	Ingenieria: Electronica y Telecomunicaciones |
  |	Logica de Proframacion                       |
  |	David Islas Alcantara                        |
  |	ordenar los valores de mayor a menor         |
  ------------------------------------------------
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

const int n = 10;

int main(){
	int a[n], indice, limite, pivote;
	//captura una lista de ene valores enteros
	indice = 0;
	while (indice < n) {
		printf("captura a[%d]: ", indice);
		scanf_s("%d", &a[indice]);
		indice = indice + 1;
	}
	printf("\n El arreglo original es: ");
	indice = 0;
	while (indice < n) {
		if (indice > 0) printf(",");
		printf("%d", a[indice]);
		indice = indice + 1;
	}
	printf("\n");
	//Ahora si vamos a ordenar la lista
	indice = 0;
	limite = n - 1;
	while (limite > 0) {
		while (indice < limite) {
			if (a[indice] < a[indice + 1]) {
				pivote = a[indice + 1];
				a[indice + 1] = a[indice];
				a[indice] = pivote;
			}
			indice = indice + 1;
		}
		limite = limite - 1;
		indice = 0;
	}
	printf("\nEl arreglo ordenado es: ");
	indice = 0;
	while (indice < n) {
		if (indice > 0)printf(",");
		printf("%d", a[indice]);
		indice = indice + 1;
	}
	printf("\n");
}


