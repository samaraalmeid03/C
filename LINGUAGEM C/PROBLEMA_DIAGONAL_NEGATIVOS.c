#include <stdio.h> 

int main () {	
	int n, i, j, quantNegativos;
	
	printf("Qual a ordem da matriz? ");
	scanf("%d", &n);
	
	int mat[n][n];
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("Elemento [%d, %d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("DIAGONAL PRINCIPAL:\n");
	for (i = 0; i < n; i++) {
		printf("%d ", mat[i][i]);
	}
	
	quantNegativos = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (mat[i][j] < 0) {
				quantNegativos = quantNegativos + 1;
			}
		}
	}
	printf("\nQUANTIDADE DE NEGATIVOS = %d", quantNegativos);
	
	return 0;
}
