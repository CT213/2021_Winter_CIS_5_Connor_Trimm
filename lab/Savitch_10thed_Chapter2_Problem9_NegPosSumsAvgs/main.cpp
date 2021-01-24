/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Problem:Neg Pos Sums Avgs
 * Created on January 11, 2021, 11;00 PM
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
    float number, //10 numbers to input into the program
            totSum, //total represent total
            totAvg,
            negSum, //neg represents the negative
            negAvg,
            posSum, //pos represents the positive
            posAvg;
    //Initialize Variables
    totSum=totAvg=negSum=negAvg=posSum=posAvg=0; //Important Initialization
    cout<<"This program sums and averages 10 floating numbers"<<endl;
    cout<<"with 2 significant digits of accuracy"<<endl;
    //Map inputs to Outputs -> Process
    cout<<"Input 10 numbers with no more than 2 decimal places"<<endl;
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
      cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
      cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
      cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
      cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
      cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
      cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
      cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
      cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    
    //Final Calculations
    totSum=posSum+negSum;
    totAvg=totSum/10.0f;
    posAvg=posSum/10.0f;
    negAvg=negSum/10.0f;
    
        
            
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Total sum = "<<totSum<<endl;
     cout<<"The Positive sum = "<<posSum<<endl;
      cout<<"The Negative sum = "<<negSum<<endl;
       cout<<"The Total Avg = "<<totAvg<<endl;
        cout<<"The Positive Avg = "<<posAvg<<endl;
        cout<<"The Negative Avg = "<<negAvg<<endl;
    //Exit the Program - Cleanup
    return 0;
}
