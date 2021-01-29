#include <iostream>

using namespace std;

int naturais(int n, int n1);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int num = 0;
	int num2 = 0;
	int result = 0;
	
	cout<< " Entre com o número desejado "<<endl;
	cin>> num;
	
	cout<< " Entre com as repetições "<<endl;
	cin>>num2;
	
	result = naturais(num, num2);
	
	cout<< result;
	
	
	return 0;
}

int naturais (int n, int n1){
	
	if (n1 <= 0) {
		
		return 0;
	
	} else {
		
		return n + naturais (n, n1-1);
	}
}
