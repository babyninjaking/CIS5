/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 20, 2021
 * Purpose:  Savitch_9thEd_Chap3_PracProb4_CompatibleSigns
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
    string sign1, sign2;    //Astrology sign inputs
    string elem1, elem2;      //Elements of the signs
    
    //Initialize Variables
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> sign1;
    cin >> sign2;
    
    //Map Inputs to Outputs -> Process
        //Finds sign for input 1
    if (sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius")
        elem1 = "Fire";
    else if (sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn")
        elem1 = "Earth";
    else if (sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius")
        elem1 = "Air";
    else if (sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces")
        elem1 = "Water";
    else
        cout << "ERROR";
    
        //Finds sign for input 2
    if (sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius")
        elem2 = "Fire";
    else if (sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn")
        elem2 = "Earth";
    else if (sign2 == "Gemini" || sign2 == "Libra" || sign2 == "Aquarius")
        elem2 = "Air";
    else if (sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces")
        elem2 = "Water";
    else
        cout << "ERROR.";
    
        //Processes signs for output
    if (elem1 == elem2)
        cout << sign1 << " and " << sign2 << " are compatible " << elem1 << " signs.";
    else
        cout << sign1 << " and " << sign2 << " are not compatible signs.";
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}