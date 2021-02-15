/* 
 * Author: Jason Wilmot
 * Created on 2/8/21
 * Purpose:  Ga9EdC7P9
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed

    //Declare Variables
    const int SIZE = 7;
    long empId[SIZE] = {5658845, 4520125, 7895122,  //Employee ID's
                        8777541, 8451277, 1302850,
                        7580489};
    int hours[SIZE];    //Hours
    float payRate[SIZE];    //Pay rate
    float wages[SIZE];  //wages
    
    //Initialize Variables
    for(int n = 0; n < SIZE; n++){
        cout << "Enter employee " << empId[n] <<"'s pay rate:" << endl;
        cin >> payRate[n];
        cout << "Enter employee " << empId[n] <<"'s hours work:" << endl;
        cin >> wages[n];
    }
    
    //Process/Map inputs to outputs
    
    //Output data
    cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
    
     for(int n = 0; n < SIZE; n++)
        cout <<  "Employee " << empId[n] << "'s gross pay $" << payRate[n]*wages[n] << endl;
    
    //Exit stage right!
    return 0;
}