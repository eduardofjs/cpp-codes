#include <iostream>
using namespace std;

int main(){
   int number, sum=0;
   cout <<"Enter a integer number"<< endl;
   cin >> number;
   for(int i=1; i<=number;i++){
	   sum+=i;
   }
   cout<<"The sum is "<< sum <<endl;

	return 0;
}
