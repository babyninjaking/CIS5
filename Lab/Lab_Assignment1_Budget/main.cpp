/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  CPP Template 
 *           To be copied for each Assignment Problem
 */

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
    float   milBdgt,
            fedBdgt,
            mlPrcnt;
    
    //Initialize Variables
    milBdgt=7.0e11;    //Military Budget = 700 Billion   
    fedBdgt=4.1e12;    //Federal Budget  = 4.1 Trillion
    
    //Map Inputs to Outputs -> Process
    mlPrcnt=(milBdgt/fedBdgt)*100;
    
    //Display Inputs/Outputs
    cout<< "The Military Budget is "<< mlPrcnt << "% of the Federal Budget.";
    
    //Exit the Program - Cleanup
    return 0;
}