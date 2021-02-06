/* 
 * File:   main.cpp
 * Author: Jason Wilmot
 * Created on Febuary 4, 2021
 * Purpose:  Set up functions for d20, d12, d10, d8, d6, and d4.
 */


//Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Number Gererator
#include <ctime>     //Time to set the seed
using namespace std;

//Function Prototypes
unsigned short int d20();   //d20 dice roll
unsigned short int d12();   //d12 dice roll
unsigned short int d10();   //d10 dice roll
unsigned short int d8();    //d8 dice roll
unsigned short int d6();    //d6 dice roll
unsigned short int d4();    //d4 dice roll

int main(int argc, char** argv) {
    cout << "d20 roll: " << d20() << endl;
    cout << "d12 roll: " << d12() << endl;
    cout << "d10 roll: " << d10() << endl;
    cout << "d8 roll: " << d8() << endl;
    cout << "d6 roll: " << d6() << endl;
    cout << "d4 roll: " << d4() << endl;
}

unsigned short int d20(){
    srand(static_cast<unsigned int>(time(0)));
    unsigned short int d20;
    d20=rand()%20+1;    //[1,20]
    return d20;
}

unsigned short int d12(){
    srand(static_cast<unsigned int>(time(0)));
    unsigned short int d12;
    d12=rand()%12+1;    //[1,12]
    return d12;
}

unsigned short int d10(){
    srand(static_cast<unsigned int>(time(0)));
    unsigned short int d10;
    d10=rand()%10+1;    //[1,10]
    return d10;
}

unsigned short int d8(){
    srand(static_cast<unsigned int>(time(0)));
    unsigned short int d8;
    d8=rand()%8+1;    //[1,8]
    return d8;
}

unsigned short int d6(){
    srand(static_cast<unsigned int>(time(0)));
    unsigned short int d6;
    d6=rand()%6+1;    //[1,6]
    return d6;
}

unsigned short int d4(){
    srand(static_cast<unsigned int>(time(0)));
    unsigned short int d4;
    d4=rand()%4+1;    //[1,4]
    return d4;
}