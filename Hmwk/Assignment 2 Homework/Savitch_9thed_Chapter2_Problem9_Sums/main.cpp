/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Created on January 13, 2021, 2:30 PM
 * Purpose:  DietCoke
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
    float x;//Variable to input 10 times
    int sumTot,sumNeg,sumPos;//Sums
    
    //Initialize Variables
    sumTot=sumNeg=sumPos=0;
    
    //Process or map Inputs to Outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;


    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
    

    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
    

    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;


    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;


    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;


    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;


    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;


    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;


    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
    
    //Sum total simply sum of both positive and negative
    sumTot=sumPos+sumNeg;

    //Display Outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"Negative sum = "<<setw(3)<<sumNeg<<endl;
    cout<<"Positive sum = "<<setw(3)<<sumPos<<endl;
    cout<<"Total sum    = "<<setw(3)<<sumTot;
    
    
    //Exit stage right!
    return 0;
 
}