#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int soma (int con);

int main() {
	
	int so = 0;
	
	cout<< "Entre com o valor a ser somado"<<endl;
	cin>> so;
	
	cout<< soma(so);
	
	return 0;
}


int soma (int con){
	
	int som = 0;
	
	
	if (con < 5){
		
		return 1 * con;
	} 
	else {
		
		som = 2 * soma (con - 5) + 7;
	}
	
	return som;
}
