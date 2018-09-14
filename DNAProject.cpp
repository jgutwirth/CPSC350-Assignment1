/**********************************************

	DNAProject.cpp

	Usage: Formulates functions used by
	"DNADriver". This includes the file
	creator function, populate file
	function, sum, mean, variance, and
	standard deviation functions, as well
	as two functions for finding the
	probability of each nucleotide in
	the arbitrary sequences and the
	frequency of the nucleotide bigrams
	in the arbitrary sequences.

	Author: Jonathan Gutwirth

	**********************************************/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

class DNAProject{

	public:

		string filename;
		int sum=0;

		int FileCreator(){
		    /*
		     * Creates file for DNA strings to be stored in.
		     */
		    cout<<"Enter a name for a DNA txt file: ";
		    cin>>filename;

		    ofstream outf(filename);

		    return 0;
		}

		int PopulateFile(const string &filename){
		    /*
		     * Populates the file with arbitrary DNA strings.
		     */
		    ofstream outf(filename);

		    outf<<"ACTGATGA"<<endl;
		    outf<<"CTAGTAGC"<<endl;
		    outf<<"GTACCATC"<<endl;

		    return 0;
		}

		int FindSum(const string &filename){
		    /*
		     * Finds the sum of the length of all the arbitrary DNA strings.
		     */
		    int i=0;
		    string strinput,temp;

		    ifstream inf(filename);

		    while(i<3){
		        getline(inf,strinput);

		        for(i=0;i<strinput.length();i++){
		            sum++;
		        }
		        i++;
		    }
		    return sum;
		}

		int FindMean(const string &filename){
		    /*
		     * Finds the mean of the lengths of the arbitrary DNA strings.
		     */
		    int mean=0;
		    string strinput,temp;

		    ifstream inf(filename);

		    mean = sum/3;
		    return mean;
		}

		int FindVar(const string &filename){
		    /*
		     * Finds the variance of the lengths of the arbitrary DNA strings.
		     */
		    int mean=FindMean(filename),temp=0,i=0,length=FindSum(filename);

		    ifstream inf(filename);

		    for(i=0;i<length;i++){
		        temp += (i-mean)*(i-mean);
		    }
		    return temp/(length-1);

		}

		double FindStandardDeviation(const string &filename){
		    /*
		     * Finds the standard deviation of the lengths of the arbitrary DNA strings.
		     */
		    return sqrt(FindVar(filename));
		}

		int RelativeProb(const string &filename){
		    /*
		     * Finds the relative probability of the nucleotides in the arbitrary DNA strings.
		     */
		    int i=0;
		    string strinput,nucleotide = "ATCG";
		    ifstream inf(filename);

		    getline(inf, strinput);
		    for(i;i<nucleotide.length();i++){
		        cout << "Relative Probability for "<< nucleotide[i] <<": "<< 
		            count(strinput.begin(), strinput.end(),nucleotide[i]) / strinput.size() << endl;
		    }

		    return 0;
		}

		int BigramProb(const string &filename){
		    /*
		     * Finds the probability of nucleotide bigrams in the arbitrary DNA strings.
		     */
		    int i=0,j=0;
		    string strinput,nucleotide = "ATCG";
		    ifstream inf(filename);
		    
		    getline(inf,strinput);
		    for(i;i<nucleotide.length();i++){
		        for(j;j<nucleotide.length();i++){
		            cout<<"Bigram Probability for "<<nucleotide[i,j]<<": "<<
		                count(strinput.begin(), strinput.end(),nucleotide[i,j]) / strinput.size() <<endl;
		        }
		    }

		    return 0;
		}

		int Print1000(const string &filename){

		}
};
















