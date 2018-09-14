/***************************************

	PosNegZeroes.cpp

	Usage: counts the number of
	negatives, positives, and 
	zeroes of a sequence of numbers.

	***************************************/

#include <iostream>

using namespace std;

int main(){

	int pos, neg, zeroes, n;
	char choice;

	do{
		cout<<"Enter a number: ";
		cin>>n;

		if(n>0){
			pos++;
		}
		else if(n<0){
			neg++;
		}
		else{
			zeroes++;
		}

		cout<<"Do you want to continue?(y,n)";
		cin>>choice;
	}while(choice == 'y' || choice == 'Y');


	cout<<"Positives: "<<pos<<" Negatives: "<<neg<<" Zeroes: "<<zeroes<<endl;

	return EXIT_SUCCESS;
}