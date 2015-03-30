#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"BMI.h"
using namespace std;


int main()
{
	string Cat;
	float BMI,height,weight;
	
	/*opne file.in*/
	ifstream inFile("file.in", ios::in);
	if(!inFile) {
	cerr << "Failed opening" << endl;
	exit(1);
	}
		
	/*open file out*/
	ofstream outFile("file.out",ios::out);
	if(!outFile) {
	cerr << "Failed opening" << endl;
	exit(2);
	}
	
	outFile << "BMI\tCategory\n" ;
	
	while(inFile >> height >> weight){
	BMI=BMI.calculate(height, weight) ;
	Cat=BMI.Category(BMI); 
	outFile << BMI << "\t" << Cat << endl;
	}	
}

