#include <stdio.h>
#include <stdlib.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int num = 0;
	
	cout<< consistir();
	
	
	
	return 0;
}

int consistir (){
	
	int num = 0;
	
	cout << "Entre com o valor desejado : "<<endl;
	cin>> num;
	
	while (num % 2 == 1){
		
		cout<< " O valor informado deve ser impar, entre novamente : "<<endl
		cin>> num;
	}
}
