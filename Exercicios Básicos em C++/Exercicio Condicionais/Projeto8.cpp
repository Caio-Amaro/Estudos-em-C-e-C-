#include <iostream>

#include<locale>
using namespace std;






/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	setlocale(LC_ALL, "Portuguese");
	
	int base = 0;
	int altura = 0;
	float result = 0;
	
	cout<< " Vamos calcular a �rea do Tri�ngulo!"<<endl<<endl;
	
	cout<< "Entre com a Base do tri�ngulo .:" <<endl;
	cin>>base;
	
	cout<< " Entre com a Altura do tri�ngulo .:" <<endl;
	cin>>altura;
	
	if (base > 0 and altura > 0) {
		
		result = base * altura / 2;
		
		cout<< " O valor da �rea do tri�ngulo � .: " << result << " m� ";
	}
	
	else {
		
		cout<< " Valor Incorreto! Tanto a base com a altura devem ser, obrigatpriamente, maior que 0 ";
	}
	
	
	
	return 0;
}
