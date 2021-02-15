/* 
 * Author: Jason Wilmot
 * Created on: January 26th, 2021
 * Purpose:  Sav9EdC5P12
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int hrs2min(int hour, int min, char AMPM);   //Converts time into minutes
void min2std(int input);                     //Converts minuets into standard time

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int hour, min;          //Time variables
    char AMPM;              //AM or PM
    int wait;               //Number of minutes waited
    int nTime;              //New time in minutes
    char again = 'y';             //redo checker
    
    //Initialize Variables
    while (again == 'y' || again == 'Y')
    {
        cout << "Enter hour:\n\n";                 //Recive user inputs
        cin >> hour;
        cout << "Enter minutes:\n\n";
        cin >> min;
        cout << "Enter A for AM, P for PM:\n\n";
        cin >> AMPM;
        cout << "Enter waiting time:\n\n";
        cin >> wait;
        
        cout << "Current time = ";                  //Output current time
        cout << hour << ":" << min << " ";
        if (AMPM == 'A')
            cout << "AM";
        else
            cout << "PM";
        cout << endl;
        
        nTime = hrs2min(hour, min, AMPM) + wait;    //Calculate new time in minutes
        
        cout << "Time after waiting period = ";
        min2std(nTime);                              //Convert new time to standard time
        cout << endl << endl;
        
        cout << "Again:\n";
        cin >> again;
        
        if (again == 'y' || again == 'Y')
            cout << endl;
    }
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}


int hrs2min(int hour, int min, char AMPM)
{
    int output;
    
    output = hour * 60 + min;
    
    if (AMPM == 'P')
        output = output + 12 * 60;
    
    return output;
}

void min2std(int input)
{
    int hour, min;
    char AMPM;
    
    hour = input / 60;
    min = input % 60;
    
    if (hour > 12)
    {
        hour = hour - 12;
        AMPM = 'P';
    }
    
    if (hour < 10)          //Output new time
        cout << 0;
    cout << hour << ":";
    
    if (min < 10)
        cout << 0;
    cout << min << " ";
    
    if (AMPM == 'P')
        cout << "PM";
    else
        cout << "AM";
}