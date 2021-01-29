#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int consistir ();
int mdc (int, int);

int main(int argc, char** argv)
 {
 	int x = 0;
	int y = 0;
	cout << "Calcular MDC\n";
 	x = consistir ();
 	y = consistir ();
 	cout << "O resultado do calculo do MDC eh: \n"<< mdc(x, y);
	return 0;
}

int consistir ()
{
	int n = 0;
	do
	{
		cout<< "Digite um numero inteiro e positivo:\n";
		cin>> n;
	}
	while (n<1);
	return n;
}

int mdc (int x, int y)
{
	if (y==0)
	{
		return x;
	}
	else
	{
		return mdc(y, x%y);
	}
}
