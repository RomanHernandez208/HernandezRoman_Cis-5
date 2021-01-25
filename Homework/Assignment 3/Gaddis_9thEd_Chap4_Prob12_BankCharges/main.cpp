/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Roman Hernandez
 * Problem: A bank charges $10 per month plus the following check fees for a commercial checking

account:

$.10 each for fewer than 20 checks

$.08 each for 20–39 checks

$.06 each for 40–59 checks

$.04 each for 60 or more checks

The bank also charges an extra $15 if the balance of the account falls below $400

(before any check fees are applied). Write a program that asks for the beginning balance

and the number of checks written. Compute and display the bank’s service fees

for the month.

Input Validation: Do not accept a negative value for the number of checks written. If

a negative value is given for the beginning balance, display an urgent message indicating

the account is overdrawn.
 * Created on January 20, 2021, 8:18 PM
 */

#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    float check,
          blnce,
          mnthFee,
          chkFee,
          newBal,
          lowFee;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>blnce>>check;
    mnthFee = 10;
    //Map inputs -> outputs
    if (check<0)
    {
        cout<<"Number of checks is invalid."<<endl;
    }
    else if (check>0)
    {
        
            if (blnce<0)
            {
                cout<<"WARNING: ACCOUNT IS OVERDRAWN.";
            }
            
    else if (blnce>0)
        {
            
        if (0<=check&&check<=20)
        chkFee = check *0.10f;
        else if (20<=check&&check<=39)
        chkFee = check * 0.08f;
        else if (40<=check&&check<=59)
        chkFee = check * 0.06f;
        else if (check>=60)
        chkFee = check * 0.04f;
        
        blnce<400?lowFee=15.00f: lowFee=0.00;
        newBal=blnce-chkFee-mnthFee-lowFee;
        
        }
        
        
    }
        
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Balance     $"<<setw(9)<<blnce<<endl;
    cout<<"Check Fee   $"<<setw(9)<<chkFee<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<mnthFee<<endl;
    cout<<"Low Balance $"<<setw(9)<<lowFee<<endl;
    cout<<"New Balance $"<<setw(9)<<newBal;
    //Exit stage right or left!
    return 0;
}
