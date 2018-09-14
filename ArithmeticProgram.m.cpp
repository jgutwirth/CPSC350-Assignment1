#include <iostream>

using namespace std;

int add(int num1, int num2)
{
int int1,int2;
int1=num1;
int2=num2;
return int1+int2;
}

int subtract(int num1, int num2)
{
int int1,int2;
int1=num1;
int2=num2;
return int1-int2;
}

int multiply(int num1, int num2)
{
int int1,int2;
int1=num1;
int2=num2;
return int1*int2;
}

int divide(int num1, int num2)
{
int in1,int2;
int1=num1;
int2=num2;
return int1/int2;
}

int showChoice()
{

	char input;
	cout<<"Enter an operator that corellates
		to a specific function: ";

	cout<<"+ = add\n
		- = subtract\n
		* = multiply\n
		/ = division"

	cin>>input;
	cout<<"Enter the numbers you want
		 to use: ";
	int num1,num2;
	cin>>num1,num2;
	if(input=="+")
	{
		cout<<add(num1,num2);
	}
	else if(input=="-")
	{
		cout<<subtract(num1,num2);
	}
	else if(input=="*")
	{
		cout<<mutliply(num1,num2);
	}
	else
	{
		cout<<divide(num1,num2);
	}
	return 0;
}

int main(){
	cout<<showChoice();

	return 0;
}

