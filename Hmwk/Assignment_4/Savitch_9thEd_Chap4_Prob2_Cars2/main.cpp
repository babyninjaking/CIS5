/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 23, 2021
 * Purpose:  Gaddis_9thEd_Chap4_Prob14_Race
 */

	/* Modify your program from Sav9EdC4P1 so that it will take input data for two cars 
	and output the number of miles per gallon delivered by each car. 
	Your program will also announce which car has the best fuel efficiency (highest number of miles per gallon). */

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
    float LOGC1;    //Leiters of Gasoline Consumed
    float mTrav1;   //Miles traveled
    float MPG1;     //Miles per gallon
    float LOGC2;    //Leiters of Gasoline Consumed
    float mTrav2;   //Miles traveled
    float MPG2;     //Miles per gallon
    char again;     //Yes or no, if the user wants to go again.
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    do
    {   
	cout << "Car 1" << endl;					//Car 1
	cout << "Enter number of liters of gasoline:" << endl;
	cin >> LOGC1;
	cout << "Enter number of miles traveled:" << endl;
	cin >> mTrav1;
	cout << "miles per gallon: ";
	MPG1 = mTrav1 / (LOGC1 * GPL);
	cout << MPG1 << endl;
	cout << endl;

	cout << "Car 2" << endl;					//Car2
	cout << "Enter number of liters of gasoline:" << endl;
	cin >> LOGC2;
	cout << "Enter number of miles traveled:" << endl;
	cin >> mTrav2;
	cout << "miles per gallon: ";
	MPG2 = mTrav2 / (LOGC2 * GPL);
	cout << MPG2 << endl;
	cout << endl;

	if (MPG1 > MPG2)
		cout << "Car 1 is more fuel efficient\n" << endl;
	else
		cout << "Car 2 is more fuel efficient\n" << endl;
	
	cout << "Again:" << endl;
	cin >> again;
	if(again == 'Y' || again == 'y')
		cout << endl;
    } while (again == 'Y' || again == 'y');
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}