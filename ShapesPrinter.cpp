#include <iostream>

using namespace std;

int main(){

	int r,c,k;

	for(int r=1;r<=5;r++){
		for(int c=5;c>r;c--){
			cout<<" ";
		}
		for(int k=1;k<2*r;k++){
			cout<<r++;
		}
		cout<<endl;
	}

	return 0;
}