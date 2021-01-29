#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int mdc(int x, int y);
int consistir();

int main() {
	
	int x = 0;
	int y = 0;

	
	cout<< " Entre com o valor dos termos "<<endl;
	
	x = consistir();
	y = consistir();

	
	cout<< " O valor do MDC eh : "<< mdc(x, y)<< endl;
	
	return 0;
}


int consistir () {
	
	int n = 0;

	
	do
	{
		
		cout<< " Entre com o valor dos termos positivos : "<<endl;
		cin>> n;
		
		
	} while (n < 1);
	
	return n;
}

int mdc (int x, int y) {
	
	if (y == 0){
		
		
		return x;
	
	} else {
		
		return mdc(y, x%y);
	}
}
