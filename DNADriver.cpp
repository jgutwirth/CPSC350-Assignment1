/**********************************************

	DNADriver.cpp

	Usage: Runs functions from the DNAProject.cpp
	file. This file will create 1000 lines of
	DNA sequences based on the data generated
	from the frequency functions created
	in the DNAProject.cpp file (RelativeProb
	and BigramProb).

	Author: Jonathan Gutwirth

	**********************************************/

#include <iostream>
#include "dnaproject.h"

using namespace std;
	
int main(){
	DNAProject file1;

	file1.FileCreator();

	file1.PopulateFile();
	file1.FindSum();
	file1.FindMean();
	file1.FindVar();
	file1.FindStandardDeviation();
	file1.Prob();
	file1.


	return 0;
}