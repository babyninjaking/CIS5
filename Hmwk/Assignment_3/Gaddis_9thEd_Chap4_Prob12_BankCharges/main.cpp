/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 4, 2021
 * Purpose:  CPP Template 
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
    float bal, cFee, nBal;  //Balance, checking fee, new balance
    float cNum, lbFee;        //Check number, low balance fee
    const float mFee = 10;    //Monthly fee
    
    //Initialize Variables
    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    cin >> bal >> cNum;
    
    //Map Inputs to Outputs -> Process
    if (bal < 400)
	lbFee = 15;
    else
	lbFee = 0;
    
    if (cNum >= 60)
	cFee = cNum * 0.04;
    else if (cNum >= 40)
        cFee = cNum * 0.06;
    else if (cNum >= 20)
        cFee = cNum * 0.08;
    else if (cNum >= 0)
        cFee = cNum * 0.10;
    else
        cNum = cFee = 0;
    
    nBal = bal - cFee - mFee - lbFee;
    
    if (nBal > 0){
        cout << "Balance     $   " << fixed << showpoint << setprecision(2) << bal << endl;
        cout << "Check Fee   $     " << fixed << showpoint << setprecision(2) << cFee << endl;
        cout << "Monthly Fee $    " << fixed << showpoint << setprecision(2) << mFee << endl;
        cout << "Low Balance $    " << fixed << showpoint << setprecision(2) << lbFee << endl;
        cout << "New Balance $    " << fixed << showpoint << setprecision(2) << nBal;
    }
    else {
        cout << "URGENT:  YOUR ACCOUT IS OVERDRAWN" << endl;
        cout << "Balance     $   " << fixed << showpoint << setprecision(2) << bal << endl;
        cout << "Check Fee   $     " << fixed << showpoint << setprecision(2) << cFee << endl;
        cout << "Monthly Fee $    " << fixed << showpoint << setprecision(2) << mFee << endl;
        cout << "Low Balance $    " << fixed << showpoint << setprecision(2) << lbFee << endl;
        cout << "New Balance $    " << fixed << showpoint << setprecision(2) << nBal;
    }       
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}