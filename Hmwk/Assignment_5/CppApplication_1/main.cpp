/* 
 * Author: Jason Wilmot
 * Created on: January 26th, 2021
 * Purpose:  Gaddis_9thEd_Chap6_Prob10_Average
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void getScre();
float calcAvg(int a,int b,int c,int d,int e);
int fndLwst(int a,int b,int c,int d,int e);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int a, b, c, d, e;  //test scores
    
    //Initialize Variables
    cout << "Find the Average of Test Scores" << endl;
    cout << "by removeing the lowest value." << endl;
    
    getScre();
    
    //Process/Map inputs to outputs
    
    //Output data
    cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
    cout << "The average test sore = ";
    
    //Exit stage right!
    return 0;
}

void getScre() 
{
    int a, b, c, d, e;  //test scores
  
    cout << "Input the 5 test scores." << endl;
    cin >> a >> b >> c >> d >> e;
    calcAvg(a,b,c,d,e);
}

float calcAvg(int a,int b,int c,int d,int e)
{
    cout << (a+b+c+d+e)/5;
    return (a+b+c+d+e)/5;
}