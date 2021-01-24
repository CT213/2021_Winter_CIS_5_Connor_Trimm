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
#include <cstdlib>   //Random Library
#include <ctime>     //Time to set the Random Number Seed
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    
    //Declare Variables
    float payRate,  //amount paided per hour
          hourWk,   //Hours worked
          grossPy,  //The gross pay
          ovTH,     //overtime hours
          payH,     //Pay double
          ovTPy;    //Overtime pay

            
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payRate;
    cin>>hourWk;
    //Map inputs -> outputs
    if (hourWk>=40)
          ovTH=(hourWk-40),
          payH=payRate+payRate,
          ovTPy=payH*ovTH,
          grossPy=(payRate*40)+ovTPy;
          
   else  grossPy=payRate*hourWk;
          
   
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<setw(7)<<grossPy;
    //Exit stage right or left!
    return 0;
}