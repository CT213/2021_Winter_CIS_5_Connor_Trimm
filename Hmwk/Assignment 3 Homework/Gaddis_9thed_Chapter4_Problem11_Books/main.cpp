/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Created on January 17, 2021, 2:52 PM
 * Purpose:  Roman Conversion
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
   unsigned short books,
                  points;
    
    //Initialize Variables
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>books;
    if(books<=0)
        points=0;
    else if(books<=1)
        points=5;
    else if(books<=2)
        points=15;
    else if (books<=3)
        points=30;
    else if (books>=4)
        points=60;
    
    //Process or map Inputs to Outputs

        
    
     //Output the number of 1000's in Roman Numerals

       

    //Display Outputs

       cout<<fixed<<setprecision(3)<<showpoint;
    cout<<"Books purchased ="<<setw(3)<<books<<endl;
    cout<<"Points earned   ="<<setw(3)<<points;

    //Exit stage right!
    return 0;
 
}