#include <iostream>
#include<locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	
	cout<< " Vamos Testar Qual o Tipo de triângulo"<<endl;
	
	cout<< " Entre com o primeiro valor .: "<<endl;
	cin>> num1;
	
	cout<< " Entre com o segundo valor .: "<<endl;
	cin>> num2;
	
	cout<< " Entre com o terceiro valor .: "<<endl;
	cin>> num3;
	
	if ((num1 == num2) and (num2 == num3 ) and (num1 == num3)){
		
		cout << " O triângulo é Equilátero";
	}
	
	if ((num1!=num2) and (num2!=num3) and (num1!=num3)) {
		
		cout<< " O triângulo é Escaleno";
	}
	
	else {
	
		cout<< "O triângulo é Isósceles";
	}
	
	
	return 0;
}
