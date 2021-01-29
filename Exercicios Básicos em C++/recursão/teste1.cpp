#include <iostream>


using namespace std;

void contador (int cont);


int main( ) {
	
	/*int cont = 0;
	cout<< "Entre com o valor a ser contado"<<endl;
	
	cin>> cont;
	
	contador(cont);
	
	return 0;*/
	
	contador(10);
}

void contador (int cont)
{
	
	for (int i=0; i<cont; i++){
		
		cout<< i;
	}
	
}
