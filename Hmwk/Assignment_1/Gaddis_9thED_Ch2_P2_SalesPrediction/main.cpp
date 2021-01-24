/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 10, 2021
 * Purpose:  Gaddis Ch2 P2
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
    float ecPcnt, //The percentage of total sales made by the East Coast division
        Sales, //Total sales
        ecSales; //Total sales made by the East Coast division
    //Initialize Variables
    ecPcnt=0.58,
    Sales=8.6,
    //Map Inputs to Outputs -> Process
    ecSales=Sales*ecPcnt;
    //Display Inputs/Outputs
    cout<<"The East Coast division's total sales amounted to $"<< ecSales <<" million this year.";
    //Exit the Program - Cleanup
    return 0;
}