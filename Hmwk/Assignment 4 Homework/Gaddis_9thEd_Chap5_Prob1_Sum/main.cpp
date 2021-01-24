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
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned int usIn,  //User input
                sum;    //Sum out
    
    //Initialize Variables
    cin>>usIn;
    sum=0;
    
    //Map inputs to Outputs -> Process
    if (usIn >50){
        cout<<"Sorry you cant input numbers higher then 50";
    }
    else if (usIn<=50){
        for (int i = 1; i <= usIn; i++){
          sum+=i;
        }
  
    //Display Inputs/Outputs
    cout<<"Sum = "<<sum;
    }
    //Exit the Program - Cleanup
    return 0;
    
/*
    0 means equal
    >0 means greater
    <0 means lower

*/
}
