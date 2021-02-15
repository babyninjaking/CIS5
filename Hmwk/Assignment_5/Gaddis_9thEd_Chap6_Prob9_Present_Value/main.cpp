/* 
 * Author: Jason Wilmot
 * Created on: January 26th, 2021
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float psntVal(float fVal, float iRate, int years); //Future value function

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float fVal;   //Present value
    int years;      //Number of years
    float iRate;      //% interest rate 
    
    //Initialize Variables
    cout << "This is a Present Value Computation" << endl;
    cout << "Input the Future Value in Dollars" << endl;
    cin >> fVal;
    cout << "Input the Number of Years" << endl;
    cin >> years;
    cout << "Input the Interest Rate %/yr" << endl;
    cin >> iRate;
    
    //Process/Map inputs to outputs
    iRate = iRate / 100;
    
    //Output data
    cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
    cout << "The Present Value = $" << psntVal(fVal, iRate, years);
    
    //Exit stage right!
    return 0;
}

float psntVal(float fVal, float iRate, int years)
{
    return fVal / pow(1+iRate, years);
}