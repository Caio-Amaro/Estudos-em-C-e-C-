#include <iostream>
using namespace std;
/* Implementar um programa recursivo em C++  que imprima qual o "n" termo da série de Fibonacci.  (1,1,2,3,5,8.....)
Por exemplo: Qual o 6º termo da série? O programa deverá informar 8.
 */

int consistir ();
int fibonacci (int);

int main(int argc, char** argv) 

{
	int num = 0;
	cout <<"Calculo de Fibonacci\n";
	num = consistir ();
	cout <<"O resultado de Fibonacci eh: "<<fibonacci(num);
	return 0;
}

int consistir()
{
	int n = 0;
	do
	{
		cout<<"Digite termo desejado da serie de Fibonacci: \n";
		cin>> n;
	}
	while (n<3);
	
	return (n);
	
}

int fibonacci (int n)
{
	if (n==1|| n==2)
	{
		return 1;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
	
}
