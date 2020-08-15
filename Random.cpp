#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
	srand((unsigned) time(0));
	int randomNumber = (rand() % 6) + 1;
	cout << randomNumber << endl;
	return 0;
}
