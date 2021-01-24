/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Created on January 13, 2021, 2:53 PM
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
    float calOne=75,     //Calories per on cookie
          cookies,       //number of cookies eaten
          calEat;        //Amount of calories eaten

    
    //Initialize or input i.e. set variable values
    cout<<"Calorie Counter"<<endl;
     cout<<"How many cookies did you eat?"<<endl;
     cin>>cookies;
    
    //Map inputs -> outputs
     calEat=cookies*calOne;
    
    //Display the outputs
   
   cout<<"You consumed "<<calEat<<" calories.";
    //Exit stage right or left!
    return 0;
}