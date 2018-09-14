#include <iostream>
#include <string>

using namespace std;

int main(){
	string str1,str2;

	cout<<"Enter in string 1: ";
	cin>>str1;

	cout<<"Enter in string 2: ";
	cin>>str2;

	if(str1.find(str2)!=0){
		cout<<"These strings are not the same."<<endl;
	}
	else
		cout<<"These strings are the same."<<endl;

	return 0;
}