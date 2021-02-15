/* 
 * Author: Jason Wilmot
 * Created on 2/8/21
 * Purpose:  Ga9EdC7P1
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
    int nums[10];
    int low, high;
    
    //Initialize Variables
    cout << "Enter 10 integers:" << endl;
    
    for(int n = 0; n < 10; n++)
        cin >> nums[n];
    
    low = nums[0];       //Make sure we don't die to function defaults
    high = nums[0];
    
    //Process/Map inputs to outputs
    for(int n = 0; n < 10; n++){    //check all numbers
        if(nums[n] < low)           //check for low numbers
            low = nums[n];
        if(nums[n] > high)          //check for high numbers
            high = nums[n];
    }
    
    //Output data
    cout << high << " is the highest number." << endl;
    cout << low << " is the lowest number.";
    
    //Exit stage right!
    return 0;
}