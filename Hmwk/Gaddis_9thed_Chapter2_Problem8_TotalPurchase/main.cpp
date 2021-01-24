/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor Trimm
 *
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
    float Itone, //Item one cost
            Ittwo, //Item two cost
            Itthre, //Item three cost
            Itfour, //Item four cost
            Itfive, //Item five cost
            STax, //sales tax
            Total, //total added up
            TaxTotal, //Sales tax
            STotal; //Total with sales tax
    
    //Initialize Variables
    Itone=15.95;
    Ittwo=24.95;
    Itthre=6.95;
    Itfour=12.95;
    Itfive=3.95;
    STax=.07;
            
    //Map inputs to Outputs -> Process
            Total=Itone+Ittwo+Itthre+Itfour+Itfive;
    TaxTotal=Total*STax;
    STotal=TaxTotal+Total;
    
    //Display Inputs/Outputs
         cout<<" Item one = "<<Itone<<" dollars ";
         cout<<" Item Two = "<<Ittwo<<" dollars ";
         cout<<" Item Three = "<<Itthre<<" dollars ";
         cout<<" Item Four = "<<Itfour<<" dollars ";
         cout<<" Item Five = "<<Itfive<<" dollars ";
    cout<<" Sales Tax = "<<TaxTotal<<" dollars ";
    cout<<" Total = "<<STotal<<" dollars "<<endl;  
    
    //Exit the Program - Cleanup
    return 0;
}