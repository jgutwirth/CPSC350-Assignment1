/*******************************

	CompInterest.cpp

	Usage: user enters information
	for rate of input principal,
	interest rate, and time, then the
	computer will calculate compound
	interest.

	*******************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float p,t,r,compInterest;

	cout<<"Enter a number for princpal: ";
	cin>>p;

	cout<<"Enter a number for rate: ";
	cin>>r;

	cout<<"Enter a number for time: ";
	cin>>t;

	compInterest = p*(pow((1+r/100),t))-p;

	cout<<compInterest<<endl;

	return 0;

}