#include <iostream>
#include<locale>
using namespace std;







/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	setlocale(LC_ALL, "Portuguese");
		
	int num1 = 0;
	int bin = 0;
	int num2 = 0;
	int cont = 0;
	
	cout<< " Entre com o número para conversão de binário ..: ";
	cin>>num1;
	
	while (cont <= 7)
	 {
	 	if (num1 % 2 == 0)
	 	
	 	{
	 		bin =  0 ;
		 }
		 else
		 {
		 	bin =  1 ;
		 }
		
		num2 = 7 - cont;
		cout<< num2 << " - " << bin << " - "<<endl;
		
		num1 = num1 / 2;
		
		cont = cont +1;
	 }
	return 0;
}
