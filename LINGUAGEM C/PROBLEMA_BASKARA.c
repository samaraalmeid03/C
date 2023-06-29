#include <stdio.h>
#include <math.h>

int main () {
	
	int a, b, c, delta;
	double x1, x2;
	
	printf("Coeficiente a: ");
	scanf("%d", &a);	
	printf("Coeficiente b: ");
	scanf("%d", &b);	
	printf("Coeficiente c: ");
	scanf("%d", &c);
	
	delta = pow(b, 2) - 4 * a * c;
	
	if (delta > 0) {
		x1 = - b + sqrt(delta) / 2 * a;
		x2 = - b - sqrt(delta) / 2 * a;	
		
		printf("Delta maior que zero, duas raizes reais:\n");	
		printf("X1 = %.4lf\n", x1);
		printf("X2 = %.4lf\n", x2);	
	}
	else if (delta == 0) {
		x1 = - b + sqrt(delta) / 2 * a;
		
	    printf("Delta igual a zero, uma raiz real:\n");	
		printf("X = %.4lf\n", x1);
	}
	else {
		printf("Delta menor que zero. Esta equacao nao possui raizes reais!\n");
	}

	return 0;	
}
