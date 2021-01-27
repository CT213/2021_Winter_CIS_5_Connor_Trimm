/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 19515
 * Problem:Craps Reading from files and control constructs
 * while loop
 * Created on January 26, 2021, 10:41 AM
 */

//System Libraries
#include <iostream> //I/O Libary
#include <cstdlib>
#include <ctime>
#include <fstream> //File I/O
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    fstream input;
    unsigned int wins, losses, nRolls, nGames, mxGames;
    char nSides;
    string fn="Game_Parameters.dat";
    //Initialize Variables
    input.open(fn,ios::in);
    wins=losses=0;
    nSides=6;
    nRolls = 0;
    nGames = 2;
    mxGames=10;//max number of games
    
    while(input>>nGames){}
    nGames = nGames<mxGames?nGames:mxGames;
    
    //Map inputs to Outputs -> Process
    for(int game=1;game<=nGames;game++)
    {
        nRolls =0;
        char sum=rand()%nSides + rand()%nSides + 2;
        nRolls++;
        switch(sum)
        {
            case 11: case 7:
            wins++;break;
        
            case 2: case 3: case 12:
            losses++;break;
            default:
            bool kpRolng;
            do
            {
                kpRolng = true;
                char sum1 = rand()%nSides + rand()%nSides + 2;
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
        }
    cout<<"Sum of dice = "<<static_cast<int>(sum)<<endl;
    cout<<"Wins = "<<wins<<endl;
    cout<<"Losses = "<<losses<<endl;
    cout<<"Number of rolls it took to play game = "<<nRolls<<endl;
    cout<<"Game = "<<game<<endl;
    cout<<endl;
    }
  
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    input.close();
    return 0;

}
