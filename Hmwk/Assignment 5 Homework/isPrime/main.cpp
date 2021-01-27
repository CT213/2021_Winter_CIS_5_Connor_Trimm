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
bool isPrime(int);//Determine if the input number is prime.
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int pri;

    
    //Initialize Variables
    cout<<"Input a number to test if Prime."<<endl;
    cin>>pri;

    //Map inputs to Outputs -> Process
    isPrime(pri);
    //Display Inputs/Outputs
    if (isPrime(pri))
        cout<<pri<<" is prime.";
    else 
        cout<<pri<<" is not prime.";

    //Exit the Program - Cleanup
    return 0;
}
bool isPrime(int pri)
{
    int i;
    bool status = true;

    if (pri == 0 || pri == 1)
    {
    status = false;
    }
    else 
    {
        for ( i = 2; i <= pri/2; i++)
        {
           if (pri % i ==0)
           {
               status = false;
           }
        }
    }

    return status;
}