/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 23, 2021
 * Purpose:  Gaddis_9thEd_Chap5_Prob1_Sum
 */
        /* Write a program that asks the user for a positive integer value. The program should
	use a loop to get the sum of all the integers from 1 up to the number entered. For
	example, if the user enters 50, the loop will find the sum of 1, 2, 3, 4, ... 50. */



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
    int inpNum, sum;  	//User input number and total sum.
    
    //Initialize Variables
    cin >> inpNum;
    sum = inpNum;

    //Map Inputs to Outputs -> Process
    while (inpNum > 0)
    {
	sum = sum + --inpNum;
    }
    
    //Display Inputs/Outputs
    cout << "Sum = " << sum;
    
    //Exit the Program - Cleanup
    return 0;
}