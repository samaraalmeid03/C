#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, i, j, quantNegativos;
	
	cout << "Qual a ordem da matriz? ";
	cin >> n;
	
	int mat[n][n];
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << "Elemento [" << i << "," << j << "]: ";
			cin >> mat[i][j];
		}
	}
	
	cout << "DIAGONAL PRINCIPAL:" << endl;
	for (i = 0; i < n; i++) {
		cout << mat[i][i] << " ";
	}
	
	quantNegativos = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (mat[i][j] < 0) {
				quantNegativos = quantNegativos + 1;	
			}
		}
	}
	cout << "\nQUANTIDADE DE NEGATIVOS = " << quantNegativos << endl;
	
	return 0;
}
