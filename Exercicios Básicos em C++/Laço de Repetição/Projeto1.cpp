#include <iostream>
#include<locale>
using namespace std;







int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1 = 0;
	
	
	cout<< " Vamos Calcular os 100 primeiros n�meros positivos"<<endl;
	
	while (num1 <= 100 ) {
		
		cout<< num1<<endl<<endl;
		num1 = num1 + 2;
		
	}
	
	
	
	
	return 0;
}
