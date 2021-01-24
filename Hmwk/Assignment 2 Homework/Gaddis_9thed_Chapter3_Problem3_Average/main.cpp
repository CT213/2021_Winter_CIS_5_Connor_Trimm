/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Created on January 13, 2021, 2:43 PM
 * Purpose:  Average
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float number, //5 numbers to input
          add,    //add of all 5
          avg;    //Average of all 5
          
    
    //Initialize or input i.e. set variable values
    avg=add=0;
    
    //Map inputs -> outputs
    cout<<"Input 5 numbers to average."<<endl;
    cin>>number;
    add+=(number>0?number:0);
    
     cin>>number;
    add+=(number>0?number:0);
    
     cin>>number;
    add+=(number>0?number:0);
    
     cin>>number;
    add+=(number>0?number:0);
    
     cin>>number;
    add+=(number>0?number:0);
    
    //Final Calculation
    avg=add/5;
    //Display the outputs
      cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The average = "<<avg;

    //Exit stage right or left!
    return 0;
}