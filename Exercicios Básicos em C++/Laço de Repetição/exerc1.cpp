#include <iostream>
#include<locale>
using namespace std;






/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int numpar = 0;
	int numimpar = 1;
	int cont = 0;
	
	cout << " Pares " << " Ímpares "<<endl;
	
	while (cont <=100)
	{
		
		cout<< numpar << " ----- " << numimpar <<endl; 
		numpar = numpar + 2;
		numimpar = numimpar + 2;
		cont = cont + 1;
		
		
	}
	
	
	return 0;
}
