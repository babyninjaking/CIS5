/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 10, 2021
 * Purpose:  Gaddis Ch2 P4
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
    float   charge, // Restaurant bill
            taxP, //Tax percent
            taxAll, //Tax amount
            tipP, //Tip percent
            tipAll, //Tip amount
            bill; //Total bill
    //Initialize Variables
    charge=88.67;
    taxP=0.0675;
    tipP=0.2;
    //Map Inputs to Outputs -> Process
    taxAll=charge*taxP;
    tipAll=(taxAll+charge)*tipP;
    bill=charge+taxAll+tipAll;
    //Display Inputs/Outputs
    cout << "Here is your bill:\n"
        "Meal cost = $" << charge <<endl;
    cout << "Tax = $" << taxAll <<endl;
    cout << "Tip = $" << tipAll <<endl;
    cout << "Total Bill = $" << bill <<endl;
    //Exit the Program - Cleanup
    return 0;
}