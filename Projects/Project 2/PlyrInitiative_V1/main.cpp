/* 
 * Author: Jason Wilmot
 * Created on 2/14/21
 * Purpose:  Recive character names and initiative
 */

//System Libraries
#include <iostream>
#include <iomanip> //Format setw(),right
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int COLMAX = 80;

//Function Prototypes
void readI(char [][COLMAX], int [], int);
void sortI(char [][COLMAX], int [], int);
void printI(char [][COLMAX], int [], int);

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare Variables
    //Variables
    int ROW = 80;
    int plyrs;
    char names[ROW][COLMAX];
    int order[ROW];
    
    cout << "How many players are in your party?" << endl;
    cin >> plyrs;
    readI(names, order, plyrs);
    sortI(names, order, plyrs);
    printI(names, order, plyrs);
    
    return 0;
}

void readI(char names[][COLMAX], int order[], int plyrs){
    for (int i = 0; i <  plyrs; i++){
        cout << "Enter a player's name..." << endl;
        cin >> names[i];
        cout << "Now, enter that player's initiative." << endl;
        cin >> order[i];
    }
}

void sortI(char names[][COLMAX], int order[], int plyrs){
    int minInx, minVal;
    for (int start = 0; start < plyrs - 1; start++){
        minInx = start;
        minVal = order[start];
        for (int index = start + 1; index < plyrs; index++){
            if (order[index] > minVal){
                minVal = order[index];
                minInx = index;
            }
        }
        swap(order[minInx], order[start]);
        swap(names[minInx], names[start]);
    }
}

void printI(char names[][COLMAX], int order[], int plyrs){
    int w = 10;
    cout << setw(w) << "Name" << setw(w) << "Initiative" << endl;
    for (int i = 0; i < plyrs; i++) 
        cout << setw(w) << names[i] << setw(w) << order[i] << endl;
}