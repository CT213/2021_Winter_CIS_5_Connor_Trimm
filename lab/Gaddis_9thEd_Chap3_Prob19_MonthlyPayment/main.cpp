/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 19515
 *
 * Created on January 14, 2021, 5:12 PM
 */

#include <cstdlib>
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;


//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CVNPEN=100.0f; //Conversion to Pennies
const float HALFPEN=0.005f;//1/2 PENNY

//Function Prototypes


/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    unsigned int nCmpd; //Number of Compounding Periods in Months
    float   inRate,//Interest Rate in %/month
            loan,  //Loan in $'s
            mnPmt, //Monthly Payment in $'s
            totPmt,//Total Payment in $'s
            inPaid;//Interest Paid in $'s
    
    //Initialize Variables
    nCmpd=36;
    inRate=1e-2f;//1%
    loan=1e4f;   //$10,000
    
    //Process or map Inputs to Outputs
    float temp=pow(1+inRate,nCmpd);
    mnPmt=((inRate==0)?(loan/nCmpd):(inRate*temp*loan/(temp-1)));
    mnPmt=mnPmt+HALFPEN;//Add 1/2 Penny to round
    int imnPmt=mnPmt*CVNPEN;//Number of Pennies
    mnPmt=imnPmt/CVNPEN;//Number of Dollars rounded
    totPmt=mnPmt*nCmpd; //All Monthly Payments
    inPaid=totPmt-loan; //Cost of the Loan
    
    //Display Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Correct Calculations without Fractional Pennies"<<endl;
    cout<<"Loan:                $ "<<loan<<endl;
    cout<<"Number of Months       "<<setw(5)<<nCmpd<<endl;
    cout<<"Montly Interest:       "<<setw(8)<<inRate<<endl;
    cout<<"Monthly Payment:     $ "<<setw(8)<<mnPmt<<endl;
    cout<<"Total Paid for Loan: $ "<<totPmt<<endl;
    cout<<"Total Interest Paid: $ "<<setw(8)<<inPaid<<endl;

    //Exit stage right!
    return 0;
}

