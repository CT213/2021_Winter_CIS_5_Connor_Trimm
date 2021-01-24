/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Problem: Total Purchase
 * Created on January 5, 2021, 4:02 PM
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
    float itone, //Item one cost
            ittwo, //Item two cost
            itthre, //Item three cost
            itfour, //Item four cost
            itfive, //Item five cost
            sTax, //sales tax
            total, //total added up
            taxTotal, //Sales tax
            sTotal; //Total with sales tax
    
    //Initialize Variables
    itone=15.95;
    ittwo=24.95;
    itthre=6.95;
    itfour=12.95;
    itfive=3.95;
    sTax=.07;
            
    //Map inputs to Outputs -> Process
            total=itone+ittwo+itthre+itfour+itfive;
    taxTotal=total*sTax;
    sTotal=taxTotal+total;
    
    //Display Inputs/Outputs
         cout<<" Item one = $"<<itone<<endl;
         cout<<" Item Two = $"<<ittwo<<endl;
         cout<<" Item Three = $"<<itthre<<endl;
         cout<<" Item Four = $"<<itfour<<endl;
         cout<<" Item Five = $"<<itfive<<endl;
    cout<<" Sales Tax = $"<<taxTotal<<endl;
    cout<<" Total = $"<<sTotal<<endl;  
    
    //Exit the Program - Cleanup
    return 0;
}