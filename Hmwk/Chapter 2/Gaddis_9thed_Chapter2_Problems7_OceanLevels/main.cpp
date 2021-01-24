/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Problem: Ocean Levels
 * Created on January 5, 2021, 4:00 PM
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
    unsigned short fyear, //Five years
                   syear, //Seven years
                   tyear; //Ten years
    float rmil, //rate of change    
          fmil, //change over five years
          smil, //change over seven years
          tmil; //Change over ten years
    //Initialize Variables
    fyear=5;
    syear=7;
    tyear=10;
    rmil=1.5;
          
    //Map inputs to Outputs -> Process
    fmil=fyear*rmil; //Change over five years
    smil=syear*rmil; //change over seven years
    tmil=tyear*rmil; //change over ten years
    //Display Inputs/Outputs
    cout<<" Five years of change = "<<fmil<<" millimeters "<<endl;
    cout<<" Seven years of change = "<<smil<<" millimeters "<<endl;
    cout<<" Ten years of change = "<<tmil<<" millimeters "<<endl;
    //Exit the Program - Cleanup
    return 0;
}
