#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int consistir ();
int padovan(int x);


int main() {
	
	int x = 0;
	
	cout<< " Calcular Padovan "<<endl;
	
	x = consistir();
	
	
	cout<< " A série é "<< padovan(x);
	

	
	
	return 0;
}

int consistir (){
	
	int num = 0;
	
	do {
		
		cout<< "Entre com o termo : "<<endl;
		cin>> num;
	
	} while (num < 4);
	
	return num;
}

int padovan (int x){
	
	int i = 0;
	
	if (x == 0 || x == 1 || x == 2) {
		
		return 1;
	
	} else {
		
		return padovan(x - 2) + (x - 3);
	}
	

}
