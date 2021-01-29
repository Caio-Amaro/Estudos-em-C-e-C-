#include <iostream>
#include<locale>
using namespace std;
#define TRUE  1                   /* NOVIDADE!!! */
#define FALSE 0  







/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
int num = 0;
int i = 2;
int resultado = 0;

cout<< " Entre com número número ..: ";
cin>> num;


	while (i <= num / 2)
	{
	
		if (num % i == 0 )
		{
		
		resultado++;
		break;
		
		
		}
	
		i++;
	
	}
	
	if (resultado == 0)
		
		{
			cout<< " primo ";
		} else {
			
			cout<< " não primo";
		}
	
	
 
 
	return 0;
}


