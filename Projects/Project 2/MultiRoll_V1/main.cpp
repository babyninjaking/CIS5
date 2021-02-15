/* 
 * Author: Jason Wilmot
 * Created on 2/14/2021
 * Purpose:  Group Dice Roller
 */

//System Libraries
#include <iostream>//cin,cout
#include <vector>  //vectors<>
#include <iomanip> //Format setw(),right
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int COLMAX = 80;

//Function Prototypes
void readDice(vector<int> &, vector<int> &, int);
void copy(vector<int>, vector<int>,int [][COLMAX], int);
void sort(int [][COLMAX], int);
void prntAry(const int [][COLMAX], int);

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
    
    //Variables
    int ROW = 80;
    int array[ROW][COLMAX];
    vector<int> dice(0), roll(0);

    //Process
    int dieIn;
    cout << "Input the number of dice you want to roll." << endl;
    cin >> dieIn;
    
    readDice(dice, roll, dieIn);
    copy(dice, roll, array, dieIn);
    sort(array, dieIn);
    prntAry(array, dieIn);
    
    return 0;
}

void readDice(vector<int> &dice, vector<int> &roll, int dieIn){
    cout << "Input the number of sides on each die." << endl;
    int temp;
    for (int i = 0; i < dieIn; i++){
        cin >> temp;
        dice.push_back(temp);
        roll.push_back(wpnDmg(temp));
    }
}

void copy(vector<int> dice, vector<int> roll,int array[][COLMAX], int dieIn){
    for (int i = 0; i < dieIn; i++){
            array[i][0]=dice[i];
            array[i][1]=roll[i];
    }
}

void sort(int array[][COLMAX], int dieIn){
    int i, j, imin;
    int size = dieIn;
   for(i = 0; i < size - 1; i++) {
      imin = i;                                     //get index of minimum data
      for(j = i + 1; j < size; j++)
         if(array[j] < array[imin])
            imin = j;                               //placing in correct position
         swap(array[i], array[imin]);
   }
}

void prntAry(const int array[][COLMAX], int dieIn){
    int w = 10;
    cout << setw(w) << "Die" << setw(w) << "Roll" << endl;
    for (int i = 0; i < dieIn; i++)
        cout << setw(w) << array[i][0] << setw(w) << array[i][1] << endl;
}

unsigned short int wpnDmg(unsigned short int wpnDie){   //Converts die type into damage
    switch (wpnDie) {
        case 12: return d12();
        case 10: return d10();
        case 8: return d8();
        case 6: return d6();
        case 4: return d4();
        default: return 0;
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
