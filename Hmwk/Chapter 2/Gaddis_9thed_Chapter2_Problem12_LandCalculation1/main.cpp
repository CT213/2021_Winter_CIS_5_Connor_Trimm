
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

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float areaAc, //Area in Acres
          arft2, //Area in feet^2
          sideft, //perimeter side in feet
          perimtr; //perimeter in feet
    
//    //Initialize Variables
    areaAc=640;
    
    //Map inputs to Outputs -> Process
    arft2=areaAc*CNVAFT2;
    sideft=sqrt(arft2);
    perimtr=4*sideft;
    
    //Display Inputs/Outputs
    cout<<"Acres = "<<arft2<<"feet^2"<<endl;
    cout<<"1 side of the area = "<<sideft<<" feet"<<endl;
    cout<<"The perimeter = "<<perimtr<<" feet"<<endl;
            
    
    //Exit the Program - Cleanup
    return 0;
}
