/* 
 * Author: Jason Wilmot
 * Created on 2/8/21
 * Purpose:  Ga9EdC7P3
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed

    //Declare Variables
    string salsa[] = {"mild", "medium", "sweet", "hot", "zesty"};
    float sales[5];
    float ttlSls = 0; //Total Sales
    int highNum, lowNum;  //Highest and lowest number place in array
    float high, low;  //Highest and lowest sales
    
    //Initialize Variables
    for(int n = 0; n < 5; n++){
        cout << "Enter the sales of " << salsa[n] << " salsa:$" << endl;    //Prompt user input for sales
        cin >> sales[n];
        ttlSls += sales[n]; //Add sales to total sales
    }
    
    highNum = 0;                //Makes sure that the we don't get a default return for a number
    high = sales[highNum];
    
    lowNum = 0;
    low = sales[lowNum];
    
    for(int n = 0; n < 5; n++){ //Checks sales array for the biggest and smallest sales.
        if(sales[n] > high){    
            high = sales[n];
            highNum = n;    
        }
        if(sales[n] < low){
            low = sales[n];
            lowNum = n;
        }
    }
    
    //Process/Map inputs to outputs
    
    //Output data
    
    cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
    
    cout << "Type     Sales" << endl;
    cout << "mild     $" << sales[0] << endl;
    cout << "medium   $" << sales[1] << endl;
    cout << "sweet    $" << sales[2] << endl;
    cout << "hot      $" << sales[3] << endl;
    cout << "zesty    $" << sales[4] << endl;
    cout << "Total Sales was $" << ttlSls << endl;
    cout << salsa[lowNum] << " was the lowest selling product." << endl;
    cout << salsa[highNum] << " was the highest selling product.";
    
    //Exit stage right!
    return 0;
}