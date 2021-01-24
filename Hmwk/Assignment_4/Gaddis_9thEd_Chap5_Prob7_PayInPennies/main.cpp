/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 20, 2021
 * Purpose:  Gaddis_9thEd_Chap5_Prob7_PayInPennies
 */
	/* Write a program that calculates how much a person would earn over a period of time
	if his or her salary is one penny the first day and two pennies the second day, and continues
	to double each day. The program should ask the user for the number of days.
	The output earnings should be displayed in a dollar amount, not the number of pennies.
	Input Validation: Do not accept a number less than 1 for the number of days worked. */



//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float pay;	//pay
    int days;	//# of Days worked
    
    //Initialize Variables
    pay = 0.01;
    cin >> days;
    
    //Map Inputs to Outputs -> Process
    if (days > 0)	//Input Validation
    {
	while (days > 0)	//Sumation loop
	{
		pay *= 2;
		days--;
	}
	pay = pay - 0.01;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "Pay = $" << pay;
    }
    else
	cout << "Please input a number of days greater than 0.";
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}