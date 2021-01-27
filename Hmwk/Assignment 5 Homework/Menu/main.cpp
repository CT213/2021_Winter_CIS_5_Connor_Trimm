/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 19515
 *
 * Created on January 4, 2021, 12:55 PM
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max
int fctrl(int);//Function to write for this problem
bool isPrime(int);//Determine if the input number is prime.
int collatz(int);//3n+1 sequence
int hour (int);
int min (int);
float present(float, float, int);//P=F/(1+r)^n
float calcAvg(int,int,int,int,int);
int fndLwst(int,int,int,int,int);
//Execution Begins Here
//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    string time;
    string half;
    char choice;


    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for MinMax"<<endl;
    cout<<"Type 2 for Factor"<<endl;
    cout<<"Type 3 for IsPrime"<<endl;
    cout<<"Type 4 for Collatz Sequence"<<endl;
    cout<<"Type 5 for Collatz Sequence with Output of Sequence"<<endl;
    cout<<"Type 6 for Sav9EdC5P12"<<endl;
    cout<<"Type 7 for Savitch 9thEd Chap5 Prob1 TimeConverter"<<endl;
    cout<<"Type 8 for Gaddis 9thEd Chap6 Prob9 Present Value"<<endl;
    cout<<"Type 9 for Gaddis 9thEd Chap6 Prob10 Average"<<endl;
    cin>>choice;
    
    switch(choice)
    {
        case '1':
        //Initialize the Random Number Seed

        //Declare Variables
        int min, max, num1, num2, num3;


        //Initialize Variables
        cout<<"Input 3 numbers"<<endl;
        cin>>num1;
        cin>>num2;
        cin>>num3;
        max = min = num1;

        //Map inputs to Outputs -> Process
        minmax(num1, num2, num3, min, max);
        //Display Inputs/Outputs
        cout<<"Min = "<<min<<endl;
        cout<<"Max = "<<max;

        //Exit the Program - Cleanup
    
            break;
        case '2':
        //Initialize the Random Number Seed

        //Declare Variables
        int fac;


        //Initialize Variables
        cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
        cout<<"Input the number for the function."<<endl;
        cin>>fac;



        //Map inputs to Outputs -> Process
        fctrl(fac);
        //Display Inputs/Outputs
        cout<<fac<<"! = "<<fctrl(fac);

        //Exit the Program - Cleanup   
            break;
        case '3':
        //Initialize the Random Number Seed

        //Declare Variables
        int pri;


        //Initialize Variables
        cout<<"Input a number to test if Prime."<<endl;
        cin>>pri;

        //Map inputs to Outputs -> Process
        isPrime(pri);
        //Display Inputs/Outputs
        if (isPrime(pri))
            cout<<pri<<" is prime.";
        else 
            cout<<pri<<" is not prime.";

        //Exit the Program - Cleanup    
            break;
        case '4':
                     //Declare Variables
        int n;

        //Initialize Variables
        cout<<"Collatz Conjecture Test"<<endl;
        cout<<"Input a sequence start"<<endl;
        cin>>n;

        //Process/Map inputs to outputs
        cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                collatz(n)<<" steps";

        //Output data

        //Exit stage right!   
            break;
        case '5':
             //Declare Variables
        int ns;

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
            break;
        case '6':
            //Initialize the Random Number Seed
    
    //Declare Variables
    char    choice1, ampm;
    
    unsigned short chour, cmin, wait, addh;
    //Initialize 
    do 
    {
        cout<<"Enter hour:"<<endl;
        cin>>chour;
        cout<<endl;
        cout<<"Enter minutes:"<<endl;
        cin>>cmin;
        cout<<endl;
        cout<<"Enter A for AM, P for PM:"<<endl;
        cin>>ampm;
        cout<<endl;
        cout<<"Enter waiting time:"<<endl;
        cin>>wait;
        cout<<endl;
        addh=0;
        ampm = toupper(ampm);
        //Map inputs
        if (ampm == 'A'||ampm == 'a')
            half = " AM";
        else if (ampm == 'P'||ampm == 'p')
            half = " PM";
        
        cout<<"Current time = ";
        if(chour < 10 && cmin >=10)
        {
            cout<<"0"<<chour<<":"<<cmin<<half<<endl;
        }
        else if (chour  >= 10 && cmin < 10)
        {
            cout<<chour<<":"<<"0"<<cmin<<half<<endl;
        }
        else if (chour < 10 && cmin < 10)
        {
            cout<<"0"<<chour<<":"<<"0"<<cmin<<half<<endl;
        }
        else 
        {
            cout<<chour<<":"<<cmin<<half<<endl;
        }
        cmin = cmin + wait;
        while(cmin > 59)
        {
            cmin -= 60;
            addh++;
        }
        chour = chour + addh;
        if (chour > 11 && ampm == 'A'||chour > 11 && ampm == 'a')
        {
            if (addh > 11)
            {
                ampm = 'A';
            }
            else 
            {
                ampm = 'P';
            }
            if (chour >= 13)
            {
                chour -= 12;
            }
        }
        else if (chour > 11 && ampm == 'P'||chour > 11 && ampm == 'p')
        {
            if (addh > 11)
            {
                ampm = 'P';
            }
            else 
            {
                ampm = 'A';
            }
            if (chour >= 13)
            {
                chour -= 12;
            }
        }
        if (ampm == 'A'||ampm == 'a')
            half = " AM";
        else if (ampm == 'P'||ampm == 'p')
            half = " PM";
        
        //Output
        cout<<"Time after waiting period = ";
        if(chour < 10 && cmin >=10)
        {
            cout<<"0"<<chour<<":"<<cmin<<half<<endl;
        }
        else if (chour  >= 10 && cmin < 10)
        {
            cout<<chour<<":"<<"0"<<cmin<<half<<endl;
        }
        else if (chour < 10 && cmin < 10)
        {
            cout<<"0"<<chour<<":"<<"0"<<cmin<<half<<endl;
        }
        else 
        {
            cout<<chour<<":"<<cmin<<half<<endl;
        }
        cout<<endl;
        
        cout<<"Again:"<<endl;                                                                                           //Again code to see if it is to run again
        cin>>choice1;
            if (choice1 == 'y' || choice1 == 'Y')
            {
            cout<<endl;
            
            }
    }while (choice1 =='Y' || choice1 == 'y');
            break;
        case '7':
          //Initialize the Random Number Seed

            //Declare Variables
            char choice;
            
            int hours, minut;


            //Initialize Variables
         cout<<"Military Time Converter to Standard Time"<<endl;
             cout<<"Input Military Time hh:mm"<<endl;
         do
        {


            cin>>time;

            hours = (time[0]-48)*10+(time[1]-48);
            minut = (time[3]-48)*10+(time[4]-48);


                if (hours>24 ||minut>59)
                {
                    cout<<time<<" is not a valid time"<<endl;
                }

                else if (hours>=12)
                {
                hour(hours);  
                cout<<time<<" = "<<hour(hours)<<":"<<minut<<" PM"<<endl;
                }
                else 
                {
                    if (hours>=1)
                    {
                        hour(hours);  
                        cout<<time<<" = "<<hour(hours)<<":"<<minut<<" AM"<<endl;  
                    }
                    else
                    {
                        cout<<time<<" = "<<"12"<<":"<<minut<<" AM"<<endl; 
                    }
                }

                cout<<"Would you like to convert another time (y/n)"<<endl;                                                                                           //Again code to see if it is to run again
                cin>>choice;


        }
                    while (choice =='Y' || choice == 'y');
            break;
        case '8':
            //Declare Variables
        float  fut,
            numyea;
        int  irate;

        //Initialize Variables
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"This is a Present Value Computation"<<endl;
        cout<<"Input the Future Value in Dollars"<<endl;
        cin>>fut;
        cout<<"Input the Number of Years"<<endl;
        cin>>numyea;
        cout<<"Input the Interest Rate %/yr"<<endl;
        cin>>irate;


        //Process/Map inputs to outputs


        //Output data

        cout<<"The Present Value = $"<<present(fut, irate, numyea);


        //Exit stage right!    
            break;
        case '9':
        //Declare Variables
        int test1, test2, test3, test4, test5;
        //Initialize Variables
        cout<<fixed<<setprecision(1)<<showpoint;
        cout<<"Find the Average of Test Scores"<<endl;
        cout<<"by removing the lowest value."<<endl;
        cout<<"Input the 5 test scores."<<endl;
        cin>>test1;
        cin>>test2;
        cin>>test3;
        cin>>test4;
        cin>>test5;

        //Process/Map inputs to outputs


        //Output data

        cout<<"The average test score = "<<calcAvg(test1, test2, test3, test4, test5);


        //Exit stage right!
            break;
        default:
            cout<<"Not an Option"<<endl;
    }//End of Switch Case

    //Clean Up
    
    //Exit stage right!
    return 0;
}
void minmax(int num1,int num2,int num3, int&min, int&max)
{
if (num1 < min)    
{
   min = num1;
}
else if (num2 < min)    
{
   min = num2;

}
else if (num3 < min)    
{
   min = num3;

}
if (num1 > max)    
{
   max = num1;
}
else if (num2 > max)    
{
   max = num2;

}
else if (num3 > max)    
{
   max = num3;

}

}
int fctrl(int fac)
{
    int num = 1, i;
    for (i = 2; i <= fac; i++)
        num *=i;
    return num;
}
bool isPrime(int pri)
{
    int i;
    bool status = true;

    if (pri == 0 || pri == 1)
    {
    status = false;
    }
    else 
    {
        for ( i = 2; i <= pri/2; i++)
        {
           if (pri % i ==0)
           {
               status = false;
           }
        }
    }

    return status;
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
int hour (int hours)
{
    if (hours>12)
    {
        hours -=12;
    }
    return hours;
}
float present(float fut, float irate, int numyea)
{
    float present = 0;
    float part1, part2, part3;
    part1 = 1+(irate*0.01);
    part2 = numyea;
    part3 = pow(part1,part2);
    
    present = fut/part3;
    
    return present;
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