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

//System Libraries
#include <iostream> //I/O Libary
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal,Conversions, High dimensioned arrays
const float LITER=0.264179;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
   int max, min, num = 0, first = 1, sum = 0, count = 0;
   while (1)
   {
      cin >> num;
      if(num == -99){
         break;
      }
      count += 1;
      if(first == 1){
         max = num;
         min = num;
         sum = 0;
         first = 0;
      }
      if(max < num){
         max = num;
      }
      if(min > num){
         min = num;
      }
      sum += num;
   }

   cout<<"Smallest number in the series is "<<min<<endl;
   cout<<"Largest  number in the series is "<<max;

   return 0;
}

    
/*
    0 means equal
    >0 means greater
    <0 means lower

*/