#include <stdio.h>

int main () {
	
	int idades, soma, cont;
	double media;
	
	soma = 0;
	cont = 0;
	
	printf("Digite as idades:\n");
	scanf("%d", &idades);
	
	while (idades >= 0) {
		soma = soma + idades;
		cont = cont + 1;
		
		scanf("%d", &idades);
	}
		
	if (cont == 0) {
		printf("IMPOSSIVEL CALCULAR!\n");
	}
	else {
		media = soma / (double) cont;
		printf("MEDIA = %.2lf", media);
	}
	
	return 0;
			
}
