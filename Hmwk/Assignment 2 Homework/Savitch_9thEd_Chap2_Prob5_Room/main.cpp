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
    float mRmCa,  //Max room capacity
                   numP,   //Number of people
                   redNum; //Reduced number
            

            
    
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>mRmCa;
    cin>>numP;
    //Map inputs -> outputs
    if (numP>mRmCa)
       cout<<"Meeting cannot be held."<<endl,
               redNum=numP-mRmCa,
     cout<<"Reduce number of people by "<<redNum<<" to avoid fire violation.";     
   else  
       cout<<"Meeting can be held."<<endl,
               redNum=mRmCa-numP,
               cout<<"Increase number of people by "<<redNum<<" will be allowed without violation.";
          
   
    
    //Display the outputs
   
    
    //Exit stage right or left!
    return 0;
}