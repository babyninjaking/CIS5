/* 
 * Author: Jason Wilmot
 * Created on: January 26th, 2021
 * Purpose: isPrime
 */

    /*Determine if the input integer is prime or not.
    If prime, return true.
    If not prime, return false. */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int x);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int input;  //User input
    
    //Initialize Variables
    cout << "Input a number to test if Prime." << endl;
    cin >> input;
    
    //Process/Map inputs to outputs
    if (isPrime(input) == 1)
        cout << input << " is prime.";
    else
        cout << input << " is not prime.";
    
    //Output data
    
    //Exit stage right!
    return 0;
}

bool isPrime(int x)
{
    int n;  //Intermediate variable
    
    for(n = 2; n < x; n++)   //This function divides a number by every number excludeing itself and 1, checking for a remainder.
    {
        if (x % n == 0)
            return 0;
        if (x == n)
            return 1;
    }
}