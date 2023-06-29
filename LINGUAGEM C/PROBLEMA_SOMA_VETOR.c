#include <stdio.h>

int main () {
	//Declaração de variáveis.
	int n, i;
	double soma, media;
	
	//Entrada de dados.
	printf("Quantos numeros voce vai digitar? ");
	scanf("%d", &n);
	
	//Criação de um vetor com n posições.
	double vet[n];
	
	//Usuário digita um numero e este é armazenado na posição i do vetor. For percorre todo o vetor.
	for (i = 0; i < n; i++) {
		printf("Digite um numero: ");
		scanf("%lf", &vet[i]);
	}
	
	//Impressão dos valores digitados pelo usuário.
	printf("\nVALORES = ");
	for (i = 0; i < n; i++) {
		printf("%.1lf ", vet[i]);
	}
	
	//Soma dos valores do vetor.
	soma = 0;
	for (i = 0; i < n; i++) {
		soma = soma + vet[i];	
	}
	//Cálculo de media.
	media = soma / n;
	
	//Impressão de resultados.
	printf("\nSOMA = %.2lf\n", soma);
	printf("MEDIA = %.2lf\n", media);
		
	return 0;
}
