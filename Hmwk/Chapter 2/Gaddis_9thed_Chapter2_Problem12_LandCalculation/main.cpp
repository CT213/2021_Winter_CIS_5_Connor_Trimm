
/* 
 * File:   main.cpp
 * Author: Connor Trimm
 *Problem:Land Conversion made up problem
 * Created on January 5, 2021, 4:04 PM
 */

//System Libraries
#include <iostream> //I/O Libary
#include <cstdlib>
#include<cmath> //math libary
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays
const float CNVAFT2=43560; //Conversions Acres to ft^2
const float CVFTMLS=1/5280.0f; //Conversions from feet to miles

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float areaAc, //Area in Acres
          arMls2, //Area in miles^2
          sideMls, //perimeter side in miles
          perimtr; //perimeter in miles
    
//    //Initialize Variables
    areaAc=640;
    
    //Map inputs to Outputs -> Process
    arMls2=areaAc*CNVAFT2*CVFTMLS*CVFTMLS;
    sideMls=sqrt(arMls2);
    perimtr=4*sideMls;
    
    //Display Inputs/Outputs
    cout<<"Acres = "<<arMls2<<"Miles^2"<<endl;
    cout<<"1 side of the area = "<<sideMls<<" miles"<<endl;
    cout<<"The perimeter = "<<perimtr<<" miles"<<endl;
            
    
    //Exit the Program - Cleanup
    return 0;
}
