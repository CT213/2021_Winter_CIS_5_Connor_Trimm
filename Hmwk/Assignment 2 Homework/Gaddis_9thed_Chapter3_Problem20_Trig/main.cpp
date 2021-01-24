/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Created on January 13, 2021, 2:30 PM
 * Purpose:  DietCoke
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float PI=4*atan(1);
const float CNVRAD=PI/180;//Conversion to Radians from Degrees

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
      int angle;
      float        angle1;
    
    //Initialize Variables
      cout<<"Calculate trig functions"<<endl;
    cout<<"Input an angle in degrees"<<endl;
    cin>>angle;
    
    //Process or map Inputs to Outputs
    angle1=angle*CNVRAD;
    
    //Display Outputs
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<angle<<")="<<sin(angle1)<<endl;
    cout<<"cos("<<angle<<")="<<cos(angle1)<<endl;
    cout<<"tan("<<angle<<")="<<sin(angle1)/cos(angle1);

    //Exit stage right!
    return 0;
}