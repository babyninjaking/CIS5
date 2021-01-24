/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 23, 2021
 * Purpose:  Gaddis_9thEd_Chap4_Prob14_Race
 */

	// Write a program to Display the following pattern given an input of 10.
	// Outputs an increase from 1 to 10 the decreases from 10 to 1.

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
    int usrInp;	//User input
    int row;	//Row that the program is on
    int col;	//Column
    
    //Initialize Variables
    cin >> usrInp;
    
    //Map Inputs to Outputs -> Process
    
    
    //Display Inputs/Outputs
    for (row = 1 ; row <= usrInp ; row++)		//First half of the triangle
    {
	for (col = 1 ; col <= row ; col++)
		cout << '+';
	cout << "\n\n";
    }

    for (row = usrInp ; row > 1 ; row--)		//Second half of the triangle
    {   
	for (col = row ; col > 0; col--)
		cout << '+';
	cout << "\n\n";
    }

    cout << '+';					//Final +

    
    //Exit the Program - Cleanup
    return 0;
}