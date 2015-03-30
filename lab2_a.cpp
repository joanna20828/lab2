#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>

using namespace std;
string Category(float BMI );

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
	BMI = weight/((height*0.01)*(height*0.01)) ;
	Cat=Category(BMI); 
	outFile << BMI << "\t" << Cat << endl;
	}	
}
string Category(float BMI)
{
	string Cat;
	if(BMI<15) Cat="Very severely underweight";
	else if(15<=BMI && BMI<16) Cat="Severely underweight";
	else if(16<=BMI && BMI<18.5) Cat="Underweigh";
	else if(18.5<=BMI && BMI<25) Cat="Normal";
	else if(25<=BMI && BMI<30) Cat="Overweight ";
	else if(30<=BMI && BMI<35) Cat="Obese Class I (Moderately obese)";
	else if(35<=BMI && BMI<40) Cat="Obese Class II (Severely obese)";
	else if(BMI>=40)Cat="Obese Class III (Very severely obese)";
	return Cat;	
}




