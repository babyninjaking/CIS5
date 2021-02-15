/* 
 * Author: Jason Wilmot
 * Created on 2/8/21
 * Purpose:  Ga9EdC8P2
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
    int playNum[10] = {13579, 26791, 26792, 33445, 55555,
                       62483, 77777, 79422, 85647, 93121};
    int winNum;
    bool hasWon;
    
    //Initialize Variables
    cout << "Enter the winning number:" << endl;
    cin >> winNum;
    
    for (int n = 0; n < 10; n++) {
        if (playNum[n] == winNum) {
            cout << "Congratulations you have won!";
            hasWon = true;
        }
    }
    
    if (hasWon != true)
        cout << "No winning numbers.";
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}