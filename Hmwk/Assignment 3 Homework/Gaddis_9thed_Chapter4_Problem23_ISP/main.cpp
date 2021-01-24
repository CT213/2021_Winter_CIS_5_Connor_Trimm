/* 
 * File:   main.cpp
 * Author: Connor Trimm
 * Created on January 17, 2021, 4:17 PM
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
    unsigned short hour;  //Number of hours 
    char           pack;  //package of internet
    float          bill;  //Bill of package
    
   
    //Initialize Variables
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pack;
    cin>>hour;
    if (hour<=744){
    //If statements
    
        if(pack=='A'){
               float  price,
                      addHour;
               price = 9.95;
               if (hour>10){
               addHour = (hour-10) * 2.00;
               bill = price + addHour;
               }
               else {
                   bill=price;
               }
        }

        else if(pack=='B'){
               float  price,
                      addHour;
               price = 14.95;
               if (hour>20){
               addHour = (hour-20) * 1.00;
               bill = price + addHour;
               }
               else {
                   bill=price;
               }

        }else if(pack=='C'){
               bill = 19.95;      
        }
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"Bill = $"<<setw(6)<<bill;
       }
    else 
        cout<<"Just pay for package C"<<endl;
    


    //Exit stage right!
    return 0;
 
}