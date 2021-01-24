/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 23, 2021
 * Purpose:  Gaddis_9thEd_Chap5_Prob22_Rectangle
 */

	/* Write a program that asks the user for a positive integer no greater than 15. The program
	should then display a rectangle on the screen using the character ‘X’. The number
	entered by the user will be the length of each side of the rectangle. */

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
    int varX;	//User input
    int row;	//Rows of rectangle
    int col;	//Columns of rectangle
    char fill;	//Character that fills the rectangle
    
    //Initialize Variables
    cin >> varX;
    cin >> fill;
    
    //Map Inputs to Outputs -> Process
    if (varX > 0 && varX <= 15)	//Input Validation
    {
	for (row = varX - 1 ; row > 0 ; row--)
	{
		for (col = varX ; col > 0 ; col--)
			cout << fill;
		cout << endl;
	}
	for (col = varX ; col > 0 ; col--)
			cout << fill;
    }
    else
	cout << "Input a number between 1 and 15.";
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}