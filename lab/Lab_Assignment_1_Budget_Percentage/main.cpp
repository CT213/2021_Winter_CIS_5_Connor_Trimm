/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 19515
 *
 * Created on January 4, 2021, 12:55 PM
 */

//System Libraries
#include <iostream> //I/O Libary
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    
    float milBdgt, // Military Budget
          fedBdgt; //Federal Budget
          
    unsigned int  mlPrcnt; //Military percent of budget
    
    //Initialize Variables
          milBdgt=7.0e11f; //Military Budget 700 Billion
          fedBdgt=4.1e12f; //Federal Budget 4.1 Trillion
    
    //Map inputs to Outputs -> Process
          mlPrcnt=(milBdgt/fedBdgt)*100;
         
          
  
    //Display Inputs/Outputs
          cout<<"The percent of the budget that the Military uses is = "<<mlPrcnt<<"%"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}
