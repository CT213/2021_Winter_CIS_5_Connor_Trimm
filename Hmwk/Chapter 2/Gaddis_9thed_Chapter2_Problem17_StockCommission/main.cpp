/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Problem: Stock Commission
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
    unsigned short SSH, //Stock share price
            SPS; //Stock Price
    float SBCP, //StockBroker percent
            PFS, //Stock price
            SBC, // StockBroker commission
            Total;//Complete price
    //Initialize Variables
            SSH=750;
    SPS=35;
    SBCP=.02;
    //Map inputs to Outputs -> Process
    PFS=SSH*SPS; //stock share times stock price
    SBC=PFS*SBCP; //Stockbroker commission
    Total=PFS+SBC;
    //Display Inputs/Outputs
   cout<<" Stock alone = $"<<PFS<<endl;
    cout<<" Commission Price = $"<<SBC<<endl;
    cout<<" Total = $"<<Total<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}
