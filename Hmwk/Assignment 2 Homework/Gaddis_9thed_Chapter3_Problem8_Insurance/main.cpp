/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Created on January 13, 2021, 3:14 PM
 * Purpose:  Cookies
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    
    //Declare Variables
    float rate=0.8,     //Rate suggested
          hWorth,       //house worth
          proAm;        //property amount needed

    
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator"<<endl;
     cout<<"How much is your house worth?"<<endl;
     cin>>hWorth;
    
    //Map inputs -> outputs
     proAm=hWorth*rate;
    
    //Display the outputs
   
   cout<<"You need $"<<proAm<<" of insurance.";
    //Exit stage right or left!
    return 0;
}