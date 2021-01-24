/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Created on January 13, 2021, 2:30 PM
 * Purpose:  DietCoke
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVENGM=453.592;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    
    //Declare Variables
    float massMs=35,     //Mass of mouse 35 grams
          massKms=5,     //Mass to kill the mouse grams
          massCoke=350,  //mass of coke in grams 
          cncnt8=0.001f, //Concentration of sweetner in a can of diet coke 
          wDieter;       //Weight of dieter in lbs
    int nCans;
    
    
    //Initialize or input i.e. set variable values
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
     cout<<"Input the desired dieters weight in lbs."<<endl;
     cin>>wDieter;
    
    //Map inputs -> outputs
     nCans=(massKms*wDieter*CNVENGM)/(massMs*massCoke*cncnt8);
    
    //Display the outputs
    cout<<"The maximum number of soda pop cans"<<endl;
   cout<<"which can be consumed is "<<nCans<<" cans";
    //Exit stage right or left!
    return 0;
}