/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 19515
 * Problem:Roll Dice
 * Created on January 25, 2021, 11:15 AM
 */

//System Libraries
#include <iostream> //I/O Libary
#include <cstdlib>  //Random number
#include <ctime>    //time set the seed
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays

//Function Prototypes
int fctrl(int);//Function to write for this problem
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int fac;

    
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin>>fac;



    //Map inputs to Outputs -> Process
    fctrl(fac);
    //Display Inputs/Outputs
    cout<<fac<<"! = "<<fctrl(fac);

    //Exit the Program - Cleanup
    return 0;
}
int fctrl(int fac)
{
    int num = 1, i;
    for (i = 2; i <= fac; i++)
        num *=i;
    return num;
}



