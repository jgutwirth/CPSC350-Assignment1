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
    int sum=0,mean=0,var=0,lines=0;
    float stdDeviation;

    int FileCreator(){
        /*
         * Creates file for DNA strings to be stored in.
         */
        cout<<"Enter a name for a DNA txt file: ";
        cin>>filename;


        return 0;
    }

    int PopulateFile(){
        /*
         * Populates the file with arbitrary DNA strings.
         */
        ofstream outf(filename);

        outf<<"ACTGATGA"<<endl;
        outf<<"CTAGTAGC"<<endl;
        outf<<"GTACCATC"<<endl;

        outf.close();

        return 0;
    }

    int FindSum(){
        /*
         * Finds the sum of the length of all the arbitrary DNA strings.
         */
        int i=0;
        string strinput,temp;

        ifstream inf(filename);

        while(getline(inf,strinput)){

            for(i=0;i<strinput.length();i++){
                sum++;
            }
        }

        inf.close();

        ofstream outf("jonathangutwirth.out");

        outf<<"Sum: "<<sum<<endl;

        outf.close();

        return 0;
    }

    int FindMean(){
        /*
         * Finds the mean of the lengths of the arbitrary DNA strings.
         */
        int allSum=0;
        string strinput;

        ifstream inf(filename);
        while(getline(inf,strinput)){
            lines++;
        }
        for(int i=1;i<=sum;i++){
            allSum += i;
        }
        mean = allSum/sum;

        inf.close();

        outf.open("jonathangutwirth.out");

        outf<<"Mean: "<<mean<<endl;

        outf.close();

        return 0;
    }

    int FindVar(){
        /*
         * Finds the variance of the lengths of the arbitrary DNA strings.
         */
        int temp=0,i=0;
        outf.open("jonathangutwirth.out");
        for(i;i<sum;i++){
            var += pow(i-mean,2);
        }
        var /= sum;

        outf<<"Variance: "<<var<<endl;
        outf.close();
        return 0;

    }

    int FindStandardDeviation(){
        /*
         * Finds the standard deviation of the lengths of the arbitrary DNA strings.
         */
        stdDeviation =sqrt(var);
        outf.open("jonathangutwirth.out");
        outf<<"Standard Deviation: "<<stdDeviation<<endl;
        outf.close();
        return 0;
    }

    int Prob(){
        /*
         * Finds the relative probability of the nucleotides in the arbitrary DNA strings.
         */
        int i=0;
        string strinput;
        ifstream inf(filename);
        int a=0,c=0,t=0,g=0,
        		aa=0,ac=0,at=0,ag=0,ca=0,cc=0,ct=0,cg=0,ta=0,tc=0,tt=0,tg=0,ga=0,gc=0,gt=0,gg=0;

        while(getline(inf, strinput)){
            for(i;i<strinput.length();i++){
                if(toupper(strinput[i])=='A'){
                    a++;
                    if(toupper(strinput[i+1])=='A'){
                        aa++;
                        a++;
                    }
                    else if(toupper(strinput[i+1])=='C'){
                        ac++;
                        c++;
                    }
                    else if(toupper(strinput[i+1])=='T'){
                        at++;
                        t++;
                    }
                    else if(toupper(strinput[i+1])=='G'){
                        ag++;
                        g++;
                    }
                    else{
                        continue;
                    }
                }
                else if(toupper(strinput[i])=='C'){
                    c++;
                    if(toupper(strinput[i+1])=='A'){
                        ca++;
                        a++;
                    }
                    else if(toupper(strinput[i+1])=='C'){
                        cc++;
                        c++;
                    }
                    else if(toupper(strinput[i+1])=='T'){
                        ct++;
                        t++;
                    }
                    else if(toupper(strinput[i+1])=='G'){
                        cg++;
                        g++;
                    }
                    else{
                        continue;
                    }
                }
                else if(toupper(strinput[i])=='T'){
                    t++;
                    if(toupper(strinput[i+1])=='A'){
                        ta++;
                        a++;
                    }
                    else if(toupper(strinput[i+1])=='C'){
                        tc++;
                        c++;
                    }
                    else if(toupper(strinput[i+1])=='T'){
                        tt++;
                        t++;
                    }
                    else if(toupper(strinput[i+1])=='G'){
                        tg++;
                        g++;
                    }
                    else{
                        continue;
                    }
                }
                else if(toupper(strinput[i])=='G'){
                    g++;
                    if(toupper(strinput[i+1])=='A'){
                        ga++;
                        a++;
                    }
                    else if(toupper(strinput[i+1])=='C'){
                        gc++;
                        c++;
                    }
                    else if(toupper(strinput[i+1])=='T'){
                        gt++;
                        t++;
                    }
                    else if(toupper(strinput[i+1])=='G'){
                        gg++;
                        g++;
                    }
                    else{
                        continue;
                    }
                }
                else{
                    continue;
                }
            }
        }
        inf.close();

        outf.open("jonathangutwirth.out");

        outf<<"A: "<<a<<endl<<"\t"<<"AA: "<<aa<<" AC: "<<ac<<" AT: "<<at<<" AG: "<<ag<<endl;
        outf<<"C: "<<c<<endl<<"\t"<<"CA: "<<ca<<" CC: "<<cc<<" CT: "<<ct<<" CG: "<<cg<<endl;
        outf<<"T: "<<t<<endl<<"\t"<<"TA: "<<ta<<" TC: "<<tc<<" TT: "<<tt<<" TG: "<<tg<<endl;
        outf<<"G: "<<g<<endl<<"\t"<<"GA: "<<ga<<" GC: "<<gc<<" GT: "<<gt<<" GG: "<<gg<<endl;

        outf.close();


        return 0;
    }

    int Print1000(){
    	int a,b;
    	a = rand()%1;
    	b = rand()%1;

    	int C;

    	C = sqrt(-2*log10(a))*cos(2*3.14159265359*b);

    	int D;

    	D = stdDeviation*C+mean;

    }
};















