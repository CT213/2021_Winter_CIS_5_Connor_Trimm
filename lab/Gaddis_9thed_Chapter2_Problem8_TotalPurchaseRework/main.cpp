/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Problem:Total Purchase
 * Created on January 11, 2021, 11:23 PM
 */

//System Libraries
#include <iostream> //I/O Libary
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays
const int CNVDEC=100; //convertion to Decimal
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float item, //5 items purchase in $
            purcSum, //sum of purchase
            taxrt,  //The tax rate in %
            taxCalc, //Tax calculation
            purcPrc; //purchase price
    char count; //Count for the item

    //Initialize Variables
    taxrt=7.0f/CNVDEC;
    count=1;
    purcSum=0;
    //Format of the Dollar
     cout<<fixed<<setprecision(2)<<showpoint;
    //Map inputs to Outputs -> Process
    cout<<"Input 5 items purchase"<<endl; //Item 1
      cin>>item;
      cout<<"The Price of item  "<<static_cast<int>(count)<<setw(6)<<" = $ "<<item<<endl;
       count=count+1;
      purcSum=purcSum+item;
      
      //item 2
      cin>>item;
      cout<<"The Price of item  "<<static_cast<int>(count)<<setw(6)<<" = $ "<<item<<endl;
       count=count+1;
        purcSum=purcSum+item;
       
      //item 3
      cin>>item;
      cout<<"The Price of item  "<<static_cast<int>(count)<<setw(6)<<" = $ "<<item<<endl;
       count=count+1;
        purcSum=purcSum+item;
       
     //item 4
      cin>>item;
      cout<<"The Price of item  "<<static_cast<int>(count)<<setw(6)<<" = $ "<<item<<endl;
       count=count+1;
        purcSum=purcSum+item;
       
      //item 5
      cin>>item;
      cout<<"The Price of item  "<<static_cast<int>(count)<<setw(6)<<" = $ "<<item<<endl;
       count=count+1;
        purcSum=purcSum+item;
      

    //Final Calculations
        taxCalc=taxrt*purcSum;
        purcPrc=taxCalc+purcSum;
        
        
            
    //Display Inputs/Outputs
        cout<<"The total price before tax     =  $"<<setw(6)<<purcSum<<endl;
        cout<<"The tax on the purchase price  =  $"<<taxCalc<<endl;
        cout<<"The total cost                 =  $"<<purcPrc<<endl;

        
    //Exit the Program - Cleanup
    return 0;
}
