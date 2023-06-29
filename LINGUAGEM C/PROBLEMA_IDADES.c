#include <stdio.h>

int main () {
	
	//Declaração de variáveis:
	char nome1[50], nome2[50];
	int idade1, idade2;
	double media;
	
	//Entrada de dados:
	printf("Dados da primeira pessoa:\n");
	printf("Nome: ");
	gets(nome1);
	printf("Idade: ");
	scanf("%d", &idade1);
	
	printf("Dados da segunda pessoa:\n");
	printf("Nome: ");
	fseek(stdin, 0, SEEK_END); //Limpeza da entrada.
	gets(nome2);
	printf("Idade: ");
	scanf("%d", &idade2);
	
	//Cálculos:
	media = ((double)idade1 + idade2) / 2; 
	
	//Saída de dados: 
	printf("A idade media de %s e %s eh de %.1lf anos", nome1, nome2, media);
	
	return 0;
}
