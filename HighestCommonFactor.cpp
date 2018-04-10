// Highest Common Factor or Greatest common divisor

#include <iostream>
using namespace std;

int main() {
	
	int number1, number2;
	cout << "Enter two numbers: ";
	cin >> number1 >> number2;
	
	while(number1 != number2){
	    if(number1 > number2){
	        number1 -= number2;
	    }else{
	        number2 -= number1;
	    }
	}
	
	cout << "HFC = " << number1;
	return 0;
}
