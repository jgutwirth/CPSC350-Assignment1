/**************************************

	TriArea.cpp

	Usage: User inputs lengths for
	sides of a triangle, then the
	computer will calculate the
	area of the triangle.

	**************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float a,b,c,s,area;

	cout<<"Enter in three sides of a triangle: ";
	cin>>a>>b>>c;

	s=(a+b+c)/2;

	area = sqrt(s*(s-a)*(s-b)*(s-c));

	cout<<"The area of the triangle is: "<<area<<endl;

	return 0;
}