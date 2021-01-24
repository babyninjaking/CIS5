/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on January 4, 2021
 * Purpose:  CPP Template 
 */

//System Libraries
#include <iostream> //I/O Library
#include <cstring>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    char plyr1, plyr2; //Players 1 and 2
    
    //Initialize Variables
    cout << "Rock Paper Scissors Game" << endl;
    cout << "Input Player 1 and Player 2 Choices" << endl;
    cin >> plyr1 >> plyr2;
    plyr1 = tolower(plyr1);
    plyr2 = tolower(plyr2);
    
    //Map Inputs to Outputs -> Process
    if (plyr1 == plyr2)
        cout << "Nobody wins.";
    else if (plyr1 == 'p' && plyr2 == 'r' || plyr1 == 'r' && plyr2 == 'p')
        cout << "Paper covers rock.";
    else if (plyr1 == 's' && plyr2 == 'r' || plyr1 == 'r' && plyr2 == 's')
        cout << "Rock breaks scissors.";
    else if (plyr1 == 'p' && plyr2 == 's' || plyr1 == 's' && plyr2 == 'p')
        cout << "Scissors cuts paper.";
    else
        cout << "INPUT ERROR, TRY AGAIN.";
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}