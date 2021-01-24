/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 20, 2021
 * Purpose:  Gaddis_9thEd_Chap4_Prob23_ISP
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    char pType; //plan type
    int hours; 
    float bill;
    
    //Initialize Variables
    cout << "ISP Bill" << endl;
    cout << "Input Package and Hours" << endl;
    cin >> pType >> hours;
    
    //Map Inputs to Outputs -> Process
    if (hours > 744)
        cout << "INVALID INPUT: Monthly hours cannot exceed 744.";
    else if (pType == 'A') {
        if (hours <= 10)
            cout << "Bill = $ 9.95";
        else
            cout << "Bill = $ " << fixed << showpoint << setprecision(2) << 9.95 + 2 * (hours - 10);
    }
    else if (pType == 'B') {
        if (hours <= 20)
            cout << "Bill = $ 14.95";
        else
            cout << "Bill = $ " << fixed << showpoint << setprecision(2) << 14.95 + 1 * (hours - 20);
    }
    else if (pType == 'C')
        cout << "Bill = $ 19.95";
    else
        cout << "INVALID INPUT: Please input an existing plan.";
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}