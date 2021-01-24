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
    float lit1,    //liters 
          gal1,    //Gallons
          miles1,  //Miles
          mpg1,    //Miles per gallon 
          lit2,    //liters 
          gal2,    //Gallons
          miles2,  //Miles
          mpg2;    //Miles per gallon
            
    
    //Initialize Variables
 do
        {
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>lit1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles1;
        cout<<"miles per gallon: ";
            gal1 = lit1 *LITER;
            mpg1 = miles1/gal1;
        cout<<setw(2)<<mpg1<<endl;
        cout<<endl;
        
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>lit2;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles2;
        cout<<"miles per gallon: ";
            gal2 = lit2 *LITER;
            mpg2 = miles2/gal2;
        cout<<setw(2)<<mpg2<<endl;
        cout<<endl;
        
        if (mpg1 > mpg2)
        {
            cout<<"Car 1 is more fuel efficient"<<endl;
        }
        else if (mpg2 > mpg1)
        {
           cout<<"Car 2 is more fuel efficient"<<endl; 
        }
        cout<<endl;
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