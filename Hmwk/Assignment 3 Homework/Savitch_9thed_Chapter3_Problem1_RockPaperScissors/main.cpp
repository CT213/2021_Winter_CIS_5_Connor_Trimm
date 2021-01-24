/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Created on January 17, 2021, 4:17 PM
 * Purpose:  Roman Conversion
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants

    char user1,  //User 1 input
         user2;  //User 2 input
    int P,
            R,
            S,
            p,
            r,
            s;

   
    //Initialize Variables
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>user1;                                //User1 inputs
    cin>>user2;                                //User2 Inputs
    P=p;
    R=r;
    S=s;

        if(user1=='P'&&user2=='R'||user1=='p'&&user2=='r'||user1=='P'&&user2=='r'||user1=='p'&&user2=='R'){             //User1 inputs paper and User2 inputs Rock
            cout<<"Paper covers rock.";
        }
           else if(user1=='R'&&user2=='S'||user1=='r'&&user2=='s'||user1=='R'&&user2=='s'||user1=='r'&&user2=='S'){     //User1 inputs Rock and User2 inputs Scissors
            cout<<"Rock breaks scissors.";
        }
           else if(user1=='S'&&user2=='P'||user1=='s'&&user2=='p'||user1=='S'&&user2=='p'||user1=='s'&&user2=='P'){     //User1 inputs Scissors and User2 inputs Paper
            cout<<"Scissors cuts paper.";
       }
            else if(user1=='R'&&user2=='P'||user1=='r'&&user2=='p'||user1=='R'&&user2=='p'||user1=='r'&&user2=='P'){     //User1 inputs Rock and User2 inputs Paper
            cout<<"Paper covers rock.";
        }
           else if(user1=='S'&&user2=='R'||user1=='s'&&user2=='r'||user1=='S'&&user2=='r'||user1=='s'&&user2=='R'){     //User1 inputs Scissors and User2 inputs Rock
            cout<<"Rock breaks scissors.";
        }
           else if(user1=='P'&&user2=='S'||user1=='p'&&user2=='s'||user1=='P'&&user2=='s'||user1=='p'&&user2=='S'){     //User1 inputs paper and User2 inputs Scissors
            cout<<"Scissors cuts paper.";
        }

            else
            cout<<"Nobody wins.";                 //No one wins
       


    //Exit stage right!
    return 0;
 
}