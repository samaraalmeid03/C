#include <stdio.h>

int main () {
	
	//Declara��o de vari�veis:
	double largura, comprimento, metro_quadrado, area_terreno, preco_terreno;
	
	//Entrada de dados:
	printf("Digite a largura do terreno: ");
	scanf("%lf", &largura);
	printf("Digite o comprimento do terreno: ");
	scanf("%lf", &comprimento);
	printf("Digite o valor do metro quadrado: ");
	scanf("%lf", &metro_quadrado);
	
	//C�lculos:
	area_terreno = largura * comprimento;
	preco_terreno = area_terreno * metro_quadrado;
	
	//Impress�o dos resultados:
	printf("Area do terreno = %.2lf\n", area_terreno);
	printf("Preco do terreno = %.2lf\n", preco_terreno);
	
	return 0;
}
