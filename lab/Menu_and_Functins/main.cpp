/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 19515
 *
 * Created on January 4, 2021, 12:55 PM
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const float CNVGRMS=453.592;//Grams/lb
const float PI=4*atan(1);
const float CNVRAD=PI/180;//Conversion to Radians from Degrees

//Function Prototypes
void prblem1();
void prblem2();
void prblem3();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;


    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Gaddis 9thEd Chap4 Prob11 Books"<<endl;
    cout<<"Type 2 for Gaddis 9thEd Chap4 Prob12 BankCharges"<<endl;
    cout<<"Type 3 for Savitch 9thEd Chap3 PracProb1 RockPaperScissors"<<endl;
    cin>>choice;
    
    switch(choice){

        case '1': prblem1(); break;
        case '2': prblem2(); break;
        case '3':prblem3(); break;

        
    }
    return 0;
}
//888888888888888888888888888888888888888888888888888888888888888888888888888888
//777777777777777777777777777777777777777777777777777777777777777777777777777777
//******************************************************************************
//                          Problem 1
//Inputs: 
//                Declare all inputs with ranges and units
//Inputs/outputs: 
//                Declare all inputs with ranges and units
//Outputs:
//                Declare all inputs with ranges and units
//888888888888888888888888888888888888888888888888888888888888888888888888888888
//777777777777777777777777777777777777777777777777777777777777777777777777777777
//******************************************************************************

void prblem1(){
               //Declare Variable Data Types and Constants
   unsigned short books,
                  points;
    
    //Initialize Variables
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>books;
    if(books<=0)
        points=0;
    else if(books<=1)
        points=5;
    else if(books<=2)
        points=15;
    else if (books<=3)
        points=30;
    else if (books>=4)
        points=60;
    
    //Process or map Inputs to Outputs

        
    
     //Output the number of 1000's in Roman Numerals

       

    //Display Outputs

       cout<<fixed<<setprecision(3)<<showpoint;
    cout<<"Books purchased ="<<setw(3)<<books<<endl;
    cout<<"Points earned   ="<<setw(3)<<points;
    
               }
//888888888888888888888888888888888888888888888888888888888888888888888888888888
//777777777777777777777777777777777777777777777777777777777777777777777777777777
//******************************************************************************
//                          Problem 1
//Inputs: 
//                Declare all inputs with ranges and units
//Inputs/outputs: 
//                Declare all inputs with ranges and units
//Outputs:
//                Declare all inputs with ranges and units
//888888888888888888888888888888888888888888888888888888888888888888888888888888
//777777777777777777777777777777777777777777777777777777777777777777777777777777
//******************************************************************************
void prblem2(){
             //Declare Variable Data Types and Constants
    float bal,     //Balance
          numCh,   //Number of Checks
          chFee,   //Check Fee
          monFee,  //Month Fee
          lowBal,  //Low balance Fee
          newBal;  //New Balance
    
    //Initialize Variables
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>bal;
    cin>>numCh;
    //If statements for Check Fee
    if(numCh<=19)
        chFee=numCh*0.10;
    if(numCh>=20&&numCh<=39)
        chFee=numCh*0.08;
    if(numCh>=40&&numCh<=59)
        chFee=numCh*0.06;
    if(numCh>=60)
        chFee=numCh*0.04;
    
    //If statements for balance charge
    if(bal<=399)  //low balance fee of $15
        lowBal=15;
    else if (bal>=400)
        lowBal=0;
    
    
    //Process or map Inputs to Outputs
    monFee=10;    //Monthly Fee of $10
    newBal=bal-chFee-monFee-lowBal;
    
       

       

    //Display Outputs

       cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Balance     $"<<setw(9)<<bal<<endl;
    cout<<"Check Fee   $"<<setw(9)<<chFee<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<monFee<<endl;
    cout<<"Low Balance $"<<setw(9)<<lowBal<<endl;
    cout<<"New Balance $"<<setw(9)<<newBal;
}
//888888888888888888888888888888888888888888888888888888888888888888888888888888
//777777777777777777777777777777777777777777777777777777777777777777777777777777
//******************************************************************************
//                          Problem 1
//Inputs: 
//                Declare all inputs with ranges and units
//Inputs/outputs: 
//                Declare all inputs with ranges and units
//Outputs:
//                Declare all inputs with ranges and units
//888888888888888888888888888888888888888888888888888888888888888888888888888888
//777777777777777777777777777777777777777777777777777777777777777777777777777777
//******************************************************************************
void prblem3(){
                //Declare Variable Data Types and Constants

    char user1,  //User 1 input
         user2;  //User 2 input


   
    //Initialize Variables
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>user1;                                //User1 inputs
    cin>>user2;                                //User2 Inputs
 
        
        
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
            cout<<"Nobody wins.";  
}