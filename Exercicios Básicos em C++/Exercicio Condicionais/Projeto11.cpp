#include <iostream>
#include<locale>
#include<math.h>
#include<stdio.h>

using namespace std;





/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int nota100 = 0;
	float nota50 = 0;
	float nota10 = 0;
	float nota5 = 0;
	float nota1 = 0;
	
	float result = 0;
	int valor = 0;
	int valorgeral = 0;

	cout<< " Valor Calcular Quantas Notas é Necessário para o Troco"<<endl<<endl;
	
	cout<< " Qual o Valor que Pretende Trocar ? ..: R$ "; 
	cin >> valor;
	
	valorgeral = valor;
	
	if ( valor >= 100) {
		
		nota100 = valor / 100;
		result = valor % 100;		
		
	}
	
	valor = result;
	
	if ( valor >= 50) {
		
		nota50 = valor / 50;
		result = valor % 50;
	}
	

	valor = result;
	
	
	if ( valor >= 10) {
		
		nota10 = valor / 10;
		result = valor % 10;
	}
	
	valor = result;
	
	if ( valor >= 5) {
		
		nota5 = valor / 5;
		result = valor % 5;
	}
	
	valor = result;
	
	if ( valor >= 1) {
		
		nota1 = valor / 1;
		result = valor % 1;
	}
	
	
	cout<< " Sabendo que o valor inicial da troca foi de ..: R$ " << valorgeral <<",00"<<endl;
	
	cout<< " O valor de notas de R$ 100,00 possíveis é de ..: " << nota100 <<endl;
	
	cout<< " O valor de notas de R$ 50,00 possíveis é de ..: " << nota50 <<endl;
	
	cout<< " O valor de notas de R$ 10,00 possíveis é de ..: " << nota10 <<endl;
	
	cout<< " O valor de notas de R$ 5,00 possíveis é de ..: " << nota5 <<endl;
	
	cout<< " O valor de notas de R$ 1,00 possíveis é de ..: " << nota1 <<endl;

	return 0;
}
