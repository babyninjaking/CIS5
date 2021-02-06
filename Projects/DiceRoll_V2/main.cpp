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
    unsigned int freq1,freq2,freq3,freq4,freq5,freq6,freq7,freq8,freq9,
                 freq10,freq11,freq12,freq13,freq14,freq15,freq16,freq17,
                 freq18,freq19,freq20;
    unsigned int roll;
    int nLoop=20000000;
    
    freq1=freq2=freq3=freq4=freq5=freq6=freq7=freq8=freq9=0;
    freq10=freq11=freq12=freq13=freq14=freq15=freq16=freq17=0;
    freq18=freq19=freq20=0;
            
    for(int thrw=1;thrw<=nLoop;thrw++){
        roll = d6();        //Dice roll selection
        
        switch(roll){
            case 1:freq1++;break;
            case 2:freq2++;break;
            case 3:freq3++;break;
            case 4:freq4++;break;
            case 5:freq5++;break;
            case 6:freq6++;break;
            case 7:freq7++;break;
            case 8:freq8++;break;
            case 9:freq9++;break;
            case 10:freq10++;break;
            case 11:freq11++;break;
            case 12:freq12++;break;
            case 13:freq13++;break;
            case 14:freq14++;break;
            case 15:freq15++;break;
            case 16:freq16++;break;
            case 17:freq17++;break;
            case 18:freq18++;break;
            case 19:freq19++;break;
            case 20:freq20++;break;
        }
    }
    cout<<"Frequency 1  = "<<freq1<<endl;
    cout<<"Frequency 2  = "<<freq2<<endl;
    cout<<"Frequency 3  = "<<freq3<<endl;
    cout<<"Frequency 4  = "<<freq4<<endl;
    cout<<"Frequency 5  = "<<freq5<<endl;
    cout<<"Frequency 6  = "<<freq6<<endl;
    cout<<"Frequency 7  = "<<freq7<<endl;
    cout<<"Frequency 8  = "<<freq8<<endl;
    cout<<"Frequency 9  = "<<freq9<<endl;
    cout<<"Frequency 10 = "<<freq10<<endl;
    cout<<"Frequency 11 = "<<freq11<<endl;
    cout<<"Frequency 12 = "<<freq12<<endl;
    cout<<"Frequency 13  = "<<freq13<<endl;
    cout<<"Frequency 14  = "<<freq14<<endl;
    cout<<"Frequency 15  = "<<freq15<<endl;
    cout<<"Frequency 16  = "<<freq16<<endl;
    cout<<"Frequency 17  = "<<freq17<<endl;
    cout<<"Frequency 18  = "<<freq18<<endl;
    cout<<"Frequency 19  = "<<freq19<<endl;
    cout<<"Frequency 20  = "<<freq20<<endl;
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