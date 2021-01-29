#include <iostream>
#include<locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int num1 = 0;
	int num2 = 0;
	
	cout<< " Programa Números Crescentes ou Decrescentes "<<endl;
	
	cout<< " Entre com o primeiro número.: " << endl;
	cin>> num1;
	
	cout<< "Entre com o segundo número.:" << endl;
	cin>> num2;
	
	if (num1 > num2 ) {
		
		cout<< " A ordem crescente é : "<<num2<< "--"<<num1<<endl;
		cout<< " A ordem decrescente é : "<<num1<<"--"<<num2;	
	}
	
	else {
		
		cout<< " A ordem crescente é : "<<num1<<"--"<<num1<<endl;
		cout<< " A ordem crescente é : "<<num2<<"--"<<num1;
	}
	
	return 0;
}
