#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>

#include "BMI.h"

using namespace std;

float BMI::calculate(float h, float w){
	float BMI;
	BMI=w/((h*0.01)*(h*0.01));
	return BMI;
}
string BMI::Category(float BMI)
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

