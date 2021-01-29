#include <iostream>
#include<locale>
using namespace std;







/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1 = 1;
	int num2 = 0;
	int fib = 0;
	int cont = 0;
	int termo = 0;
	
	cout<< " Entre com a quantidade de termos .: ";
	cin>> termo;
	
	while (termo >= cont) {
		
		
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		cont++;
		cout<< " Termo . : "<< cont << " resultado é .: "<<fib<<endl;;
		
		
	}
	
	
	return 0;
}
