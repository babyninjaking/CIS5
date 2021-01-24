/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 20, 2021
 * Purpose:  Savitch_9thEd_Chap2_Prob5_Room
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
    int mxCp;   //Max capacity
    int nPpl;   //Number of people
    
    //Initialize or input i.e. set variable values
    cout << "Input the maximum room capacity and the number of people" << endl;
    cin >> mxCp >> nPpl;
    
    //Map inputs -> outputs
    
    //Display the outputs
    if (mxCp <= nPpl) {
	    cout << "Meeting cannot be held.\n";
	    cout << "Reduce number of people by " << nPpl - mxCp << " to avoid fire violation.";
    }
    else {
	    cout << "Meeting can be held.\n";
	    cout << "Increase number of people by " << mxCp - nPpl << " will be allowed without violation.";	
    }
    
    //Exit stage right or left!
    return 0;
}