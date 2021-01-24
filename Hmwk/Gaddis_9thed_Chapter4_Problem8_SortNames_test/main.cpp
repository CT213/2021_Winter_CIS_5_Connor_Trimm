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
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
char name1[100], name2[100], name3[100];
    //Declare Variables
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1;
    cin>>name2;
    cin>>name3;

    if ("name1" > "name2" && "name1" > "name3")                      //If name1 is greater 
    {
        cout<<name1<<endl;
        if ("name2" > "name3")                               //if name2 is greater then name3
        {
            cout<<name2<<endl;
            cout<<name3;
        }
        else                                             //else name3 is greater then name2
        {
            cout<<name3<<endl;
            cout<<name2;
        }
    }
    else if ("name2" > "name1" && "name2" > "name3")             //If name2 is greater
    {
        cout<<name2<<endl;
        if ("name1" > "name3")                               //If name1 is greater then name 3
        {
            cout<<name1<<endl;
            cout<<name3;
        }
        else                                              //else name3 is greater then name1
        {
            cout<<name3<<endl;
            cout<<name1;
        }
    }
        else if ("name3" > "name1" && "name3" > "name2")              //If name3 is greater
    {
        cout<<name3<<endl;
        if ("name1" > "name2")                                //If name1 is greater then name2
        {
            cout<<name1<<endl;
            cout<<name2;
        }
        else                                              //else name2 is greater then name1
        {
            cout<<name2<<endl;
            cout<<name1;
        }
    }
   // else if ("name3" > "name1" && "name1" > "name2")              //If name3 is greater
    //{
    //cout<<name3<<endl;
    //cout<<name2<<endl;
    //cout<<name1;
    //}
    //else 

        //cout<<name3<<endl;
        //cout<<name1<<endl;
        //cout<<name2;
    
    
            
    //Display Inputs/Outputs
    
    
    
    //Exit the Program - Cleanup
    return 0;
}
