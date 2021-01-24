/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 4, 2021
 * Purpose:  CPP Template 
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
    string name1, name2, name3;
    float time1, time2, time3;
    
    //Initialize Variables                                                              //I COULD NOT GET THIS PART TO WORK
    cout << "Please input an athlete's name followed buy their time." << endl;
    cin >> name1;
    cin >> time1;
    cout << "Another.." << endl;
    cin >> name2;
    cin >> time2;
    cout << "One more..." << endl;
    cin >> name3;
    cin >> time3;
    
    //Map Inputs to Outputs -> Process
    cout << "Their names and times in order are..." << endl;
    
    if (time1 < time2 && time1 < time3) {
	cout << name1 << "     " << time1 << endl;
		if (time2 < time3) {
			cout << name2 << "     " << time2 << endl;
			cout << name3 << "     " << time3 << endl;
		}
		else {
			cout << name3 << "     " << time3 << endl;
			cout << name2 << "     " << time2 << endl;
		}
	}
    else if (time2 < time3 && time2 < time1) {
	cout << name2 << "     " << time2 << endl;
	if (time1 < time3) {
		cout << name1 << "     " << time1 << endl;
		cout << name3 << "     " << time3 << endl;
	}
	else {
		cout << name3 << "     " << time3 << endl;
		cout << name1 << "     " << time1 << endl;
	}
    }
    else {
	cout << name3 << "     " << time3 << endl;
	if (time1 < time2){
		cout << name1 << "     " << time1 << endl;
		cout << name2 << "     " << time2 << endl;
        }
	else {
		cout << name2 << "     " << time2 << endl;
		cout << name1 << "     " << time1 << endl;
        }
    }
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}