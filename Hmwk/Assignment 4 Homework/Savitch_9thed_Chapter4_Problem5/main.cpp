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
    char choice;
    float crPr,    //current price 
          onPr,    //One year-ago price
             x,    //Inflation Rate before being percent
          ioyp,    //Price in one year
          ityp,    //price in two years
            ir;    //Inflation Rate 
            
    
    //Initialize Variables
    do
        {
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Enter current price:"<<endl;
        cin>>crPr;
        cout<<"Enter year-ago price:"<<endl;
        cin>>onPr;
        cout<<"Inflation rate: ";
        x=crPr/onPr;
        ir=(x-1)*100;
        cout<<setw(3)<<ir<<"%"<<endl;
        cout<<endl;
        ioyp = crPr * x;
        cout<<"Price in one year: $"<<ioyp<<endl;
        ityp = ioyp * x;
        cout<<"Price in two year: $"<<ityp<<endl;
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