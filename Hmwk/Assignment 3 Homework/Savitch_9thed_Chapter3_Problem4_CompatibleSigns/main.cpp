/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Problem:Sort Names
 * Created on January 17, 2021, 2:52 PM
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
int main(int argc, char** argv) {
    //Initialize the Random Number Seed

    string scope1,                                                            //Input 1
           scope2;                                                            //Input 2
    //Declare Variables
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>scope1;
    cin>>scope2;


    //Initialize Variables
   

         
        //Fire Signs
        if (scope1 == "Aries" || scope1 == "Leo" || scope1 == "Sagittarius")
        {
            if (scope2 == "Aries" || scope2 == "Leo" || scope2 == "Sagittarius")
            {
                 cout<<scope1<<" and "<<scope2<<" are compatible Fire signs.";
            }
            else 
            {
            cout<<scope1<<" and "<<scope2<<" are not compatible signs.";
            }
        }
        //Earth Signs
        else if (scope1 == "Taurus" || scope1 == "Virgo" || scope1 == "Capricorn")
        { 
            if (scope2 == "Taurus" || scope2 == "Virgo" || scope2=="Capricorn")
            {
                 cout<<scope1<<" and "<<scope2<<" are compatible Earth signs.";
            }
            else 
            {
            cout<<scope1<<" and "<<scope2<<" are not compatible signs.";
            }
        }
        //Air Signs
        else if(scope1 == "Gemini" || scope1 == "Libra" || scope1 == "Aquarius")
        {
            if (scope2 == "Gemini" || scope2 == "Libra" || scope2 == "Aquarius")
            {
                 cout<<scope1<<" and "<<scope2<<" are compatible Air signs.";
            }
            else 
            {
            cout<<scope1<<" and "<<scope2<<" are not compatible signs.";
            }
        }
        //Water Signs
        else if(scope1 == "Cancer" || scope1 == "Scorpio" || scope1 == "Pisces")
        {
            if (scope2 == "Cancer" || scope2 == "Scorpio" || scope2 == "Pisces")
            {
                 cout<<scope1<<" and "<<scope2<<" are compatible Water signs.";
            }
            else 
            {
            cout<<scope1<<" and "<<scope2<<" are not compatible signs.";
            }
        }
        //Signs do not match up


    //Exit the Program - Cleanup
    return 0;
}
