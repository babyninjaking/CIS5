/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 20, 2021
 * Purpose:  Savitch_9thEd_Chap2_Prob1_DietCoke
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
    float gPerLb; 	//Grams per lb
    float gPerC; 	//Grams of sweetner per can
    int asRate;         //Max ratio of artifical sweetner as % of body weight
    float wLb;          //Weight in lb
    int cTtl;           //Total cans that can can be consumed before death
    
    //Initialize or input i.e. set variable values
    gPerLb = 453.592;
    asRate = 7;         // 1/7 is the ratio at which a creature dies from 
    gPerC = 35 * 0.01f;
    cout << "Program to calculate the limit of Soda Pop Consumption.\n";
    cout << "Input the desired dieters weight in lbs.\n";
    cin >> wLb;
    
    //Map inputs -> outputs
    cTtl = ((wLb * gPerLb) / asRate ) / gPerC;
    
    //Display the outputs
    cout << "The maximum number of soda pop cans\n" ;
    cout << "which can be consumed is " << cTtl << " cans";

    //Exit stage right or left!
    return 0;
}