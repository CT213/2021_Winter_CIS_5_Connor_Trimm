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
    float fehTemp, //Temp in Fahrenheit
          celTem1, //Temp in Centigrade
            celTem2;
          
    


    
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter"<<endl;
     cout<<"Input Degrees Fahrenheit"<<endl;
     cin>>fehTemp;
    
    //Map inputs -> outputs
     celTem1=fehTemp-32;
     celTem2=celTem1*.555556;
    //Display the outputs
   
   cout<<fehTemp<<".0 Degrees Fahrenheit = "<<celTem2<<".0 Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}