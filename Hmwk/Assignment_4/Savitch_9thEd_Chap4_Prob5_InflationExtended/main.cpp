/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 23, 2021
 * Purpose:  Savitch_9thEd_Chap4_Prob5_InflationExtended
 */

	/* Enhance your program from Sav9EdC4P4 by having it also print out the estimated price of the item in one and in two years from the time of the calculation. 
	The increase in cost over one year is estimated as the inflation rate times the price at the start of the year. 
	Define a second function to determine the estimated cost of an item in one year,given the current price of the item and the inflation rate as arguments. */

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
    float infl;         //Inflation
    char again;         //Yes or no, if the user wants to go again.
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    do
    {
	cout << "Enter current price:" << endl;				//Inflation
	cin >> priceC;
	cout << "Enter year-ago price:" << endl;
	cin >> priceP;
	infl = (priceC - priceP) / priceP;
	cout << "Inflation rate: " << infl * 100 << "%" << endl;
	cout << endl;
	
	cout << "Price in one year: $" << priceC * (1+infl) << endl;	//Future Prices
	cout << "Price in two year: $" << priceC * (1+infl) * (1+infl) << endl;
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