
/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Problem:Annual High Temperatures
 * Created on January 5, 2021, 4:03 PM
 */

//System Libraries
#include <iostream> //I/O Libary
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned short hJNYT, //High July New York temp
                   hJDT, //High July Denver Temp
                   hJPT; //High July Phoenix temp
    float tRP, //Percent Temp rising 
          nYTRP, //Temp rise in New York percent
          dTRP, //Temp rise in Denver percent
          pTRP, //Temp rise in Phoenix percent
          nYTR, //Temp rise in New York 
          dTR, //Temp rise in Denver
          pTR; //Temp rise in Phoenix
    //Initialize Variables
    hJNYT=85;
    hJDT=88;
    hJPT=106;
    tRP=.02;
    //Map inputs to Outputs -> Process
    nYTRP=hJNYT*tRP; //Fahrenheit NY rise
    dTRP=hJDT*tRP; //Fahrenheit Denver rise
    pTRP=hJPT*tRP; //Fahrenheit Phoenix rise
    nYTR=nYTRP+hJNYT; //New average for NY
    dTR=dTRP+hJDT; //New average for Denver
    pTR=pTRP+hJPT; //New average for Phoenix
    
    //Display Inputs/Outputs
    cout<<" New York = "<<nYTR<<" Fahrenheit "<<endl;
    cout<<" Denver = "<<dTR<<" Fahrenheit "<<endl;
    cout<<" Phoenix = "<<pTR<<" Fahrenheit "<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}