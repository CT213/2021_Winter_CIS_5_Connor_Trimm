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
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays


//Function Prototypes
int hour (int);
//Execution Begins Here
int main(int argc, char** argv) 
{
    //Initialize the Random Number Seed
    
    //Declare Variables
    char choice;
    string time;
    int hours, minut;

    //Initialize Variables
 cout<<"Military Time Converter to Standard Time"<<endl;
 cout<<"Input Military Time hh:mm"<<endl;
 do
{
    
    
    cin>>time;
 
    hours = (time[0]-48)*10+(time[1]-48);
    minut = (time[3]-48)*10+(time[4]-48);

 
        if (hours>24 ||minut>59)
        {
            cout<<time<<" is not a valid time"<<endl;
        }

        else if (hours>=12)
        {
        hour(hours);  
        cout<<time<<" = "<<hour(hours)<<":"<<minut<<" PM"<<endl;
        }
        else 
        {
            if (hours>=1)
            {
                hour(hours);  
                cout<<time<<" = "<<hour(hours)<<":"<<minut<<" AM"<<endl;  
            }
            else
            {
                cout<<time<<" = "<<"12"<<":"<<minut<<" AM"<<endl; 
            }
        }

        cout<<"Would you like to convert another time (y/n)"<<endl;                                                                                           //Again code to see if it is to run again
        cin>>choice;

    
}
            while (choice =='Y' || choice == 'y');
    return 0;   
}
int hour (int hours)
{
    if (hours>12)
    {
        hours -=12;
    }
    return hours;
}
