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
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays

//Function Prototypes
float calcAvg(int,int,int,int,int);
int fndLwst(int,int,int,int,int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int test1, test2, test3, test4, test5;
    //Initialize Variables
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"By removing the lowest value."<<endl;
    cout<<"Input the 5 test scores."<<endl;
    cin>>test1;
    cin>>test2;
    cin>>test3;
    cin>>test4;
    cin>>test5;
    calcAvg(test1, test2, test3, test4, test5);
    //Process/Map inputs to outputs

    
    //Output data
    
    cout<<"The average test score = "<<calcAvg(test1, test2, test3, test4, test5);
    
    
    //Exit stage right!
    return 0;
}
float calcAvg(int test1,int test2,int test3,int test4,int test5)
{
        int calcAvg;
        int lowest= fndLwst(test1, test2, test3, test4, test5);
    if (test1==lowest)
    calcAvg = (test2+test3+test4+test5)/4; 
    
    else if (test2==lowest)
    calcAvg = (test1+test3+test4+test5)/4;
    
    else if (test3==lowest)
    calcAvg = (test1+test2+test4+test5)/4;
    
    else if (test4==lowest)
    calcAvg = (test1+test2+test3+test5)/4;
    
    else
    calcAvg = (test1+test2+test3+test4)/4;
    
    return calcAvg;

}
int fndLwst(int test1,int test2,int test3,int test4,int test5)
{
    
    if (test1 < test2 && test1 < test3 && test1 < test4 && test1 < test5)
    return test1;
    else if (test2 < test3 && test2 < test4 && test2 < test5 && test2 < test1)
    return test2;
    else if (test3 < test4 && test3 < test5 && test3 < test1 && test3 < test2)
    return test3;
    else if (test4 < test5 && test4 < test1 && test4 < test2 && test4 < test3)
    return test4;
    else 
    return test5;

}