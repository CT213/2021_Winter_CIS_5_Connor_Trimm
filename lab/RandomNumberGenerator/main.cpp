/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 19515
 * Problem:Random Number Generator
 * Created on January 12, 2021, 11:15 PM
 */

//System Libraries
#include <iostream> //I/O Libary
#include <cstdlib>
#include <ctime>    //Time

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
            
    //Investigate the range
    int minRand,maxRand,nCalls;
    maxRand=minRand = 1000;
    nCalls=2140000000;
    unsigned int maxPos=1<<31;
    for(int i=1; i<nCalls;i++){
        int temp=rand();
        minRand=(temp<minRand?temp:minRand);
        maxRand=(temp>maxRand?temp:maxRand);
    }
    
    cout<<"Min Random Number = "<<minRand<<endl;
    cout<<"Max Random Number = "<<maxRand<<endl;
    cout<<"Max Random should be 2^31-1 = "<<maxPos<<endl;
    
    //roll the dice
    for(int i=1;i<=20;i++){
    int die1, die2, sum;
    die1=rand()%6+1; //[1.2.3.4.5.6]
    die2=rand()%6+1; //[1.2.3.4.5.6]
    sum=die1+die2;   //[2,.....12]
    cout<<"["<<die1<<","<<die2<<","<<sum<<"]"<<endl;
    }
    //Declare Variables
    
    //Initialize Variables
    
    //Map inputs to Outputs -> Process
  
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}
