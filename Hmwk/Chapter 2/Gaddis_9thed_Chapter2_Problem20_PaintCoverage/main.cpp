/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Problem: Paint Coverage
 * Created on January 4, 2021, 11:03 PM
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
    unsigned short height, //Height of Fence in Feet
            length, //length of fence in Feet
            pntCov, //Paint coverage / can in ft^2
            srfArea, //Surface Area to paint in Ft^2
            numGlns; //Number of gallons of paint
    //Initialize Variables
            height=6;
            length=100;
            pntCov=340;
          
    //Map inputs to Outputs -> Process
            srfArea=2*2*height*length; // paint twice front and back of the Fence
            numGlns=srfArea/pntCov+1;
    //Display Inputs/Outputs
            cout<<"Number of Gallons required = "<<numGlns<<" to paint a "<<endl;
            cout<<height<<" X "<<length<<"ft^2 fence front and back twice!"<<endl;
    //Exit the Program - Cleanup
    return 0;
}
