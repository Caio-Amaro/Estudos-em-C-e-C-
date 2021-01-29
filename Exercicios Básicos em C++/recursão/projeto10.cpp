#include <iostream>

using namespace std;

int consistir (int num);
int somaImpar (int cont);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int result = 0;
	int valor = 0;
	
	cout<< " Soma dos ímpares "<<endl;
	cout<< " Entre com número impar"<<endl;
	cin>> valor;
	
	result = consistir(valor);
	
	
	
	
	
		
	return 0;
}


int consistir (int num){
	
		
	
	while (num % 2 == 0){
		
		cout<< " Por favor, entre apenas com impar : "<<endl;
		cin>> num;
	}
	
	cout<< somaImpar(num);	
	
	return 0;
}

int somaImpar (int cont) {
	
	if (cont <= 0 ){
		
		return 0;
	
	} else {
		
		return cont + somaImpar(cont - 2);
	}
}
