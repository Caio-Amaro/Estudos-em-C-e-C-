#include <iostream>


using namespace std;

int contador(int cont);

int main() {
	
/*	int co=5;*/

	int a = 0;

	cout<< "Entre com o valor a ser contado"<<endl;
	cin>> a;
	

	
	/*printf ("%i\n", contador(a));*/
	
	cout<< " O termo de : "<< a << " Eh --> "<<contador(a);
	
	return 0;
	

}

int contador (int cont)
{
	
	if (cont == 1) {
		
		return 0;
	}
	
	if ( cont == 2 || cont == 3) {
		return 1;
	}
	
	else {
	
		return contador (cont - 1) + contador (cont - 2);
	
	}
	
	

		/*contador (num + 6, cont);*/
}
