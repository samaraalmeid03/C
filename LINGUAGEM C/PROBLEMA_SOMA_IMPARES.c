#include <stdio.h>

int main () {
	
	int x, y, soma, troca;
	
	printf("Digite dois numeros:\n");
	scanf("%d", &x);
	scanf("%d", &y);
	
	if (x > y) {
		troca = x;
		x = y;
		y = troca;		
	}
	
	soma = 0;
	for (int i = x+1; i < y; i++) {
		if (i % 2 != 0) {		
			soma = soma + i;	
		}
	}
	
	printf("SOMA DOS IMPARES = %d", soma);
	
	return 0;
	
}
