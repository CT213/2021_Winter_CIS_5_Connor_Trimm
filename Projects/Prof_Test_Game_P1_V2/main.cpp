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

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int> (time(0)));
    
    //Declare Variables
    unsigned char min, max, die;
    unsigned int nloop;
    unsigned int freq1, freq2, freq3, freq4, freq5, freq6;
    
    //Initialize Variables
    min=max=rand()%6+1;
    nloop = 3600;
    freq1 = freq2 = freq3 = freq4 = freq5 = freq6 = 0;
    
    //Map inputs to Outputs -> Process
    for(int thrw=1;thrw<=nloop;thrw++)
    {
        die=rand()%6+1;//[1,6]
        //cout<<"Throw = "<<thrw<<" Number = "<<static_cast<int>(die)<<endl;
        if (min>die)min=die;
        if (max<die)max=die;
        switch(die)
        {
            case 1:freq1++;break;
            case 2:freq2++;break;
            case 3:freq3++;break;
            case 4:freq4++;break;
            case 5:freq5++;break;
            case 6:freq6++;break;
            default:
                cout<<"If you reached this point, you dont know what is up!"<<endl;
            
        }
    }
    
    //Display Inputs/Outputs
    cout<<" The max value "<<static_cast<int>(max)<<endl;
    cout<<" The min value "<<static_cast<int>(min)<<endl;
    cout<<"Frequency 1 = "<<freq1<<endl;
    cout<<"Frequency 2 = "<<freq2<<endl;
    cout<<"Frequency 3 = "<<freq3<<endl;
    cout<<"Frequency 4 = "<<freq4<<endl;
    cout<<"Frequency 5 = "<<freq5<<endl;
    cout<<"Frequency 6 = "<<freq6<<endl;
    
    //Exit the Program - Cleanup
    return 0;
    
/*
    0 means equal
    >0 means greater
    <0 means lower

*/
}
