/* 
 * Author: Jason Wilmot
 * Created on: Febuary 7, 2021
 * Purpose:  Recive and display text file inputs.
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Number Gererator
#include <ctime>     //Time to set the seed
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
unsigned short int d6();    //d6

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Variables
    string name;    //Character name
    
    //File set up
    ofstream outputFile;
    outputFile.open("Character Sheet.txt");
    
    cout << "Input your character's full name, and a stat sheet will be generated." << endl;
    getline(cin, name);
    
    //File outputs
    outputFile << name << endl;
    outputFile << "Strength:" << d6() + d6() + d6() << endl;
    outputFile << "Dexterity:" << d6() + d6() + d6() << endl;
    outputFile << "Constitution:" << d6() + d6() + d6() << endl;
    outputFile << "Wisdom:" << d6() + d6() + d6() << endl;
    outputFile << "Intelligence:" << d6() + d6() + d6() << endl;
    outputFile << "Charisma:" << d6() + d6() +d6() << endl;
    
    //Completion notice
    cout << "The stat sheet is ready!" << endl;
    
    //close file
    outputFile.close();
    return 0;
}

unsigned short int d6(){    //Rolls a 6 sided die
    unsigned short int d6;
    d6=rand()%6+1;    //[1,6]
    return d6;
}