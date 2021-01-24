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
#include <fstream> //File Stream
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
    fstream in,out;
    string inFlNm,outFlNm;
    float   pv,            //Present value in $
            fv,            //Future value in $
            intRate;       //interest rate in decimals 
    int     numCmpd;       //Number of compounding periods in years
            
    
    //Initialize Variables
    inFlNm="svInput.dat";
    //char outFlNm[]="svOutput.dat"
    in.open(inFlNm,ios::in);
    out.open(outFlNm,ios::out);
    in>>pv;
    in>>intRate;
    numCmpd=72/(intRate*CNVPRCT);  //by the rule of 72
    
    fv=pv;                      //Initialize future saving
    
    //Map inputs to Outputs -> Process
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"The Present Value = $"<<pv<<endl;
    out<<"The interest Rate = "<<intRate*CNVPRCT<<"%"<<endl;
    out<<"Number of years = "<<numCmpd<<endl;
    out<<"Count Years Saving Interest"<<endl;
    for(int count=0, years=2021; count<=numCmpd;count++, years++){
        float interest=(fv*intRate);
        out<<setw(3)<<count<<setw(7)<<years<<setw(9)<<fv<<setw(8)<<interest<<endl;
        fv=fv*(1+intRate);
        
    }
    //Display Inputs/Outputs
   // in.close(inFlNm);
   //out.close(outFlNm);
    
    
    //Exit the Program - Cleanup
    return 0;
}
