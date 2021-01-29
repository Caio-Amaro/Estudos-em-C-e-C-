#include <iostream>

#include<locale>
using namespace std;






/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1 = 1;
	int num2 = 0;
	int termo = 0;
	
	int cont = 1;
	
	
	
	cout<< " Fibonacci " << endl;
	
	while (cont <= 7 ) {
		
		termo = num1 + num2;			
		cout<< " Termo : "<< cont << " resultado : " << termo <<endl;
		num1 = num2;
		num2 = termo;
		cont = cont + 1;
		
		
		
	}
		
		
	
	return 0;
}


