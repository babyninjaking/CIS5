/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 23, 2021
 * Purpose:  Sav9EdC4P4
 */

	/* Write a program to gauge the rate of inflation for the past year. 
	The program asks for the price of an item (such as a hot dog or a 1-carat diamond) both one year ago and today. 
	It estimates the inflation rate as the difference in price divided by the year-ago price. 
	Your program should allow the user to repeat this calculation as often as the user wishes. Define a function to compute the rate of inflation. 
	The inflation rate should be a value of type float giving the rate as a percent, for example 5.3 for 5.3 percent. */

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
    float priceC;	//Current price	
    float priceP;	//Past Price
    char again;         //Yes or no, if the user wants to go again.
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    do
    {
	cout << "Enter current price:" << endl;
	cin >> priceC;
	cout << "Enter year-ago price:" << endl;
	cin >> priceP;
	cout << "Inflation rate: " << (priceC - priceP) / priceP * 100 << "%" << endl;
	cout << endl;

	cout << "Again:" << endl;
	cin >> again;
        
	if(again == 'Y' || again == 'y')
		cout << endl;
        
    } while (again == 'Y' || again == 'y');
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}