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
    //Set the random number seed
    
    //Declare Variables
    int number;
    string letter;
    //Initialize or input i.e. set variable values
cin >> number;
cin >> letter;
    //Map inputs -> outputs
    while(number < 0 || number > 15)
{
cout << "Invalid Input"<<endl;
cin >> number;
}

for (int i = 0; i < number; ++i)
{
    for (int j = 0; j < number; ++j)
    {
    cout << letter;
    }
if (number > i)
{
cout << endl;
}
else 



  
    
    


    //Display the outputs

    //Exit stage right or left!
    return 0;
}
}
