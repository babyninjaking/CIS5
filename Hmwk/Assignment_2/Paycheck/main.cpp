/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 20, 2021
 * Purpose:  Paycheck
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int wage;
    int hrs;
    float pay;
    int payL;

    //Initialize or input i.e. set variable values
    cout << "This program calculates the gross paycheck.\n";
    cout << "Input the pay rate in $'s/hr and the number of hours.\n";
    cin >> wage;
    cin >> hrs;
    
    //Map inputs -> outputs
    if (hrs <= 40)
	    pay = hrs * wage; //Normal wage calculation
    else
	    pay = (hrs - 40) * wage * 2 + 40 * wage;  //overtime wage calculation
	payL = log10(pay) + 1;   //find the length of the pay variable
    
    //Display the outputs
    cout << "Paycheck = $ " << showpoint << setprecision(payL + 2) << pay;
    
    //Exit stage right or left!
    return 0;
}