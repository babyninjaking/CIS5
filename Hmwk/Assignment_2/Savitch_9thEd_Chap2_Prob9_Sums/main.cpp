/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 20, 2021
 * Purpose:  Savitch_9thEd_Chap2_Prob9_Sums
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10;	//Input variables
    int y1, y2, y3, y4, y5, y6, y7, y8, y9, y10;	//Temp variables for calculations
    int nSum; 	//negative sum
    int pSum;	//positive sum
    int tSum;	//total sum
    
    //Initialize or input i.e. set variable values
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6 >> x7 >> x8 >> x9 >> x10;
    tSum = x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9 + x10;

    /* Check each number and see if it is less then or greater than zero
    then, set the temporary variables y to equal the inputs or 0 based on
    the sinage of the input. */

    if (x1 > 0)         //removes negative numbers
    	y1 = x1;
    else y1 = 0;

    if (x2 > 0)
    	y2 = x2;
    else y2 = 0;
    
    if (x3 > 0)
    	y3 = x3;
    else y3 = 0;

    if (x4 > 0)
    	y4 = x4;
    else y4 = 0;
    
    if (x5 > 0)
    	y5 = x5;
    else y5 = 0;

    if (x6 > 0)
    	y6 = x6;
    else y6 = 0;
    
    if (x7 > 0)
    	y7 = x7;
    else y7 = 0;

    if (x8 > 0)
    	y8 = x8;
    else y8 = 0;
    
    if (x9 > 0)
    	y9 = x9;
    else y9 = 0;

    if (x10 > 0)
    	y10 = x10;
    else y10 = 0;
    
    pSum = y1 + y2 + y3 + y4 + y5 + y6 + y7 + y8 + y9 + y10;
    
    
    if (x1 < 0)         //removes positive numbers
    	y1 = x1;
    else y1 = 0;

    if (x2 < 0)
    	y2 = x2;
    else y2 = 0;
    
    if (x3 < 0)
    	y3 = x3;
    else y3 = 0;

    if (x4 < 0)
    	y4 = x4;
    else y4 = 0;
    
    if (x5 < 0)
    	y5 = x5;
    else y5 = 0;

    if (x6 < 0)
    	y6 = x6;
    else y6 = 0;
    
    if (x7 < 0)
    	y7 = x7;
    else y7 = 0;

    if (x8 < 0)
    	y8 = x8;
    else y8 = 0;
    
    if (x9 < 0)
    	y9 = x9;
    else y9 = 0;

    if (x10 < 0)
    	y10 = x10;
    else y10 = 0;
    
    nSum = y1 + y2 + y3 + y4 + y5 + y6 + y7 + y8 + y9 + y10;

    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Negative sum = " << nSum << endl;
    cout << "Positive sum =  " << pSum << endl;
    cout << "Total sum    =   " << tSum;
    
    //Exit stage right or left!
    return 0;
}