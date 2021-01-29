#include <iostream>

using namespace std;

int soma (int con);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int num = 0;
	
	cout<< " Entre com o número a ser somado : "<<endl;
	
	cin>>num;
	
	cout<< soma(num);
	
	
	return 0;
}

int soma (int con){
	
	
	
	if (con <= 1) {
		
		return 1;
		
	} else {
		
		return con + soma (con - 1);
	}
	
}
