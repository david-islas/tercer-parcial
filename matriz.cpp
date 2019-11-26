/* 
	Universidad Politecnica de Tulancingo
	Ingenieria Electronica y telecomunicaciones
	Logica de Programacion
	David Islas Alcantara
	como hacer una matriz y llenado de la misma
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

const int n = 4;

int main()
{
	int matriz[n][n];
	int ren = 0, col = 0;
	int sec = 1;

	while (ren < n) {
		while (col < n) {
			//printf("captura el elemento [%d,%d] ", ren, col);
			//scanf_s("%d", &matriz[ren][col]);
			matriz[ren][col] = sec;
			sec++;
			col++;
		}
		ren++; col = 0;
	}
	ren = 0;
	while (ren < n) {
		col = 0;
		while (col < n) {
			printf("%4d ", matriz[ren][col]);

				col++;
		}
		printf("\n");
		ren++;
	}


}