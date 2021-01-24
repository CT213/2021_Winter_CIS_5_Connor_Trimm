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
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int         usIn,  //User input days worked 
                pay,   //pay out
                pay2; // pay out 2
    
    //Initialize Variables
    cin>>usIn;
    pay=0;
    
    //Map inputs to Outputs -> Process
    if (usIn < 1){
        cout<<"Sorry you cant input numbers lower then 1";
    }
    else if (usIn >= 1){
        
        if (usIn <=2 )
        for (int i = 1; i <= usIn; i++)
        {
            pay = pay + i;
    
        }
       else if (usIn >=3 )
        for (int i = 1; i <= usIn; i++)
        {
            
            pay = (2*pay) + 1;
    
        }
  
    //Display Inputs/Outputs
     //cout<<fixed<<setprecision(2)<<showpoint;   
     

     cout<<"Pay = $"<<(00.01*pay);

    //Exit the Program - Cleanup
    return 0;
}
}
/*int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int wrkday,    //Work day
        pay,       //Pay for that work day
        preday;    //previous day 
    //Initialize Variables
    cin>>wrkday;  //work day input
if (wrkday < 1){
        cout<<"Sorry you cant input numbers lower then 1";
    }
    else if (wrkday >= 1)
    {
        
    //Map inputs to Outputs -> Process
        if (wrkday <= 2)    
        {
         preday = ((wrkday - 1) * 2) + 1;
        //Display Inputs/Outputs
        cout<<"Pay = $"<<(00.01*preday);
        }
        

    //Exit the Program - Cleanup
    }
    return 0;
}

    0 means equal
    >0 means greater
    <0 means lower

 * 
 * 
 * int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int         usIn,  //User input days worked 
                pay;   //pay out
    
    //Initialize Variables
    cin>>usIn;
    pay=0;
    
    //Map inputs to Outputs -> Process
    if (usIn < 1){
        cout<<"Sorry you cant input numbers lower then 1";
    }
    else if (usIn >= 1){
        
        for (int i = 1; i <= usIn; i++){
            pay += i;
    
        }
  
    //Display Inputs/Outputs
     //cout<<fixed<<setprecision(2)<<showpoint;   
     
           if (pay <= 3)
        {
     cout<<"Pay = $"<<(00.01*pay);
        }
        else if (pay >= 4)
        {
          cout<<"Pay = $"<<((00.01*pay)+00.01);  
        }
    }
    //Exit the Program - Cleanup
    return 0;
}
 * int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int wrkday,    //Work day
        pay,       //Pay for that work day
            extra;
    //Initialize Variables
    cin>>wrkday;
    if (wrkday < 1){
        cout<<"Sorry you cant input numbers lower then 1";
    }
    else if (wrkday >= 1)
    {
    //Map inputs to Outputs -> Process
    pay = (wrkday * (wrkday-1))+1;
    //Display Inputs/Outputs
      cout<<"Pay = $"<<(00.01*pay);
    }
    //Exit the Program - Cleanup
    return 0;
}
*/

