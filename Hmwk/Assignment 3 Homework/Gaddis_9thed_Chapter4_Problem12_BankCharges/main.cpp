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
    float bal,     //Balance
          numCh,   //Number of Checks
          chFee,   //Check Fee
          monFee,  //Month Fee
          lowBal,  //Low balance Fee
          newBal;  //New Balance
    
    //Initialize Variables
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>bal;
    cin>>numCh;
    //If statements for Check Fee
    if(numCh<=19)
        chFee=numCh*0.10;
    if(numCh>=20&&numCh<=39)
        chFee=numCh*0.08;
    if(numCh>=40&&numCh<=59)
        chFee=numCh*0.06;
    if(numCh>=60)
        chFee=numCh*0.04;
    
    //If statements for balance charge
      if(bal<=399)  //low balance fee of $15
        lowBal=15;
    else if (bal>=400)
        lowBal=0;
    
    //Process or map Inputs to Outputs
    monFee=10;    //Monthly Fee of $10
    newBal=bal-chFee-monFee-lowBal;
    
       

       

    //Display Outputs

       cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Balance     $"<<setw(9)<<bal<<endl;
    cout<<"Check Fee   $"<<setw(9)<<chFee<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<monFee<<endl;
    cout<<"Low Balance $"<<setw(9)<<lowBal<<endl;
    cout<<"New Balance $"<<setw(9)<<newBal;


    //Exit stage right!
    return 0;
 
}