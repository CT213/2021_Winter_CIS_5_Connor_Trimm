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
#include <string>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    string name1,                                                            //Input 1
           name2,                                                            //Input 2
           name3;                                                            //Input 3
    //Declare Variables
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1;
    cin>>name2;
    cin>>name3;

//if (name1 > name2 && name1 > name3)                      //If name1 is greater 
    if(name1.compare(name2) <0 && name1.compare(name3) <0 )
    {
        cout<<name1<<endl;
        if (name2.compare(name3) <0)                               //if name2 is greater then name3
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
    else if(name2.compare(name1) <0 && name2.compare(name3) <0 )
    {
        cout<<name2<<endl;
        if (name1.compare(name3) <0)                               //if name2 is greater then name3
        {
            cout<<name1<<endl;
            cout<<name3;
        }
        else                                             //else name3 is greater then name2
        {
            cout<<name3<<endl;
            cout<<name1;
        }
    }
    else if(name3.compare(name1) <0 && name3.compare(name1) <0 )
    {
        cout<<name3<<endl;
        if (name1.compare(name2) <0)                               //if name2 is greater then name3
        {
            cout<<name1<<endl;
            cout<<name2;
        }
        else                                             //else name3 is greater then name2
        {
            cout<<name2<<endl;
            cout<<name1;
        }
    }
  //  else if (name2 > name1 && name2 > name3)             //If name2 is greater
  //  {
  //      cout<<name2<<endl;
  //      if (name1 > name3)                               //If name1 is greater then name 3
  //      {
  //          cout<<name1<<endl;
  //          cout<<name3;
  //      }
  //      else                                              //else name3 is greater then name1
  //      {
  //          cout<<name3<<endl;
  //          cout<<name1;
  //      }
  //  }
   // else if (name3 > name1 && name3 > name2)              //If name3 is greater
   // {
   //     cout<<name3<<endl;
   //     if (name1 > name2)                                //If name1 is greater then name2
   //     {
   //         cout<<name1<<endl;
   //         cout<<name2;
   //     }
   //     else                                              //else name2 is greater then name1
   //     {
   //         cout<<name2<<endl;
   //         cout<<name1;
   //     }
   // }
   // else 
   //     cout<<"something broke\n";
   //     cout<<name3<<endl;
   //     cout<<name2<<endl;
   //     cout<<name1<<endl;
    
 
    
            
    //Display Inputs/Outputs
    
    
    
    //Exit the Program - Cleanup
    return 0;
}
