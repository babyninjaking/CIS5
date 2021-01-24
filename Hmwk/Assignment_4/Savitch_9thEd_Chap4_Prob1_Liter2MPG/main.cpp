/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 20, 2021
 * Purpose:  Sav9EdC4P1
 */

    	/* A liter is 0.264179 gallons. Write a program that will read in the number of liters of gasoline consumed by the user’s car 
	and the number of miles traveled by the car and will then output the number of miles per gallon the car delivered. 
	Your program should allow the user to repeat this calculation as often as the user wishes. 
	Define a function to compute the number of miles per gallon. 
	Your program should use a globally defined constant for the number of liters per gallon. */


//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
const float GPL = 0.264179;	//Gallons in a liter

//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float LOGC;     //Leiters of Gasoline Consumed
    float mTrav;    //Miles traveled
    float MPG;      //Miles per gallon
    char again;     //Yes or no, if the user wants to go again.
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    do
    {
	cout << "Enter number of liters of gasoline:\n" << endl;
	cin >> LOGC;
	cout << "Enter number of miles traveled:\n" << endl;
	cin >> mTrav;
	cout << "miles per gallon:" << endl;
	cout << mTrav / (LOGC * GPL) << endl;
	cout << "Again:" << endl;
	cin >> again;
	if(again == 'Y' || again == 'y')
		cout << endl;
    } while (again == 'Y' || again == 'y');
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}