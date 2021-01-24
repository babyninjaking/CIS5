/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 20, 2021
 * Purpose:  Gaddis_9thEd_Chap3_Prob7_Cookies
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
    int cNum; //number of cookies
    int cCal; //chalories in 1 cookie
    int tCal; //total chalories consumed
    
    //Initialize or input i.e. set variable values
    cCal = 75;
    
    //Map inputs -> outputs
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cNum;
    tCal=cCal*cNum;
    
    //Display the outputs
    cout<<"You consumed "<<tCal<<" calories.";
    
    //Exit stage right or left!
    return 0;
}