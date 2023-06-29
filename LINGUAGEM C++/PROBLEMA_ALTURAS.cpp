#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, i, quantMenores;
	double soma, mediaAlt, porcentagem;
	
	cout << "Quantas pessoas serao digitadas? ";
	cin >> n;
	
	string nomes[n];
	int idades[n];
	double alturas[n];
	
	for (i = 0; i < n; i++) {
		cout << "Dados da " << i + 1 << "a pessoa:" << endl;
		cout << "Nome: ";
		cin >> nomes[i];
		cout << "Idade: ";
		cin >> idades[i];
		cout << "Altura: ";
		cin >> alturas[i];
	}
	
	soma = 0;
	for (i = 0; i < n; i++) {
		soma = soma + alturas[i];
	}
	mediaAlt = soma / n;
	
	cout << fixed << setprecision(2);
	cout << "\nAltura media: " << mediaAlt << endl;
	
	quantMenores = 0;
	for (i = 0; i < n; i++) {
		if (idades[i] < 16) {
			quantMenores = quantMenores + 1;
		}
	}
	porcentagem = quantMenores * 100.0 / n;
	
	cout << fixed << setprecision(1);
	cout << "Pessoas com menos de 16 anos: " << porcentagem << "%" << endl;
	
	for (i = 0; i < n; i++) {
		if (idades[i] < 16) {
			cout << nomes[i] << endl;
		}
	}
	
	return 0;
}
