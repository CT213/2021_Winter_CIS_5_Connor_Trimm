/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Created on January 17, 2021, 4:17 PM
 * Purpose:  Roman Conversion
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants

    string racer1,  //racer 1 input
           racer2,  //racer 2 input
           racer3;  //racer 3 input
    float    r1tim,   //racer 1 time input
           r2tim,   //racer 2 time input
           r3tim;   //racer 3 time input

   
    //Initialize Variables
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cin>>racer1;    //racer 1 inputs
    cin>>r1tim;     //racer 1 time Inputs
    cin>>racer2;    //racer 2 inputs
    cin>>r2tim;     //racer 2 time Inputs
    cin>>racer3;    //racer 3 inputs
    cin>>r3tim;     //racer 3 time Inputs
        
    //If statements 
        if(r1tim<0||r2tim<0||r3tim<0){                  //Racers names and times
            cout<<"Sorry no one can run back in time";  //An invalid time was input
        }
        else
        { 

        cout<<"Their names, then their times"<<endl;
            if(r1tim < r2tim&&r1tim < r3tim)            //If Racer 1 is faster then racer 2 and racer 3
            {
                cout<<racer1<<"\t";
                cout<<setw(3)<<r1tim<<endl;
                    if (r2tim < r3tim)                  //If racer 2 is faster then racer 3
                    {
                    cout<<racer2<<"\t";
                    cout<<setw(3)<<r2tim<<endl;                  //Racer 2 is second
                    cout<<racer3<<"\t";
                    cout<<setw(3)<<r3tim;                        //Racer 3 is third
                    }
                    else
                    {
                    cout<<racer3<<"\t";
                    cout<<setw(3)<<r3tim<<endl;                  //Racer 3 is second
                    cout<<racer2<<"\t";
                    cout<<setw(3)<<r2tim;                        //Racer 2 is third 
                    }
            }   
            else if(r2tim < r1tim&&r2tim < r3tim)       //If Racer 2 is faster then racer 2 and racer 3
            {
                cout<<racer2<<"\t";
                cout<<setw(3)<<r2tim<<endl;                      //Racer 2 in first
                    if (r1tim < r3tim)                  //If racer 1 is faster then racer 3
                    {
                    cout<<racer1<<"\t";
                    cout<<setw(3)<<r1tim<<endl;                  //Racer 1 is second
                    cout<<racer3<<"\t";
                    cout<<setw(3)<<r3tim;                        //Racer 3 is third
                    }
                    else
                    {
                    cout<<racer3<<"\t";
                    cout<<setw(3)<<r3tim<<endl;                  //Racer 3 is second
                    cout<<racer2<<"\t";
                    cout<<setw(3)<<r1tim;                        //Racer 1 is third 
                    }
            }
            else if(r3tim < r2tim&&r3tim < r1tim)       //If Racer 3 is faster then racer 2 and racer 3
            {
                cout<<racer3<<"\t";
                cout<<setw(3)<<r3tim<<endl;                      //Racer 3 in first
                    if (r1tim < r2tim)                  //If racer 1 is faster then racer 2
                    {
                    cout<<racer1<<"\t";
                    cout<<setw(3)<<r1tim<<endl;                  //Racer 1 is second
                    cout<<racer2<<"\t";
                    cout<<setw(3)<<r2tim;                        //Racer 2 is third
                    }
                    else
                    {
                    cout<<racer2<<"\t";
                    cout<<setw(3)<<r2tim<<endl;                  //Racer 2 is second
                    cout<<racer1<<"\t";
                    cout<<setw(3)<<r1tim;                        //Racer 1 is third 
                    }
            } 
        }

    //Exit stage right!
    return 0;
 
}