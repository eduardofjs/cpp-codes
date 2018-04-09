#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
	
	auto inputVariable ='a'; // 'auto' automatically identifies the variable type by the start value
	cout << "Enter some data: ";
	cin >> inputVariable;
	
	cout << "The type of the input is: " << typeid(inputVariable).name() << endl;

	return 0;
}
