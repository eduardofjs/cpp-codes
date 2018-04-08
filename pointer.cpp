#include <iostream>
using namespace std;

int main() {

	cout << "Enter a number: ";
	int inputNumber = 0;
	cin >> inputNumber;
	
	int * pointerToInt = NULL;
	
	pointerToInt = &inputNumber;
	
	cout << "The addres of " << dec << *pointerToInt << " is: " << hex << pointerToInt;
	
	return 0;
}
