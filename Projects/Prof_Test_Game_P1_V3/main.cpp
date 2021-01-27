/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 19515
 * Problem:Roll 2 Dice
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
    unsigned char min, max, die1, die2, sum;
    unsigned int nloop, count;
    unsigned int freq2, freq3, freq4, freq5, freq6, freq7, freq8, freq9, freq10, freq11, freq12;
    
    //Initialize Variables
    min=max=(rand()%6+1)+(rand()%6+1);
    nloop = 3600000;
    count=0;
    freq2 = freq3 = freq4 = freq5 = freq6 = freq7 = freq8 = freq9 =freq10 = freq11 = freq12 = 0;
    
    //Map inputs to Outputs -> Process
    for(int thrw=1;thrw<=nloop;thrw++)
    {
        die1=rand()%6+1;//[1,6]
        die2=rand()%6+1;//[1,6]
        sum = die1 + die2;

        //cout<<"Throw = "<<thrw<<" Number = "<<static_cast<int>(die)<<endl;
        if (min>sum)min=sum;
        if (max<sum)max=sum;
        count++;
        switch(sum)
        {
            case 2:freq2++;break;
            case 3:freq3++;break;
            case 4:freq4++;break;
            case 5:freq5++;break;
            case 6:freq6++;break;
            case 7:freq7++;break;
            case 8:freq8++;break;
            case 9:freq9++;break;
            case 10:freq10++;break;
            case 11:freq11++;break;
            case 12:freq12++;break;
            default:
                cout<<"If you reached this point, you dont know what is up!"<<endl;
            
        }
    }
    
    //Display Inputs/Outputs
    cout<<" The max value = "<<static_cast<int>(max)<<endl;
    cout<<" The min value = "<<static_cast<int>(min)<<endl;
    cout<<"Frequency 2 = "<<freq2<<endl;
    cout<<"Frequency 3 = "<<freq3<<endl;
    cout<<"Frequency 4 = "<<freq4<<endl;
    cout<<"Frequency 5 = "<<freq5<<endl;
    cout<<"Frequency 6 = "<<freq6<<endl;
    cout<<"Frequency 7 = "<<freq7<<endl;
    cout<<"Frequency 8 = "<<freq8<<endl;
    cout<<"Frequency 9 = "<<freq9<<endl;
    cout<<"Frequency 10 = "<<freq10<<endl;
    cout<<"Frequency 11 = "<<freq11<<endl;
    cout<<"Frequency 12 = "<<freq12<<endl;
    cout<<"The count = "<<count<<" = "<<nloop<<endl;
    cout<<"Sum of Frequencies = "<<freq2 + freq3 + freq4 + freq5 + freq6 + freq7 + freq8 + freq9 + freq10 + freq11 + freq12<<endl;
    
    //Exit the Program - Cleanup
    return 0;
    
/*
    0 means equal
    >0 means greater
    <0 means lower

*/
}
