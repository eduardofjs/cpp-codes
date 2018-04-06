#include <iostream>
using namespace std;

int main(){
   
   cout << "Enter a number: ";
   int inputNumber = 0;
   cin >> inputNumber;
   
   int halfNumber = inputNumber >> 1;
   int quarterNumber = inputNumber >> 2;
   int doubleNumber = inputNumber << 1;
   int quadrupleNumber = inputNumber << 2;
   
   cout << "Half: " << halfNumber << endl;
   cout << "Quarter: " << quarterNumber << endl;
   cout << "Double: " << doubleNumber << endl;
   cout << "Quaduple: " << quadrupleNumber << endl;
   
   return 0;
}
