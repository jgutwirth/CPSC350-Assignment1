/*******************************

	Powers.cpp

	Usage: Enter two numbers
	into the console, then
	the first number will be
	raised to the second number.

	*******************************/

#include <iostream>


using namespace std;

int main(){

	int a;
	int b;
	int r=1;

	cout<<"Enter two numbers: ";
	cin>>a>>b;

	for(int i=0;i<=b;i++){
		r = r*a;
	}

	cout<<"Result: "<<r<<endl;

	return EXIT_SUCCESS;
}