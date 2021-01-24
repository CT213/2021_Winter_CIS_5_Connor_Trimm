/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 19515
 *
 * Created on January 4, 2021, 12:55 PM
 */

//System Libraries
#include <iostream> //I/O Libary
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays


//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) 
{
    //Initialize the Random Number Seed
    
    //Declare Variables
    float num1,  //Number 1 input
          num2,  //Number 2 input
          num3;  //Number 3 input

    //Initialize Variables

    //Map inputs to Outputs -> Process
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<endl;
    cout<<"Enter Second number:"<<endl;
    cin>>num2;
    cout<<endl;
    cout<<"Enter third number:"<<endl;
    cin>>num3;
    cout<<endl;
    cout<<"Largest number from two parameter function:"<<endl;
    cout<<fixed<<setprecision(1)<<showpoint;
    if (num1 > num2 )
    {
        cout<<setw(1)<<num1<<endl;
        cout<<endl;
    }
    else if (num2 > num1)
    {
        cout<<setw(1)<<num2<<endl;
        cout<<endl;
    }
    cout<<"Largest number from three parameter function:"<<endl;
       if (num1 > num2 && num1 > num3 )
    {
        cout<<setw(1)<<num1<<endl;

    }
    else if (num2 > num1 && num2 > num3)
    {
        cout<<setw(1)<<num2<<endl;

    }
    else if (num3 > num1 && num3 > num2)
    {
        cout<<setw(1)<<num3<<endl;

    }
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;   
}

    
/*
    0 means equal
    >0 means greater
    <0 means lower

*/