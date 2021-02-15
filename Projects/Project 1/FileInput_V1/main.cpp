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
//Combat score functions
short int aMod(unsigned short int aScore);     //Converts an ability score to an ability modifyer
unsigned short int proMod(unsigned short int level);    //Uses level to get proficiency mod
unsigned short int wpnDmg(unsigned short int wpnDie);  //Weapon damage based on die type

//Dice functions
unsigned short int d20();   //d20 dice roll
unsigned short int d12();   //d12 dice roll
unsigned short int d10();   //d10 dice roll
unsigned short int d8();    //d8 dice roll
unsigned short int d6();    //d6 dice roll
unsigned short int d4();    //d4 dice roll

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Variables
    unsigned short int aScore;  //ability score
    unsigned short int level;  //character level
    unsigned short int wpnDie;  //weapon die
    short int toHit;
    bool ready; //ready to continue
    unsigned short int AC;
    char again;
    
    //Prompt user to create file
    cout << "This section allows you to used saved character stats for an attack vs input." << endl;
    cout << "1. Create a text file named 'Saved_Stats.txt'." << endl;
    cout << "2. Input your character's strength or dexterity on the first line." << endl;
    cout << "3. Input your character's level on the second line." << endl;
    cout << "4. Enter the number of sides on your weapon die on the third line. (d12 = 12, d10 = 10, etc.)" << endl;
    cout << endl << "Is the file ready? 1 = Yes, 0 = No" << endl;
    do {
        cin >> ready;
        if (ready != 1)
            cout << "It's ok, take your time." << endl;
    } while (ready != 1);
    
    
    //File set up
    ifstream inputFile;
    inputFile.open("Saved_Stats.txt");
    
    cout << "Getting data from file..." << endl;
    
    //File inputs
    inputFile >> aScore;
    inputFile >> level;
    inputFile >> wpnDie;
    inputFile.close();
    
    cout << "Got it!" << endl;
    
     do {                                                                        //AC input 
        cout << endl << "What is the Armor Class (AC) of your opponent?" << endl;
        cout << "***This is the number to need to beat to land a hit." << endl;
        cout << "***EX: 10 is no armor, 18 is heavy armor." << endl;
        cin >> AC;
        
        if (AC > 26)    //Validity check
            cout << "That'll be a bit too hard to hit, try a lower number." <<endl;
        
    } while (AC > 26);

    do {                                                                        //Attack!
    cout << "You attack!" << endl;
    toHit = d20() + aMod(aScore) + proMod(level);
    if (toHit >= AC){                                                           //Hit or Miss
        cout << endl << "You hit with an " << toHit << "!" << endl;
        cout << "You deal " << wpnDmg(wpnDie) + aMod(aScore) << " damage!" << endl;
    }
    else
        cout << "You missed with an " << toHit << "..." << endl;
    
    cout << endl << "Attack again? (Y/N)"<< endl;                               //Again?
    cin >> again;

    } while (again == 'Y' || again == 'y');
    
    return 0;
}

short int aMod(unsigned short int aScore){
    return ((aScore/2) - 5);
}

unsigned short int proMod(unsigned short int level){
    return (((level - 1)/4)+2);
}

unsigned short int wpnDmg(unsigned short int wpnDie){
    switch (wpnDie) {
        case 12: return d12();
        case 10: return d10();
        case 8: return d8();
        case 6: return d6();
        case 4: return d4();
    }
}

unsigned short int d20(){   //Rolls a 20 sided die
    unsigned short int d20;
    d20=rand()%20+1;    //[1,20]
    return d20;
}

unsigned short int d12(){   //Rolls a 12 sided die
    unsigned short int d12;
    d12=rand()%12+1;    //[1,12]
    return d12;
}

unsigned short int d10(){   //Rolls a 10 sided die
    unsigned short int d10;
    d10=rand()%10+1;    //[1,10]
    return d10;
}

unsigned short int d8(){    //Rolls an 8 sided die
    unsigned short int d8;
    d8=rand()%8+1;    //[1,8]
    return d8;
}

unsigned short int d6(){    //Rolls a 6 sided die
    unsigned short int d6;
    d6=rand()%6+1;    //[1,6]
    return d6;
}

unsigned short int d4(){    //Rolls a 4 sided die
    unsigned short int d4;
    d4=rand()%4+1;    //[1,4]
    return d4;
}