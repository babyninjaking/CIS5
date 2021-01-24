/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 10, 2021
 * Purpose:  Gaddis Ch2 Q10
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
    unsigned short int    
            gal, //Number of gallons the car can hold
            dist, //Total distance the car can travel
            MPG; //Miles per gallon
    //Initialize Variables
    gal=15,
    dist=375;
    //Map Inputs to Outputs -> Process
    MPG=dist/gal;
    //Display Inputs/Outputs
    cout << "The MPG of the car is " << MPG;
    //Exit the Program - Cleanup
    return 0;
}