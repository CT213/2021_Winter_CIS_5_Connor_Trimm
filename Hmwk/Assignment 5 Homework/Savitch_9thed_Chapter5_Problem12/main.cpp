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
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays


//Function Prototypes
float hourw(int, int, float);
float minw(int, int, float);
//Execution Begins Here
int main(int argc, char** argv) 
{
    //Initialize the Random Number Seed
    
    //Declare Variables
    char    choice;
    string  amorpm;    //Second choice for AM or PM
    int     hour,      //hours 
            min;       //Minutes
    float       wait;      //Wait time

    //Initialize Variables
 do
        {
        cout<<"Enter hour:"<<endl;
        cin>>hour;
        cout<<endl;
        cout<<"Enter minutes:"<<endl;
        cin>>min;
        cout<<endl;
        cout<<"Enter A for AM, P for PM:"<<endl;
        cin>>amorpm;
        cout<<endl; 
        cout<<"Enter waiting time:"<<endl;
        cin>>wait;
        cout<<endl;

        cout<<hourw(hour, min, wait)<<endl;
        cout<<minw(hour, min, wait)<<endl;

        if (amorpm == "A"|| amorpm == "a")
        {
        cout<<"Current time = "<<setw(2)<<hour<<":"<<setw(2)<<min<<" AM"<<endl;
        
        
        }
        else if (amorpm =="P"||amorpm =="p")
        {
        cout<<"Current time = "<<setw(2)<<hour<<":"<<setw(2)<<min<<" PM"<<endl;
        
        
        }

        cout<<"Again:"<<endl;                                                                                           //Again code to see if it is to run again
        cin>>choice;
            if (choice == 'y' || choice == 'Y')
            {
            cout<<endl;
            
            }
        }
            while (choice =='Y' || choice == 'y');
    return 0;   
}
float hourw(int hour, int min, float wait)
{
    float waitrat, //Wait ration
         minw;    //Minutes waited   
    int hourw;    //hours waited
    float hourp;
    waitrat = wait/60;
    hourw = waitrat;
    hourw = hourw + hour;
    minw = (waitrat - hourw)*60;
    minw += min;
    if (minw > 60)
    {
        hourp = hourw + 1;
        return hourp;
    }
    else 
    {
    return hourw;
    }
}
float minw(int hour, int min, float wait)
{    
    float waitrat, //Wait ration
         minw;    //Minutes waited   
    int hourwd;    //hours waited
    int mint;
    waitrat = wait/60;
    hourwd = waitrat;
    minw = (waitrat - hourwd)*60;
    minw += min;
    if (minw > 60)
    {
        mint = minw - 60;
        return mint;
    }
    else 
    {
    return minw;
    }
}
