/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 20, 2021
 * Purpose:  Gaddis_9thEd_Chap4_Prob11_Books
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
    int bNum; 	//number of books
    int points;	//number of points
    
    //Initialize Variables
    cout << "Book Worm Points" << endl;
    cout << "Input the number of books purchased this month." << endl;
    cin >> bNum;
            
    //Map Inputs to Outputs -> Process
    if (bNum == 0)
	points = 0;
    else if (bNum == 1)
	points = 5;
    else if (bNum == 2)
	points = 15;
    else if (bNum == 3)
	points = 30;
    else if (bNum >= 4)
	points = 60;
    
    //Display Inputs/Outputs
    cout << "Books purchased =  " << bNum << endl;
    cout << "Points earned   = " << points;
    
    //Exit the Program - Cleanup
    return 0;
}