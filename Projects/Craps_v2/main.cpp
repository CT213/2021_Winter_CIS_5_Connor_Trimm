/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 19515
 * Problem:Craps
 * Created on January 26, 2021, 10:41 AM
 */

//System Libraries
#include <iostream> //I/O Libary
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays

//Function Prototypes
char roll2Die(int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    unsigned int wins, losses, nRolls;
    char nSides;
    //Initialize Variables
    wins=losses=0;
    nSides=6;
    nRolls = 0;
    //Map inputs to Outputs -> Process
    char sum=roll2Die(nSides);
    nRolls++;
    if(sum==7||sum==11){
        wins++;
    }
    else if(sum==2||sum==3||sum==12)
    {
        losses;
    }else{
        bool kpRolng;
        do
        {
            kpRolng = true;
            char sum1 = roll2Die(nSides);
            nRolls++;
            if (sum1==7)
            {
                losses++;
                kpRolng=false;

            }
            else if (sum1==sum)
            {
                wins++;
                kpRolng=false;
            }
            cout<<"on Roll "<<nRolls<<" we threw a "<<static_cast<int>(sum1)<<endl;
        }while (kpRolng);
    cout<<"Sum of dice = "<<static_cast<int>(sum)<<endl;
    cout<<"Wins = "<<wins<<endl;
    cout<<"Losses = "<<losses<<endl;
    cout<<"Number of rolls it took to play game = "<<nRolls<<endl;
  
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;

}
}

char roll2Die(int n)
{
    return rand()%n + rand()%n + 2; 
}
