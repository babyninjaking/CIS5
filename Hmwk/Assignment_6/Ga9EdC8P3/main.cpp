/* 
 * Author: Jason Wilmot
 * Created on 2/8/21
 * Purpose:  Ga9EdC8P3
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool hasWon(int nums[], int arySize, int winNum);   //Tests if player has won

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed

    //Declare Variables
    int playNum[10] = {13579, 26791, 26792, 33445, 55555,
                       62483, 77777, 79422, 85647, 93121};
    int winNum;
    
    //Initialize Variables
    cout << "Enter the winning number:" << endl;
    cin >> winNum;
    
    if (hasWon(playNum, 10, winNum))
        cout << "Congratulations you have won!";
    else
        cout << "No winning numbers.";
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}

bool hasWon(int nums[], int arySize, int winNum){
    int first = 0, //first array element
        last = arySize-1, //last array element
        middle;
        
    while(first <= last) {
        middle = (first + last) / 2;
        if (nums[middle] == winNum)
            return true;
        else if (nums[middle] > winNum)
            last = middle - 1;
        else if (nums[middle] < winNum)
            first = middle + 1;
    }
    return false;
}