#include <iostream>
#include<locale>
using namespace std;






/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
		
	int num1 = 0;
	int num2 = 0;
	int cont = 0;
	
	cout << " número fatorial : ";
	cin>> num1;
	
	cont = num1;
	
	while (cont >= 1 )
	{
		
		
		num2 = num1 * (cont - 1);
		num1 = num1 -1;
		
		cout<< cont << " -- " << num2;
	}
	return 0;
}
