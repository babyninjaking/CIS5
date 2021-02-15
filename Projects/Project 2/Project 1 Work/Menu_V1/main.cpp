/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on Febuary 4, 2021
 * Purpose:  Menu interface and game options.
 */


//Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Number Gererator
#include <ctime>     //Time to set the seed
using namespace std;

//Function Prototypes
//Menu functions
void hMenu();   //Home Menu
void dMenu();   //General Dice roll menu

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
    
    //Output data
    hMenu();
    
    return 0;
}

void hMenu(){                                                                   //Home Menu
    unsigned short int menu1;
    while (menu1 > 5 || menu1 < 1) {
    cout << "Welcome to the Dungeons and Dragons combat roll sim!" << endl;
    cout << "Select an option:" << endl;
    cout << "\t1. General Dice Rolls" << endl;
    cout << "\t2. Attack Rolls VS Input" << endl;
    cout << "\t3. Auto Attack VS Monsters" << endl;
    cout << "\t4. Text file input/output" << endl;
    cout << "\t5. Exit" << endl;
    cin >> menu1;
    
        switch(menu1){                                                          //Outputs
            case 1: dMenu(); break;
            case 2: break;
            case 3: break;
            case 4: break;
            case 5: break;
        }
        
        if (menu1 > 5 || menu1 < 1)                                             //Re-do if invalid option
            cout << endl << "PLEASE SELECT A VALID OPTION" << endl;
    }
}

void dMenu(){                                                                   //Dice Menu
    unsigned short int menu1;
    char menu2;
    do{
        menu1 = 0;
        while (menu1 > 6 || menu1 < 1) {
            cout << "Please select a die to roll:" <<endl;
            cout << "\t1. d20" << endl;
            cout << "\t2. d12" << endl;
            cout << "\t3. d10" << endl;
            cout << "\t4. d8" << endl;
            cout << "\t5. d6" << endl;
            cout << "\t6. d4" << endl;
            cin >> menu1;
    
            switch(menu1){                                                      //Outputs 
                case 1: cout << "Rolling 1d20...  \nYou got " << d20() << "!"; break;
                case 2: cout << "Rolling 1d12...  \nYou got " << d12() << "!"; break;
                case 3: cout << "Rolling 1d10...  \nYou got " << d10() << "!"; break;
                case 4: cout << "Rolling 1d8...  \nYou got " << d8() << "!"; break;
                case 5: cout << "Rolling 1d6...  \nYou got " << d6() << "!"; break;
                case 6: cout << "Rolling 1d4...  \nYou got " << d4() << "!"; break;
            }
    
            if (menu1 > 6 || menu1 < 1)                                         //Re-do if invalid option
                cout << endl << "PLEASE SELECT A VALID OPTION" << endl;
        }
    cout << endl << "Would you like to roll another die? (Y/N)" << endl;
    cin >> menu2;
    } while (menu2 == 'Y' || menu2 == 'y');
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