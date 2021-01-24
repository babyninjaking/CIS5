/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 20, 2021
 * Purpose:  Gaddis Ch3 Prob3 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int inp;
    float avg; 
    
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average.\n";
    cin>>inp;
    avg=inp;
    cin>>inp;
    avg=avg+inp;
    cin>>inp;
    avg=avg+inp;
    cin>>inp;
    avg=avg+inp;
    cin>>inp;
    avg=avg+inp;
    
    //Map inputs -> outputs
    avg=avg/5;
    
    //Display the outputs
    cout<<"The average = "<<setprecision(2)<<showpoint<<avg;
    //Exit stage right or left!
    return 0;
}