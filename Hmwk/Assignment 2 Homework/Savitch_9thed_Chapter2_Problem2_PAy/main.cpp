/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Created on January 13, 2021, 2:30 PM
 * Purpose:  DietCoke
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    
    //Declare Variables
    float prAnSl,       //previous annual salary
          neAnSl,       //new annual salary
          rePay,        //Retroactive pay
          neMoSl;       //new month salary

    
    
    //Initialize or input i.e. set variable values
    cout<<"Input previous annual salary."<<endl;
     cin>>prAnSl;  //previous anual salary
    
    //Map inputs -> outputs
     rePay=(prAnSl/2)*0.076;            //retroactive pay
     neAnSl=(prAnSl*0.076)+prAnSl;      //New annual saluary
     neMoSl=neAnSl/12;                  //New monthly saluay
   
    
    //Display the outputs
     cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Retroactive pay    = $"<<setw(7)<<rePay<<endl;
   cout<<"New annual salary  = $"<<neAnSl<<endl;
   cout<<"New monthly salary = $"<<setw(7)<<neMoSl;
    //Exit stage right or left!
    return 0;
}