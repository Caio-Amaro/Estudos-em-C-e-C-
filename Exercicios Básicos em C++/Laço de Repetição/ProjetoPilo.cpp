#include <iostream>
#include<locale>
using namespace std;
#include<stdio.h>





/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

setlocale(LC_ALL, "Portuguese");
	

int x, y, posi, termo;

printf("Digite um Numero: ");
scanf("%d", &x);

printf("Digite outro Numero: ");
scanf("%d", &y);

for(posi=3;posi<=10;posi++){

if(posi%2 == 0){
termo=(posi - 1) - (posi - 2);
printf("\n%d\n", termo);
}
else{
termo=(posi - 1) + (posi - 2);
printf("\n%d\n", termo);
}
}

	
	return 0;
}
