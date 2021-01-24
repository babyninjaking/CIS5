/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 23, 2021
 * Purpose:  Sav9EdC4P9
 */

	/* Find the max of either two or three parameters of type float and returns the largest of them. 
	Display answer to one decimal place. For function with two parameter, use first two inputs. */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants

//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
    float big(float n1, float n2);
    // Returns the larger number of two numbers

    float big(float n1, float n2, float n3);
    // Returns the larger number of three numbers

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float num1, num2, num3;
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout << "Enter first number:" << endl;
    cin >> num1;
    cout << endl;

    cout << "Enter Second number:" << endl;
    cin >> num2;
    cout << endl;

    cout << "Enter third number:" << endl;
    cin >> num3;
    cout << endl;

    cout << "Largest number from two parameter function:" << endl;
    cout << big(num1, num2) << endl;
    cout << endl;

    cout << "Largest number from three parameter function:" << endl;
    cout << big(num1, num2, num3) << endl;

    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

float big(float n1, float n2)
{
	if (n1 > n2)
		return n1;
	else
		return n2; 
}

float big(float n1, float n2, float n3)
{
	if (n1 > n2 && n1 > n3)
		return n1;
	else if (n2 > n1 && n2 > n3)
		return n2;
	else
		return n3;
}

