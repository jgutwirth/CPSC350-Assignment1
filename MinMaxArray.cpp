/******************************

	MinMaxArray.cpp

	Usage: Enter in numbers
	for an array, then the
	computer spits out
	the max and min.

******************************/

#include <iostream>

using namespace std;

int main(){
	int intarr[100],max,min,n,i;

	cout<<"Enter in the number of elements in the array: ";
	cin>>n;

	for(i=0;i<n;i++){
		cout<<"Enter in value "<<i+1<<": ";
		cin>>intarr[i];
	}
	min = intarr[0];
	max = intarr[0];
	for(i=0;i<n;i++){
		if(intarr[i]<min){
			min = intarr[i];
		}
		if(intarr[i]>max){
			max = intarr[i];
		}
	}

	cout<<"Minimum: "<<min<<endl;
	cout<<"Maximum: "<<max<<endl;

	return 0;
}