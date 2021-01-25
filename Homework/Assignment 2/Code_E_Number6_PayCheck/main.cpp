/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 16, 2021, 5:04 PM
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
    //Set the random number seed
    
    //Declare Variables
    float pRate, //pay pay rate 
          numHrs, //Number of Hours Worked
          grsPay; //Gross Pay 
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"This Program Displays and Calculates Gross PayCheck"<<endl;
    cout<<"Input your pay rate in $'s/hr and the number of hours worked"<<endl;
    cin>>pRate>>numHrs;
    
    
    if(numHrs<40) //under 40 hours worked
    grsPay = pRate * numHrs;
    
    else if(numHrs>=40)//over 40 hours worked
    grsPay = (pRate * 40)+(numHrs-40)*(2*pRate);
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2)<<"PayCheck : $"<<setw(7)<<grsPay;
    //Exit stage right or left!
    return 0;
}

