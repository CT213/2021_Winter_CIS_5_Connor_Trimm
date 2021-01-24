/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 19515
 * Problem:Dieter
 * Created on January 12, 2021, 10:30 AM
 */

//System Libraries
#include <iostream> //I/O Libary
#include <cstdlib>
#include <iomanip>  //Formating Library
#include <cstdlib>  //Randow number function
#include <ctime>    //Time libary to set the randow number seed
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays
const float CNVENGM=453.592; // pounds to grams
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    string name;         //name of dieter
    float massMs=35,     //Mass of mouse 35 grams
          massKms=5,     //Mass to kill the mouse
          massCoke=350,      //Mass of coke
          cncnt8=0.001f, //concentration of sweetner in a can of diet coke
          wDieter;       //Weight of the dieter
    int nCans;           //number of cans of coke
            
    
    //Initialize Variables
    cout<<"this programs calculates the maximum Diet Cans of Coke"<<endl;
    cout<<"A dieter can drink"<<endl;
    cout<<"Input name of dieter"<<endl;
    getline(cin,name);
    cout<<"Write in weight of dieter in lbs"<<endl;
    cin>>wDieter;
    
    
    //wDieter=rand()%(350-90+1)+90; //Range from 90 to 350
   
    
    //Map inputs to Outputs -> Process
    nCans=(massKms*wDieter*CNVENGM)/(massMs*massCoke*cncnt8);
    //Display Inputs/Outputs
    cout<<"The name of the dieter is = "<<name<<endl;
    cout<<"The maximum number of cans of coke  = "<<nCans<<" that an individual"
            <<" weighting  "<<wDieter<<" lbs can drink"<<endl;
    //Exit the Program - Cleanup
    return 0;
}
