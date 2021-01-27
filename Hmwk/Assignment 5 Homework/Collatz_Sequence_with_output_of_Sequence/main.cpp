/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 19515
 * Problem:Roll Dice
 * Created on January 25, 2021, 11:15 AM
 */

//System Libraries
#include <iostream> //I/O Libary
#include <cstdlib>  //Random number
#include <ctime>    //time set the seed
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays

//Function Prototypes
int collatz(int);//3n+1 sequence
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n, ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
    //Exit stage right!
    return 0;
}
int collatz(int n)
{
int steps=1;    
cout<<n<<", ";
do{
    steps++;
    if (n%2)
    {
        n = 3*n+1;
    }
    else
    {
        n/=2;
    }
    cout<<n;
    if(n!=1)
    cout<<", ";
}while(n>1);
cout<<endl;
return steps;
}