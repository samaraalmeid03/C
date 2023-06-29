#include <stdio.h>

int main () {
	//Declara��o de vari�veis.
	int n, i;
	double soma, media;
	
	//Entrada de dados.
	printf("Quantos numeros voce vai digitar? ");
	scanf("%d", &n);
	
	//Cria��o de um vetor com n posi��es.
	double vet[n];
	
	//Usu�rio digita um numero e este � armazenado na posi��o i do vetor. For percorre todo o vetor.
	for (i = 0; i < n; i++) {
		printf("Digite um numero: ");
		scanf("%lf", &vet[i]);
	}
	
	//Impress�o dos valores digitados pelo usu�rio.
	printf("\nVALORES = ");
	for (i = 0; i < n; i++) {
		printf("%.1lf ", vet[i]);
	}
	
	//Soma dos valores do vetor.
	soma = 0;
	for (i = 0; i < n; i++) {
		soma = soma + vet[i];	
	}
	//C�lculo de media.
	media = soma / n;
	
	//Impress�o de resultados.
	printf("\nSOMA = %.2lf\n", soma);
	printf("MEDIA = %.2lf\n", media);
		
	return 0;
}
