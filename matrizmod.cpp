/*
	Universidad Politecnica de Tulancingo
	Ingenieria Electronica y telecomunicaciones
	Logica de Programacion
	David Islas Alcantara
	hacer una matriz en dode pregunta si la proporciona
	manul o autoatico el llenado de una matriz 
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

const int n = 4;

void captura(int matriz[n][n]){
	int ren = 0,  col;
	while (ren < n) {
		col = 0;
		while (col < n) {
			printf("Cptura el elemento [%d,%d]", ren, col);
			scanf_s("%d", &matriz[ren][col]);
			col++;
		}
		ren++, col = 0;
	}
}
void llenado(int matriz[n][n]) {
	int ren = 0, col;
	int seq = 1;
	while (ren < n) {
		col = 0;
		while (col < n) {
			matriz[ren][col] = seq;
			seq++;
			col++;
		}
		ren++, col = 0;
	}
}
void muestra(int matriz[n][n]) {
	int ren = 0,col;
	while (ren < n) {
		col = 0;
		while (col < n) {
			printf("%4d", matriz[ren][col]);
			col++;
		}
		printf("\n");
		ren++;
	}
}


int main()
{
	int cuadro[n][n];
	char rspt;
	printf("desa capturar (S/N): ");
	rspt = getchar();
	if(rspt=='S' || rspt=='s'){
		captura(cuadro);
	}
	else {
		llenado(cuadro);
	}
	muestra(cuadro);
}

