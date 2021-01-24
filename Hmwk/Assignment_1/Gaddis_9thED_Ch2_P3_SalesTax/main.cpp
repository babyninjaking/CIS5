/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 10, 2021
 * Purpose:  Gaddis Ch2 P3
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
    int pchsCst; //Purchase Cost
    float   stTax, //State sales tax
            ctyTax, //County sales tax
            ttlTax, //total tax
            ttlCst; //Total cost
    //Initialize Variables
    pchsCst=95,
    stTax=0.04,
    ctyTax=0.02;
    //Map Inputs to Outputs -> Process
    ttlTax=(ctyTax+stTax)*pchsCst;
    //Display Inputs/Outputs
    cout<< "The total tax is $" << ttlTax <<".";
    //Exit the Program - Cleanup
    return 0;
}