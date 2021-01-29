#include <iostream>
#include<locale>
using namespace std;







/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1 = 0;
	int num2 = 0;
	
	
	cout<< "Mostrar Números pares de 10 a 100 e a Soma "<<endl;
	
	while (num1 < 6) {
		
		cout<< num1 <<endl;
		
		num1 = num1 + 2;
		
		num2 = num2 + num1;
		
	}
	
	cout<< " A soma dos números é : " << num2 ;
	
	
	return 0;
}
