#include <iostream>
#include<locale>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale (LC_ALL, "Portuguese");
	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int cont = 1;
	int entra = 0;
	
	cout<< " Entre com a quantidade de termos ";
	cin>>entra;
	
	
	while ( cont <= entra) 
	{
		
		
		
		num3 = (num1 + num2) + 1;
		
		num1 = num2;
		
		num2 = num3;
		
		cout<< num3 <<endl << endl;
		
		cont = cont + 1;
		
			if ( (cont + 1) > entra) {
			
			
			num3 = num3 + num4;
			num4 = num3;
				
		
			}
		
		
	}
	
	cout<< " A soma dos dois últimos termos são ..: "<< num4;
	return 0;
}
