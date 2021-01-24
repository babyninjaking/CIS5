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
    float   gal, //Total gallons in the tank
            mpgTwn, //MPG driving in town
            mpgHwy, //MPG on highway
            distTwn, //Total distance in town per tank
            distHwy; //Total distance on highway per tank
    //Initialize Variables
            gal=20,
            mpgTwn=23.5,
            mpgHwy=28.9;
    //Map Inputs to Outputs -> Process
            distTwn=gal*mpgTwn,
            distHwy=gal*mpgHwy;
    //Display Inputs/Outputs
            cout << "The car can travel a total of " << distTwn <<" miles in town, and " << distHwy << " miles on the highway.";
    //Exit the Program - Cleanup
    return 0;
}