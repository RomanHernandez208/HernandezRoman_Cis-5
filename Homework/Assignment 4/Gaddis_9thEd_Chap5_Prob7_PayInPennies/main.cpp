/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 22, 2021, 9:23 PM
 */

#include <iostream>  //Input/Output Library
#include <math.h>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float pDay1,//first day of pay 
          dayCnt,//payment after the first day continued
          ttlPay,//total pay concluded
          daysX;
    int   numDays,//number of days 
          day;//day 1 

    //Initialize or input i.e. set variable values
    pDay1 = 0.01f;
    day= 1;
    daysX=0;
    
    cin>>numDays;
    //Failure Prompt
    while (numDays<1){
        cout<<"Number of Days is Invalid."<<endl;
        cout<<"Input Number Greater or Equal to 1."<<endl;
        cin>>numDays;
    }
    //Pay Calculation 
    while (numDays>=1, day<=numDays){
        dayCnt= pow(2,daysX);
        dayCnt=dayCnt*1.0f;
        ttlPay+=pDay1*dayCnt;
        day++;
        daysX++;
    }
    
    cout<<"Pay = $"<<fixed<<setprecision(2)<<ttlPay;
    
    //Exit stage right or left!
    return 0;

}

