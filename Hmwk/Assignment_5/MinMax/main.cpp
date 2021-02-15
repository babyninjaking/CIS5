/* 
 * Author: Jason Wilmot
 * Created on: January 26th, 2021
 * Purpose: MinMax Problem 
 */
    /*Create a function that inputs 3 integers and returns both the min and maximua.
    Use the prototype function supplied.
    Like the other problems complete the function and use in the solution. */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int n1,int n2,int n3);    //Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num1, num2, num3;   //User input variables
    
    //Initialize Variables
    cout << "Input 3 numbers" << endl;
    cin >> num1 >> num2 >> num3;
    
    //Process/Map inputs to outputs
    minmax(num1, num2, num3);
    
    //Output data
    
    //Exit stage right!
    return 0;
}

void minmax(int n1,int n2,int n3)
{
    if (n1 < n2 && n1 < n3)
		cout << "Min = " << n1;
	else if (n2 < n1 && n2 < n3)
		cout << "Min = " << n2;
	else
		cout << "Min = " << n3;
    cout << endl;
    
    if (n1 > n2 && n1 > n3)
		cout << "Max = " << n1;
	else if (n2 > n1 && n2 > n3)
		cout << "Max = " << n2;
	else
		cout << "Max = " << n3;
}