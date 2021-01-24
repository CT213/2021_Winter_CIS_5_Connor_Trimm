/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Problem:for Loops
 * Created on January 20, 2021, 10:55 AM
 */

//System Libraries
#include <iostream> //I/O Libary
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays
const int CNVPRCT=100;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   pv=100.0f,     //Present value in $
            fv,            //Future value in $
            intRate=0.06f; //interest rate in decimals 
    int     numCmpd;       //Number of compounding periods in years
            
    
    //Initialize Variables
    numCmpd=72/(intRate*CNVPRCT);  //by the rule of 72
    
    fv=pv;                      //Initialize future saving
    
    //Map inputs to Outputs -> Process
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value = $"<<pv<<endl;
    cout<<"The interest Rate = "<<intRate*CNVPRCT<<"%"<<endl;
    cout<<"Number of years = "<<numCmpd<<endl;
    cout<<"Count Years Saving Interest"<<endl;
    int count=0, years=2021;
    while (count<=numCmpd){
        float interest=(fv*intRate);
        cout<<setw(3)<<count<<setw(7)<<years<<setw(9)<<fv<<setw(8)<<interest<<endl;
        fv=fv*(1+intRate);
        years++;
        count++;
    }
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}
