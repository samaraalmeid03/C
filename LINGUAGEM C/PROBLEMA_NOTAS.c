#include <stdio.h>

int main () {
	
	//Declaração de variavéis:
	double nota1, nota2, total;
	
	//Entrada de dados: 
	printf("Digite a primeira nota: ");
	scanf("%lf", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%lf", &nota2);
	
	//Cálculo:
	total = nota1 + nota2;
	
	//Saída de dados:
	printf("NOTA FINAL = %.1lf\n", total);
	
	//EStrutura condicional: se a soma das notas for maior que 60 exibe a mensagem "APROVADO" e caso não é impresso na tela "REPROVADO".
	if (total > 60) 
	{
		printf("APROVADO!");
	}
	else 
	{
		printf("REPROVADO!");
	}
	
	return 0;
}
