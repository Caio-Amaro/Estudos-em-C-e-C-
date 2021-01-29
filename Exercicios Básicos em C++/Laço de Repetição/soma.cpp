#include <iostream>
#include <cstdlib>
#include <iomanip>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	float area = 0;
	float raio = 0;
	float num1 = 3.14159;

	cin >> raio;
	
	
	
	area = num1 * ( raio * raio);
	
	
	cout << setprecision(4) << setiosflags(ios::fixed) << "A = " << area <<endl;;
	
	
    return EXIT_SUCCESS;
}
