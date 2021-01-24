/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 20, 2021
 * Purpose:  Gaddis_9thEd_Chap3_Prob8_Insurance
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
    int hVal; //value of the home.
    float iPer; //percent that the home is insured at.
    float iTtl; //total insurance needed.
    
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>hVal;
    iPer = 0.8;
    
    //Map inputs -> outputs
    iTtl = iPer * hVal;
    
    //Display the outputs
    cout<<"You need $"<<iTtl<<" of insurance.";
    
    //Exit stage right or left!
    return 0;
}