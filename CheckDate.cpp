#include <iostream>
#include <string>

using namespace std;

int main() {
	int month;
	int day;
	cout << "Enter Month: "<< endl;
	cin >> month;
	cout << "Enter Day: "<< endl;
	cin >> day;
	string isValidDate = (( month == 3 && day > 19 ) || ( month == 6 && day < 21 ) || ( month == 4 && day > 0 && day < 31) || ( month == 5 && day > 0 && day < 33)) ? "Valid" : "Invalid";
	cout << isValidDate << endl;
}
