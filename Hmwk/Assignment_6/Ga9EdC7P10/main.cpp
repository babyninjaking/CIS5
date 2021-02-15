/* 
 * Author: Jason Wilmot
 * Created on 2/8/21
 * Purpose:  Ga9EdC7P10
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
    const char crctAns[20] = {      //Correct Answers
            'A','D','B','B','C',
            'B','A','B','C','D',
            'A','C','D','B','D',
            'C','C','A','D','B'};
    char ans[20];   //User answers
    int wrngNum[20];    //The question number of incorrect user answers
    int ttlCrct = 0;    //Total correct
    int ttlWrng = 0;    //Total wrong
    
    //Initialize Variables
    cout << "Enter the student's test answers:" << endl;
    for(int n = 0; n < 20; n++) {
        cin >> ans[n];
        if (ans[n] == crctAns[n])
            ttlCrct++;
        else {
            wrngNum[ttlWrng] = n + 1;
            ttlWrng++;
        }
    }
    
    //Process/Map inputs to outputs
    if (ttlCrct >= 15)
        cout << "The student passed." << endl;
    else
        cout << "The student failed." << endl;
    
    //Output data
    cout << "There were " << ttlCrct << " correct answers." << endl;
    cout << "There were " << ttlWrng << " incorrect answers." << endl;

    cout << "Incorrect questions:" << endl;
    for (int n = 0; n < ttlWrng; n++)
        cout << wrngNum[n] << endl;
    
    //Exit stage right!
    return 0;
}