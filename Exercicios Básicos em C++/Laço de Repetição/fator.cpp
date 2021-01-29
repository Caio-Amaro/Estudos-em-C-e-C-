#include <iostream>
#include<locale>
using namespace std;







/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int fatorial = 1;
	int num1 = 0;
	int cont = 1;
	int cont1 = 0;
	
	cout<< " fatorial : ";
	cin>> num1;
	
	while ( cont <= num1) {
		
		
		
		fatorial = fatorial * cont;
		
		cont1++;
		cont++;
		
	cout<< " Termo .: "<< cont1 << " fatorial é .: "<< fatorial <<endl;	
		
	}
	
	cout<< fatorial <<endl;
	
	return 0;
}
