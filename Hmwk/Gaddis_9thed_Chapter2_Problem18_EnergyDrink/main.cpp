/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Problem:Energy Drink
 * Created on January 4, 2021, 12:55 PM
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
    unsigned short cstSurv, //number of customers surveyed
                   purcEng, //number of customers purchased energy drinks
                   purcCit; //number of customers purchased citrus
    float          prcEngy, // percentage surveyed consuming energy drink
                   prcCit; //percentage Citrus
    
    //Initialize Variables
    cstSurv=16500;
    purcEng=0.15f;
    prcCit=0.58f;
    
    //Map inputs to Outputs -> Process
    purcEng=cstSurv*prcEngy;
    purcCit=purcEng*prcCit;
    //Display Inputs/Outputs
    cout<<"Total Customers Surveyed = "<<cstSurv<<endl;
    cout<<"Customers that are Energy Drinkers = "<<purcEng<<endl;
    cout<<"Customers that are Citrus Drinkers = "<<purcCit<<endl;
    //Exit the Program - Cleanup
    return 0;
}
