/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 20, 2021
 * Purpose:  Gaddis_9thEd_Chap4_Prob8_SortNames
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
    string name1, name2, name3;	//Names inputed
    string out1, out2, out3;	//Names outputed
    char char1, char2, char3;	//Name first letters

    //Initialize Variables
    cout << "Sorting Names" << endl;
    cout << "Input 3 names" << endl;
    getline(cin, name1);
    getline(cin, name2);
    getline(cin, name3);
    
    char1 = name1[0];
    char2 = name2[0];
    char3 = name3[0];
    
    //Map Inputs to Outputs -> Process
    // If the first number is less then the other two, put name1 first.  

if (char1 < char2 && char1 < char3) {
	out1 = name1;
		if (char2 < char3) {
			out2=name2;
			out3=name3;
		}
		else {
			out2=name3;
			out3=name2;
		}
	}
/*If the second number is less than the first, compare the second to the third.
If the also third is greater than the second, output the second.  Otherwise output the third */

    else if (char2 < char3 && char2 < char1) {
	out1 = name2;
	if (char1 < char3) {
		out2 = name1;
		out3 = name3;
	}
	else {
		out2 = name3;
		out3 = name1;
	}
    }
    else {
	out1 = name3;
	if (char1 < char2){
		out2 = name1;
		out3 = name2;
        }
	else {
		out2 = name2;
		out3 = name1;
        }
    }

    
    //Display Inputs/Outputs
    cout << out1 << endl;
    cout << out2 << endl;
    cout << out3;
    //Exit the Program - Cleanup
    return 0;
}