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
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays

//Function Prototypes
float present(float, float, int);//P=F/(1+r)^n
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float  fut,
        numyea;
    int  irate;
    
    //Initialize Variables
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"This is a Present Value Computation"<<endl;
    cout<<"Input the Future Value in Dollars"<<endl;
    cin>>fut;
    cout<<"Input the Number of Years"<<endl;
    cin>>numyea;
    cout<<"Input the Interest Rate %/yr"<<endl;
    cin>>irate;
    

    //Process/Map inputs to outputs

    
    //Output data
    
    cout<<"The Present Value = $"<<present(fut, irate, numyea);
    
    
    //Exit stage right!
    return 0;
}
float present(float fut, float irate, int numyea)
{
    float present = 0;
    float part1, part2, part3;
    part1 = 1+(irate*0.01);
    part2 = numyea;
    part3 = pow(part1,part2);
    
    present = fut/part3;
    
    return present;
}