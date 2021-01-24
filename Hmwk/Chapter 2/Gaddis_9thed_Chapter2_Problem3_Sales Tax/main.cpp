/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Problem: Sales Tax
 * Created on January 5, 2021, 2:46 PM
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
    unsigned short PrFS; //Price of Goods sold before tax in dollars
           
    float STTX, //State sales tax percentage 
            CTTX, //County sales tax percentage
            TOPR, //Total price with tax added up
    PRST, //Dollar amount with State tax
            PRCT; //Dollar amount with County tax
    //Initialize Variables
            PrFS=95;
    STTX=.04;
    CTTX=.02;
    
    //Map inputs to Outputs -> Process
    PRST=STTX*PrFS; //Dollar amount for state tax
    PRCT=CTTX*PrFS; //Dollar amount for County tax
    TOPR=PRST+PRCT+PrFS; //Total amount due
    //Display Inputs/Outputs
    cout<<" State Tax total = $"<<PRST<<endl;
    cout<<" County Tax total = $"<<PRCT<<endl;
    cout<<" Total = $"<<TOPR<<endl;
           
    
    //Exit the Program - Cleanup
    return 0;
}
