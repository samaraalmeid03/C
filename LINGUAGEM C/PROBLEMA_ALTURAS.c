#include <stdio.h>

int main () {	
	int n, i, cont;
	double soma, media, porcentagem;
	
	printf("Os dados de quantas pessoas serao digitados? ");
	scanf("%d", &n);
	
	char nomes[n][50];
	int idades[n];
	double alturas[n];
	
	for (i = 0; i < n; i++) {
		printf("Dados da %da pessoa:\n", i+1);
		printf("Nome: ");
		scanf("%s", &nomes[i]);
		printf("Idade: ");
		scanf("%d", &idades[i]);
		printf("Altura: ");
		scanf("%lf", &alturas[i]);	
	}
	
	soma = 0;
	for (i = 0; i < n; i++) {
		soma = soma + alturas[i];	
	}
	media = soma / n;
	
	printf("\nAltura media: %.2lf\n", media);
	
	cont = 0;
	for (i = 0; i < n; i++) {
		if (idades[i] < 16) {
			cont = cont + 1;
		}
	}
	porcentagem = (double) cont * 100 / n;
	
	printf("Pessoas com menos de 16 anos: %.1lf%%\n", porcentagem);
	
	for (i = 0; i < n; i++) {
		if (idades[i] < 16) {
			printf("%s\n", nomes[i]);
		}
	}
	
	return 0;

}
