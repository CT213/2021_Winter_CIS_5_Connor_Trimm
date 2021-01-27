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
void minmax(int,int,int,int&,int&);//Function to find the min and max
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int min, max, num1, num2, num3;

    
    //Initialize Variables
    cout<<"Input 3 numbers"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    max = min = num1;

    //Map inputs to Outputs -> Process
    minmax(num1, num2, num3, min, max);
    //Display Inputs/Outputs
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;

    //Exit the Program - Cleanup
    return 0;
}
void minmax(int num1,int num2,int num3, int&min, int&max)
{
if (num1 < min)    
{
   min = num1;
}
else if (num2 < min)    
{
   min = num2;

}
else if (num3 < min)    
{
   min = num3;

}
if (num1 > max)    
{
   max = num1;
}
else if (num2 > max)    
{
   max = num2;

}
else if (num3 > max)    
{
   max = num3;

}

}
/*
 void minmax(int num1,int num2,int num3, int&min, int&max)
{
if (num1 < num2 && num1 < num3)    
{
   min = num1;
}
else if (num2 < num1 && num2 < num3)    
{
   min = num2;

}
else if (num3 < num2 && num3 < num1)    
{
   min = num3;

}
if (num1 > num2 && num1 > num3)    
{
   max = num1;
}
else if (num2 > num1 && num2 > num3)    
{
   max = num2;

}
else if (num3 > num2 && num3 > num1)    
{
   max = num3;

}

}*/
