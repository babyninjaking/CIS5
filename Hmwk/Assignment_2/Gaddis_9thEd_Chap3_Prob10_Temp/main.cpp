/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 20, 2021
 * Purpose:  Gaddis_9thEd_Chap3_Prob10_Temp
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
    float fTemp; //Temp in Fahrenheit
    float cTemp; //Temp in celcius
    
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>fTemp;
    
    //Map inputs -> outputs
    cTemp = (fTemp-32)*5/9;
    
    //Display the outputs

    cout<<setprecision(4)<<showpoint<<fTemp<<" Degrees Fahrenheit = "<<setprecision(4)<<showpoint<<cTemp<<" Degrees Centigrade";
    
    //Exit stage right or left!
    return 0;
}