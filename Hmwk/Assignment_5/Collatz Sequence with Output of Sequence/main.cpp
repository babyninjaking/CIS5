/* 
 * Author: Jason Wilmot
 * Created on: January 26th, 2021
 * Purpose: Collatz Sequence w/ Output
 */
 
    /*Count from the start of the sequence to the end and output its length.
    When even divide by 2, when odd multiply by 3 and add 1;
    For example
    22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
    The length of the sequence is 16! */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int x); //3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int input;  //User input
    int steps;  //Number of steps
    
    //Initialize Variables
    cout << "Collatz Conjecture Test" << endl;
    cout << "Input a sequence start" << endl;
    cin >> input;
    
    //Process/Map inputs to outputs
    steps = collatz(input);
    
    //Output data
    cout << "Sequence start of "<< input << " cycles to 1 in ";
    cout << steps << " steps";
    
    //Exit stage right!
    return 0;
}

int collatz(int x){
    int n = 1;  //counter
    cout << x << ", ";
    
    while (x != 1) 
    {
        if (x%2 == 1)           //Number processor
            x = (3 * x) + 1;
        else
            x = x / 2;
        
        cout << x;              //Number list output
        if (x != 1)
            cout << ", ";
        else
            cout << endl;
        
        n++;                    //Cycle counter
    }
    return n;
}