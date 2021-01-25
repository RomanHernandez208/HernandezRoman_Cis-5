/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 23, 2021, 5:55 PM
 */

#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int nmbr,//integer to be entered 
        sum=0;//sum of all integers
    //Initialize or input i.e. set variable values
    cin>>nmbr;
    //Map inputs -> outputs
    for(int i=1; i<=nmbr;i++){
            sum+=i;
    }
    //Display the outputs
    cout<<"Sum = "<<sum;
    //Exit stage right or left!
    return 0;
}

