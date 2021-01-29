#include <iostream>
#include<locale>
using namespace std;







int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1 = 1;
	
	
	cout<< " Vamos Calcular os 100 primeiros números positivos"<<endl;
	
	while (num1 < 100 ) {
		
		cout<< num1<<endl<<endl;
		num1 = num1 + 1;
		
	}
	
	
	return 0;
}
