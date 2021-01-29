#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int consistir();
int fat(int nu);

int main() {
	
	int num = 0;
	
	cout<< " Fatorial "<<endl;
	
	num = consistir();
	
	cout<< " O fatoril eh : "<< fat(num);
	
	return 0;
}

int consistir(){
	
	int n = 0;
	
	do {
		
		cout<< " Entre com o valor :"<<endl;
		cin>>n;
	
	} while (n < 2);
	
	return n;
}

int fat (int nu) {
	
	int var = 0;
	
	if (nu < 1) {
		
		return 1;
	
	} else {
		
		var = nu * fat(nu - 1);
		return var;
	}
}
