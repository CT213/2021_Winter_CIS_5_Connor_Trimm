/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 19515
 *
 * Created on January 5, 2021, 3:27 PM
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
    unsigned short Var1, //Variable 1
            Var2, //Variable 2
            Var3, //Variable 3
            Var4, //Variable 4
            Var5, //Variable 5
            numFVer, //Number of variables
            TotVar; //total number once added up
            float Ave; //Average number
            
     
      
    //Initialize Variables
    Var1=28;
            Var2=32;
            Var3=37;
            Var4=24;
            Var5=33;
            numFVer=5;
    //Map inputs to Outputs -> Process
            TotVar=Var1+Var2+Var3+Var4+Var5; //total added up
            Ave=TotVar/numFVer; //average of total divided by 5
    //Display Inputs/Outputs
            cout<<"Average = "<<Ave<<" "<<endl;
    //Exit the Program - Cleanup
    return 0;
}
