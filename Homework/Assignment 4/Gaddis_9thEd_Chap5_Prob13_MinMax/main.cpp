/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 23, 2021, 7:14 PM
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
    int     nmbr,
            minInt,
            maxInt;
    
    //Initialize or input i.e. set variable values
    cin>>nmbr;
    minInt = maxInt = nmbr;
    
    while (nmbr!=-99){
        if (nmbr < minInt)
            minInt=nmbr;
        if (nmbr > maxInt)
            maxInt=nmbr;
            cin>>nmbr;
    }
    //Map inputs -> outputs
    //Display the outputs
cout<<"Smallest number in the series is "<<minInt<<endl;
cout<<"Largest  number in the series is "<<maxInt;
    //Exit stage right or left!
    return 0;
}
