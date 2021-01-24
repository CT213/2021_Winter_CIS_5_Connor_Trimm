/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Problem: Restaurant Bill
 * Created on January 5, 2021, 3:43 PM
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
    float tax, //Tax on meal
          tip, //Tip for meal
          meal, //Cost of meal
          addTax, //amount it cost with tax
          addTip, //amount it cost with tip 
          mealTax, //meal price plus tax
          total; //Total all added up
    //Initialize Variables
    tax=.0675;
    tip=.20;
    meal=88.67;
    //Map inputs to Outputs -> Process
    int iaddTax=(meal*tax+0.005)*100;
    addTax=iaddTax/100.0f;
    mealTax=meal+addTax;
    int iaddTip=(mealTax*tip+0.005)*100;
    addTip=iaddTip/100.0f;
    total=meal+addTax+addTip;
    //Display Inputs/Outputs
     cout<<" Tax total = $"<<addTax<<endl;
    cout<<" Tip total = $"<<addTip<<endl;
    cout<<" Total = $"<<total<<endl;
    //Exit the Program - Cleanup
    return 0;
}
