#include <iostream>
#include<locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int temp = 0;
	
	cout<< " Vamos Organizar os N�meros na Ordem Ideal"<<endl;
	
	cout<< " Entre com o primeiro valor (A) .: "<<endl;
	cin>> num1;
	
	cout<< " Entre com o segundo valor (B) .: "<<endl;
	cin>> num2;
	
	cout<< " Entre com o terceiro valor (C) .: "<<endl;
	cin>> num3;
	
	if (num1 < num2) {
		
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	
	if (num1 < num3 ) {
		
		temp = num1;
		num1 = num3;
		num3 = temp;
		
	}
	
	if (num2 < num3 ) {
		
		temp = num2;
		num2 = num3;
		num3 = temp;
	}
	
	cout<< " A ordem dos valores �.: "<< num1 << "--" << num2 << " -- " << num3;
	return 0;
}
