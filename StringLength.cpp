#include <iostream>

using namespace std;

int main(){

	string phrase;

	cout<<"Enter a string: ";
	cin>>phrase;

	int i;

	for(i=0;phrase[i]!='\0';i++);

	cout<<i<<endl;

	return 0;
}