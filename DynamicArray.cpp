#include <iostream>
#include <vector>

using namespace std;

int main(){
    
   vector<int> dynamicArray(3); //create a dynamic array of int
    
   dynamicArray[0] = 365;
   dynamicArray[1] = -421;
   dynamicArray[2] = 789;
    
   cout << "Number of integers in array: " << dynamicArray.size() << endl;
    
   cout << "Enter another element to insert" << endl;
   int newValue = 0;
   cin >> newValue;
   dynamicArray.push_back(newValue);
    
   cout << "Number of Integers in array: " << dynamicArray.size() << endl;
   cout << "Last element in array: " << dynamicArray[dynamicArray.size()-1] << endl;
    
   return 0;
}
