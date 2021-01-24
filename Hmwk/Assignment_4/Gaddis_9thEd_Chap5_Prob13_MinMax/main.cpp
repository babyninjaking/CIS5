/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 23, 2021
 * Purpose:  Gaddis_9thEd_Chap5_Prob13_MinMax
 */

	/* Write a program with a loop that lets the user enter a series of integers. The user
	should enter -99 to signal the end of the series. After all the numbers have been
	entered, the program should display the largest and smallest numbers entered. */

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
    int inpNum;		//User input number
    int bigNum = 0;		//Largest number
    int smolNum;		//Smallest number
    
    //Initialize Variables
    cin >> inpNum;
    
    //Map Inputs to Outputs -> Process
    while (inpNum != -99)	//compare and evaluate the new number
    {
	if (inpNum >= bigNum)
		bigNum = inpNum;
	else if (inpNum <= smolNum)
		smolNum = inpNum;
	cin >> inpNum;
    }
    
    //Display Inputs/Outputs
    cout << "Smallest number in the series is " << smolNum << endl;
    cout << "Largest number in the series is " << bigNum;

    //Exit the Program - Cleanup
    return 0;
}