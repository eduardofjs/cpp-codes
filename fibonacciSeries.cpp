#include <iostream>

using namespace std;

int main(){
   
  int numberOfTerms, firstTerm = 0, secondTerm = 1, nextTerm;
  
  cout << "Enter the number of terms: " <<endl;
  cin >> numberOfTerms;
  
  cout << "Fibonacci Series: ";
  
  for(int i=1; i<=numberOfTerms; ++i){
      
      cout << firstTerm << ", ";
      nextTerm = firstTerm + secondTerm;
      firstTerm = secondTerm;
      secondTerm = nextTerm;
  }
  
   return 0;
}
