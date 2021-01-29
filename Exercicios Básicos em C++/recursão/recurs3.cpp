#include <iostream>

using namespace std;

int mensage (int con);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int c = 0;
	
	
	cout<< "Entre com o Valor : "<<endl;
	cin>> c;
	
	cout<< (mensage(c));
	
	
	return 0;
}

int mensage (int con) {
	
	if (con == 0) {
		
		return 1;
	} else {
		
		return con * mensage (con - 1);
	}
}
