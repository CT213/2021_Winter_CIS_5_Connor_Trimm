/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
//System Libraries
#include <iostream> //I/O Libary
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays


//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) 
{
    //Initialize the Random Number Seed
    
    //Declare Variables
    char    choice, ampm;
    string half;
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
        cin>>choice;
            if (choice == 'y' || choice == 'Y')
            {
            cout<<endl;
            
            }
    }while (choice =='Y' || choice == 'y');
    return 0;   
}
