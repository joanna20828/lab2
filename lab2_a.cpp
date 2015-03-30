#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"BMI.h"
using namespace std;


int main()
{
	string Cat;
	float bmi,height,weight;
	BMI BMI1;
	
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
	bmi=BMI1.calculate(height, weight) ;
	Cat=BMI1.Category(bmi); 
	outFile << bmi << "\t" << Cat << endl;
	}	
}

