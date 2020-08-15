#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
        int countHead = 0;
        int countTail = 0;
        bool start = true;

        srand(time(0));

        while(countHead < 11 && countTail < 11) {
        	int number = rand() % 2 + 1;
                if(number == 1) {
                        countHead++;
                } else {
                        countTail++;
                }
        }


        if(countHead > countTail) {
		cout << "Head Win" << countHead << endl;
	} else {
		cout << "Tail Win" << countTail << endl;
	}
}
