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
const float CNVGRMS=453.592;//Grams/lb
const float PI=4*atan(1);
const float CNVRAD=PI/180;//Conversion to Radians from Degrees

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;
    string scope1,                                                            //Input 1 for type 8
         scope2;                                                            //Input 2 for type 8
    string racer1,  //racer 1 input for type 4
         racer2,  //racer 2 input for type 4
         racer3;  //racer 3 input for type 4
    string name1,   //Input 1 for Type 1
         name2,   //Input 2 for Type 1
         name3;   //Input 3 for Type 1

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for  Gaddis 9thEd Chap4 Prob8 SortNames"<<endl;
    cout<<"Type 2 for Gaddis 9thEd Chap4 Prob11 Books"<<endl;
    cout<<"Type 3 for Gaddis 9thEd Chap4 Prob12 BankCharges"<<endl;
    cout<<"Type 4 for Gaddis 9thEd Chap4 Prob14 Race"<<endl;
    cout<<"Type 5 for Gaddis 9thEd Chap4 Prob23 ISP"<<endl;
    cout<<"Type 6 for Savitch 9thEd Chap3 PracProb1 RockPaperScissors"<<endl;
    cout<<"Type 7 for Savitch 9thEd Chap3 Prob3 Roman Conversion"<<endl;
    cout<<"Type 8 for Savitch 9thEd Chap3 PracProb4 CompatibleSigns"<<endl;
    cin>>choice;
    
    switch(choice){
        case '1':
                //Initialize the Random Number Seed

    //Declare Variables
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1;
    cin>>name2;
    cin>>name3;

//if (name1 > name2 && name1 > name3)                      //If name1 is greater 
    if(name1.compare(name2) <0 && name1.compare(name3) <0 )
    {
        cout<<name1<<endl;
        if (name2.compare(name3) <0)                               //if name2 is greater then name3
        {
            cout<<name2<<endl;
            cout<<name3;
        }
        else                                             //else name3 is greater then name2
        {
            cout<<name3<<endl;
            cout<<name2;
        }
    }
    else if(name2.compare(name1) <0 && name2.compare(name3) <0 )
    {
        cout<<name2<<endl;
        if (name1.compare(name3) <0)                               //if name2 is greater then name3
        {
            cout<<name1<<endl;
            cout<<name3;
        }
        else                                             //else name3 is greater then name2
        {
            cout<<name3<<endl;
            cout<<name1;
        }
    }
    else if(name3.compare(name1) <0 && name3.compare(name1) <0 )
    {
        cout<<name3<<endl;
        if (name1.compare(name2) <0)                               //if name2 is greater then name3
        {
            cout<<name1<<endl;
            cout<<name2;
        }
        else                                             //else name3 is greater then name2
        {
            cout<<name2<<endl;
            cout<<name1;
        }
    }
            break;
        case '2':
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
            break;
        case '3':
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
            break;
        case '4':
                //Declare Variable Data Types and Constants


    float    r1tim,   //racer 1 time input
           r2tim,   //racer 2 time input
           r3tim;   //racer 3 time input

   
    //Initialize Variables
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cin>>racer1;    //racer 1 inputs
    cin>>r1tim;     //racer 1 time Inputs
    cin>>racer2;    //racer 2 inputs
    cin>>r2tim;     //racer 2 time Inputs
    cin>>racer3;    //racer 3 inputs
    cin>>r3tim;     //racer 3 time Inputs
        
    //If statements 
        if(r1tim<0||r2tim<0||r3tim<0){                  //Racers names and times
            cout<<"Sorry no one can run back in time";  //An invalid time was input
        }
        else
        { 

        cout<<"Their names, then their times"<<endl;
            if(r1tim < r2tim&&r1tim < r3tim)            //If Racer 1 is faster then racer 2 and racer 3
            {
                cout<<racer1<<"\t";
                cout<<setw(3)<<r1tim<<endl;
                    if (r2tim < r3tim)                  //If racer 2 is faster then racer 3
                    {
                    cout<<racer2<<"\t";
                    cout<<setw(3)<<r2tim<<endl;                  //Racer 2 is second
                    cout<<racer3<<"\t";
                    cout<<setw(3)<<r3tim;                        //Racer 3 is third
                    }
                    else
                    {
                    cout<<racer3<<"\t";
                    cout<<setw(3)<<r3tim<<endl;                  //Racer 3 is second
                    cout<<racer2<<"\t";
                    cout<<setw(3)<<r2tim;                        //Racer 2 is third 
                    }
            }   
            else if(r2tim < r1tim&&r2tim < r3tim)       //If Racer 2 is faster then racer 2 and racer 3
            {
                cout<<racer2<<"\t";
                cout<<setw(3)<<r2tim<<endl;                      //Racer 2 in first
                    if (r1tim < r3tim)                  //If racer 1 is faster then racer 3
                    {
                    cout<<racer1<<"\t";
                    cout<<setw(3)<<r1tim<<endl;                  //Racer 1 is second
                    cout<<racer3<<"\t";
                    cout<<setw(3)<<r3tim;                        //Racer 3 is third
                    }
                    else
                    {
                    cout<<racer3<<"\t";
                    cout<<setw(3)<<r3tim<<endl;                  //Racer 3 is second
                    cout<<racer2<<"\t";
                    cout<<setw(3)<<r1tim;                        //Racer 1 is third 
                    }
            }
            else if(r3tim < r2tim&&r3tim < r1tim)       //If Racer 3 is faster then racer 2 and racer 3
            {
                cout<<racer3<<"\t";
                cout<<setw(3)<<r3tim<<endl;                      //Racer 3 in first
                    if (r1tim < r2tim)                  //If racer 1 is faster then racer 2
                    {
                    cout<<racer1<<"\t";
                    cout<<setw(3)<<r1tim<<endl;                  //Racer 1 is second
                    cout<<racer2<<"\t";
                    cout<<setw(3)<<r2tim;                        //Racer 2 is third
                    }
                    else
                    {
                    cout<<racer2<<"\t";
                    cout<<setw(3)<<r2tim<<endl;                  //Racer 2 is second
                    cout<<racer1<<"\t";
                    cout<<setw(3)<<r1tim;                        //Racer 1 is third 
                    }
            } 
        }
            break;
        case '5':
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
            break;
        case '6':
            //Declare Variable Data Types and Constants

    char user1,  //User 1 input
         user2;  //User 2 input


   
    //Initialize Variables
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>user1;                                //User1 inputs
    cin>>user2;                                //User2 Inputs
 
        
        
        if(user1=='P'&&user2=='R'||user1=='p'&&user2=='r'||user1=='P'&&user2=='r'||user1=='p'&&user2=='R'){             //User1 inputs paper and User2 inputs Rock
            cout<<"Paper covers rock.";
        }
           else if(user1=='R'&&user2=='S'||user1=='r'&&user2=='s'||user1=='R'&&user2=='s'||user1=='r'&&user2=='S'){     //User1 inputs Rock and User2 inputs Scissors
            cout<<"Rock breaks scissors.";
        }
           else if(user1=='S'&&user2=='P'||user1=='s'&&user2=='p'||user1=='S'&&user2=='p'||user1=='s'&&user2=='P'){     //User1 inputs Scissors and User2 inputs Paper
            cout<<"Scissors cuts paper.";
       }
            else if(user1=='R'&&user2=='P'||user1=='r'&&user2=='p'||user1=='R'&&user2=='p'||user1=='r'&&user2=='P'){     //User1 inputs Rock and User2 inputs Paper
            cout<<"Paper covers rock.";
        }
           else if(user1=='S'&&user2=='R'||user1=='s'&&user2=='r'||user1=='S'&&user2=='r'||user1=='s'&&user2=='R'){     //User1 inputs Scissors and User2 inputs Rock
            cout<<"Rock breaks scissors.";
        }
           else if(user1=='P'&&user2=='S'||user1=='p'&&user2=='s'||user1=='P'&&user2=='s'||user1=='p'&&user2=='S'){     //User1 inputs paper and User2 inputs Scissors
            cout<<"Scissors cuts paper.";
        }
        else
            cout<<"Nobody wins.";                                       //No one wins
            break;
        case '7':
                   //Declare Variable Data Types and Constants
   unsigned short n2Cnvrt;
    
    //Initialize Variables
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>n2Cnvrt;
    if(n2Cnvrt>=1000&&n2Cnvrt<=3000){
    
    //Process or map Inputs to Outputs
        unsigned char n1000s,n100s,n10s,n1s;
        n1000s=n2Cnvrt/1000;
        n100s=(n2Cnvrt-n1000s*1000)/100;
        n10s=(n2Cnvrt-n1000s*1000-n100s*100)/10;
        n1s=n2Cnvrt%10;
        
    
     //Output the number of 1000's in Roman Numerals
       cout<<n2Cnvrt<<" is equal to ";
        switch(n1000s){
            case 3:cout<<'M';
            case 2:cout<<'M';
            case 1:cout<<'M';
        }

    //Display Outputs
cout<<(n100s==9?"CM":
               n100s==8?"DCCC":
               n100s==7?"DCC":
               n100s==6?"DC":
               n100s==5?"D":
               n100s==4?"CD":
               n100s==3?"CCC":
               n100s==2?"CC":
               n100s==1?"C":"");
        
        //Output the number of 10's
        if(n10s==9)cout<<"XC";
        if(n10s==8)cout<<"LXXX";
        if(n10s==7)cout<<"LXX";
        if(n10s==6)cout<<"LX";
        if(n10s==5)cout<<"L";
        if(n10s==4)cout<<"XL";
        if(n10s==3)cout<<"XXX";
        if(n10s==2)cout<<"XX";
        if(n10s==1)cout<<"X";
        
        //Output the number of 1's
        if(n1s==9)cout<<"IX";
        else if(n1s==8)cout<<"VIII";
        else if(n1s==7)cout<<"VII";
        else if(n1s==6)cout<<"VI";
        else if(n1s==5)cout<<"V";
        else if(n1s==4)cout<<"IV";
        else if(n1s==3)cout<<"III";
        else if(n1s==2)cout<<"II";
        else if(n1s==1)cout<<"I";
        
        //Reiterate the input value
        
       
                
    //The Path to Exit
    }else{
        cout<<n2Cnvrt<<" is Out of Range!";
        
    }
            break;
        case '8':
    //Initialize the Random Number Seed

    //Declare Variables
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>scope1;
    cin>>scope2;



    //Initialize Variables
   


        //Fire Signs
        if (scope1 == "Aries" || scope1 == "Leo" || scope1 == "Sagittarius")
        {
            if (scope2 == "Aries" || scope2 == "Leo" || scope2 == "Sagittarius")
            {
                 cout<<scope1<<" and "<<scope2<<" are compatible Fire signs.";
            }
            else 
            {
            cout<<scope1<<" and "<<scope2<<" are not compatible signs.";
            }
        }
        //Earth Signs
        else if (scope1 == "Taurus" || scope1 == "Virgo" || scope1 == "Capricorn")
        { 
            if (scope2 == "Taurus" || scope2 == "Virgo" || scope2=="Capricorn")
            {
                 cout<<scope1<<" and "<<scope2<<" are compatible Earth signs.";
            }
            else 
            {
            cout<<scope1<<" and "<<scope2<<" are not compatible signs.";
            }
        }
        //Air Signs
        else if(scope1 == "Gemini" || scope1 == "Libra" || scope1 == "Aquarius")
        {
            if (scope2 == "Gemini" || scope2 == "Libra" || scope2 == "Aquarius")
            {
                 cout<<scope1<<" and "<<scope2<<" are compatible Air signs.";
            }
            else 
            {
            cout<<scope1<<" and "<<scope2<<" are not compatible signs.";
            }
        }
        //Water Signs
        else if(scope1 == "Cancer" || scope1 == "Scorpio" || scope1 == "Pisces")
        {
            if (scope2 == "Cancer" || scope2 == "Scorpio" || scope2 == "Pisces")
            {
                 cout<<scope1<<" and "<<scope2<<" are compatible Water signs.";
            }
            else 
            {
            cout<<scope1<<" and "<<scope2<<" are not compatible signs.";
            }
        }
            break;
        default:
            cout<<"Not an Option"<<endl;
    }//End of Switch Case

    //Clean Up
    
    //Exit stage right!
    return 0;
}