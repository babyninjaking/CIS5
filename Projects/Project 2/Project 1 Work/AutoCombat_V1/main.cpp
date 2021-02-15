/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on Febuary 7, 2021
 * Purpose:  Auto Combat 
 */


//Libraries
#include <iostream> //I/O Library
#include <cstdlib>  //Random Number Gererator
#include <ctime>    //Time to set the seed
#include <iomanip>  //
using namespace std;

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

int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned short int Class;   //Class, 1 is figher, 2 is rogue.
    unsigned short int aScore;  //Ability score, used in attack rolls.
    unsigned short int level;   //Character level
    unsigned short int AC;      //Armor Class
    unsigned short int toHit;   //The "To Hit" value used to determine if a character lands an attack.
    unsigned short int wpnMenu; //Used for selecting an option in the weapons menu.
    unsigned short int monMenu; //Used to navigate the monster menu.
    unsigned short int wpnDie;  //Serves as an input for the wpnDmg function
    char again;                 //Tests if the user wants to attack again.
    float avrgDmg;              //Average damage
    short int HP;      //Hit points
    unsigned short int dmg;     //Damage
    float ttlDmg;  //Total damage
    string monName;             //Monster name
    
    //Initialize Variables
    do {                                                                        //Class & ability score checker
        cout << endl << "Is your character a fighter or a rogue?" << endl;
        cout << "\t1. Fighter" << endl;
        cout << "\t2. Rogue" << endl;
        cin >> Class;
    
        if (Class == 1) {                                                       //Strength input for fighters
            do {
                cout << endl << "What is your stregth score? (1-20)" << endl;
                cout << "***10 is average, 20 is superhuman, 1 is paper" << endl;
                cin >> aScore;
                if (aScore > 20 || aScore < 1)  //Str score validity check
                    cout << endl << "PLEASE INPUT A VALID NUMBER" << endl;
            } while (aScore > 20 || aScore < 1);
        }
        else if (Class == 2){                                                   //Dexterity input for rigues
            do {
                cout << endl << "What is your dexterity score? (1-20)" << endl;
                cout << "***10 is average, 20 is superhuman, 1 a rock" << endl;
                cin >> aScore;
                if (aScore > 20 || aScore < 1)  //Dex score validity check
                    cout << endl << "PLEASE INPUT A VALID NUMBER" << endl;  
            } while (aScore > 20 || aScore < 1);
        }
        else    //Class validity check
            cout << endl << "PLEASE SELECT A VALID OPTION" << endl;
    } while (Class < 1 || Class > 2);
    
    
    do {                                                                        //Character level input 
        cout << endl << "What is your character's level? (1-20)" << endl;
        cin >> level;
        if (level > 20 || level < 1)    //Level input check
            cout << endl << "PLEASE INPUT A VALID NUMBER" << endl;
    } while (level > 20 || level < 1);
    

    if (Class == 1) {                                                           //Fighter weapon options
        do {
            cout << endl << "Select a weapon:" << endl;
            cout << "\t1. Flail (1d8 damage)" << endl;
            cout << "\t2. Glaive (1d10 damage)" << endl;
            cout << "\t3. Battleaxe (1d12 damage)" << endl;
            cin >> wpnMenu;
            switch (wpnMenu){
                case 1: wpnDie = 8; break;
                case 2: wpnDie = 10; break;
                case 3: wpnDie = 12; break;
            }
        if (wpnMenu > 3 || wpnMenu < 1) //Validity check
            cout << endl << "PLEASE SELECT A VALID OPTION" << endl;
        } while (wpnMenu > 3 || wpnMenu < 1);
    }
    else {                                                                      //Rogue weapon options
        do {
            cout << endl << "Select a weapon:" << endl;
            cout << "\t1. Dagger (1d4 damage)" << endl;
            cout << "\t2. Shortbow (1d6 damage)" << endl;
            cout << "\t3. Rapier (1d8 damage)" << endl;
            cin >> wpnMenu;
            switch (wpnMenu){
                case 1: wpnDie = 4; break;
                case 2: wpnDie = 6; break;
                case 3: wpnDie = 8; break;
            }
        if (wpnMenu > 3 || wpnMenu < 1) //Validity check
            cout << endl << "PLEASE SELECT A VALID OPTION" << endl;
        } while (wpnMenu > 3 || wpnMenu < 1);
    }
    
    do {                                                                        //Monster selection 
        cout << endl << "What monster will you be fighting?" << endl;
        cout << "\t1. Goblin" << endl;                                          //Add monsters
        cout << "\t1. Goblin" << endl;
        cout << "\t1. Goblin" << endl;
        cin >> monMenu;
        switch (monMenu){                                                                //set name, HP, and AC based on monster 
            case 1: monName = "Goblin"; HP = 10; AC = 12; break;
            case 2: monName = "Goblin"; HP = 10; AC = 12; break;
            case 3: monName = "Goblin"; HP = 10; AC = 12; break;
        }
        if (monMenu > 3 || monMenu < 1)    //Validity check
            cout << "PLEASE SELECT A VALID OPTION" << endl;    
    } while (monMenu > 3 || monMenu < 1);
    
    cout << "Combat against the " << monName << " begins!" << endl;
    
    int n;
    ttlDmg = 0;
    
    for (n = 0; HP > 0; n++){                                       //Attack!
        cout << "You attack!" << endl;
        toHit = d20() + aMod(aScore) + proMod(level);
        if (toHit >= AC){                                                       //Hit or Miss
            cout << "You hit with an " << toHit;
            dmg = wpnDmg(wpnDie) + aMod(aScore);
            cout << ", dealing " << dmg << " damage!" << endl;
        }
        else {
            dmg = 0;
            cout << "You missed with an " << toHit << "..." << endl;
        }
        HP = HP - dmg;
        ttlDmg = ttlDmg + dmg;
    }
    
    avrgDmg = (ttlDmg/n);
    
    cout << "You killed the " << monName << " in " << n << " hits!" << endl;
    cout << "You had an average damage of " << fixed << showpoint << setprecision(2) << avrgDmg << "." << endl;
    
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