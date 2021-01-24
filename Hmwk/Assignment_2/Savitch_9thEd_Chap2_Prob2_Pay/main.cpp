/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 20, 2021
 * Purpose: Savitch_9thEd_Chap2_Prob2_Pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float anSlry;   //anual salary
    float pInc;     //pay increase
    float rPay;     //retroactive pay
    float mSlry;    //monthly salary
    int len;        //length of each variable
    
    //Initialize or input i.e. set variable values
    pInc = 0.076;
    cout << "Input previous annual salary." <<endl;
    cin >> anSlry;
    
    //Map inputs -> outputs
    rPay = anSlry * pInc / 2;
    anSlry = anSlry * (1 + pInc);
    mSlry = anSlry / 12;
    
    //Display the outputs
    len = log10(rPay) + 3;
    cout << "Retroactive pay    = $  " << showpoint << setprecision(len) << rPay << endl;
    len = log10(anSlry) + 3;
    cout << "New annual salary  = $" << showpoint << setprecision(len) << anSlry << endl;
    len = log10(mSlry) + 3;
    cout << "New monthly salary = $ " << showpoint << setprecision(len) << mSlry;

    //Exit stage right or left!
    return 0;
}