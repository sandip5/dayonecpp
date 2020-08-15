#include <iostream>
#include <math.h>

using namespace std;

void primeFactors(int number) {
	for( int prime_factor = 2; prime_factor < sqrt(number); prime_factor ++ ){
		if( number%prime_factor == 0 ){
			int count = 0;
			while( number%prime_factor == 0 ){
				number = number/prime_factor;
				count++;
			}
			cout << prime_factor << endl;
		}
	}
	if (number >= 2)
   		cout<<number<<"\t";
}

int main() {
	int number;
	cin >> number;
	primeFactors(number);
	return 0;
}
