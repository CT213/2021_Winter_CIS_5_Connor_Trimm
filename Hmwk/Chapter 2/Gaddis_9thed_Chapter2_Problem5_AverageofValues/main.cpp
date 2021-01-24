/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Problem: Average of Values
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
    unsigned short var1, //Variable 1
                   var2, //Variable 2
                   var3, //Variable 3
                   var4, //Variable 4
                   var5, //Variable 5
                   numFVer, //Number of variables
                   totVar; //total number once added up
    float ave; //Average number
            
     
      
    //Initialize Variables
    var1=28;
            var2=32;
            var3=37;
            var4=24;
            var5=33;
            numFVer=5;
    //Map inputs to Outputs -> Process
            totVar=var1+var2+var3+var4+var5; //total added up
            ave=totVar/numFVer; //average of total divided by 5
    //Display Inputs/Outputs
            cout<<"Average = "<<ave<<" "<<endl;
    //Exit the Program - Cleanup
    return 0;
}
