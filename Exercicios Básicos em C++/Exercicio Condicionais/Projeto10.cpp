#include <iostream>
#include<locale>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;






/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float produto1 = 32.00;
	float produto2 = 45.00;
	float produto3 = 37.00;
	float produto4 = 33.00;
	int codigo = 0;
	
	cout<< " Vamos calcular quanto o comprador deve "<<endl<<endl;
	cout<< " [ 1 ] - Produto Cueca "<<endl;
	cout<< " [ 2 ] - Camisola Lisa "<<endl;
	cout<< " [ 3 ] - Bola de Golfe "<<endl;
	cout<< " [ 4 ] - Peruca Ilustrada "<<endl;
	
		
	cout<< " Qual o Códito do produto ? "<<endl;
	cin>> codigo;
	
	if (codigo == 1) {
	
		int quanti = 0;	
		int result = 0;
		
		cout<< " A compra é do item .: PRODUTO CUECA " <<endl<<endl;
		cout<< " Qual a quantidade do produto ? "<<endl;
		cin>> quanti;
		result = produto1 * quanti;
		
		
		cout<< " O valor devido é .: R$ "<< result;
		
			
		
	}

	if (codigo == 2) {
	
		int quanti = 0;	
		int result = 0;
		
		cout<< " A compra é do item .: CAMISOLA LISA " <<endl<<endl;
		cout<< " Qual a quantidade do produto ? "<<endl;
		cin>> quanti;
		result = produto2 * quanti;
		
		
		cout<< " O valor devido é .: R$ "<< result;	
		
	}
	
	if (codigo == 3) {
	
		int quanti = 0;	
		int result = 0;
		
		cout<< " A compra é do item .: BOLA DE GOLFE " <<endl<<endl;
		cout<< " Qual a quantidade do produto ? "<<endl;
		cin>> quanti;
		result = produto3 * quanti;
		
		
		cout<< " O valor devido é .: R$ "<< result;	
		
	}
	
	if (codigo == 4) {
	
		int quanti = 0;	
		int result = 0;
		
		cout<< " A compra é do item .: PERUCA ILUSTRADA " <<endl<<endl;
		cout<< " Qual a quantidade do produto ? "<<endl;
		cin>> quanti;
		result = produto4 * quanti;
		
		
		cout<< " O valor devido é .: R$ "<< result;	
		
	}
	
	
	
	exit;
	
	
	return 0;
}
