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
const float LITER=0.264179;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) 
{
    //Initialize the Random Number Seed
    
    //Declare Variables
    char choice;
    float lit,    //liters 
          gal,    //Gallons
          miles,  //Miles
          mpg;    //Miles per gallon 
            
    
    //Initialize Variables
    do
        {
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cout<<endl;
        cin>>lit;
        cout<<"Enter number of miles traveled:"<<endl;
        cout<<endl;
        cin>>miles;
        cout<<"miles per gallon:"<<endl;
            gal = lit *LITER;
            mpg = miles/gal;
        cout<<setw(2)<<mpg<<endl;
        cout<<"Again:"<<endl;
        cin>>choice;
            if (choice == 'y' || choice == 'Y')
            {
            cout<<endl;
            
            }
        }
            while (choice =='Y' || choice == 'y');
            
            
         return 0;   
        

    
    //Map inputs to Outputs -> Process
  
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    
}

    
/*
    0 means equal
    >0 means greater
    <0 means lower

*/