/* 
 * Author: Jason Wilmot
 * Created on: Januaty 26th, 2021
 * Purpose:  Factorial
 */

    /*Create an integer function as indicated with the template, that outputs the factorial.
    n! = 1 * 2 * 3 * ... (n-1) * (n)
    Run the template to determine the required prompt and output format. */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int x);         //Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int input;  //User input
    
    //Initialize Variables
    cout << "This program calculates the factorial using a function prototype found in the template for this problem." << endl;
    cout << "Input the number for the function." << endl;
    cin >> input;
    
    //Process/Map inputs to outputs
    
    //Output data
    cout << input << "! = " << fctrl(input);
    
    //Exit stage right!
    return 0;
}

int fctrl(int x)
{
    int n;      //Couter
    int output = 1; //Function Output
    for (n = 1; n <= x; n++)
        output = output * n;
    return output;
}