#include <stdio.h>
#include <math.h>

int main () {
	
	//Declara��o de vari�veis:
	double base, altura, area, perimetro, diagonal;
	
	//Entrada de dados:
	printf("Base do retangulo: ");
	scanf("%lf", &base);
	printf("Altura do retangulo: ");
	scanf("%lf", &altura);
	
	//C�lculos:
	area = base * altura;
	perimetro = 2 * (base + altura);
	diagonal = sqrt(pow(base, 2) + pow(altura, 2));
	
	//Sa�da de dados:
	printf("AREA = %.4lf\n", area);
	printf("PERIMETRO = %.4lf\n", perimetro);
	printf("DIAGONAL = %.4lf\n", diagonal);
	
	return 0;
}
