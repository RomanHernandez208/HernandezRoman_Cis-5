/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 * Homework Week: 1 
 * Problem: 1 Painters Problem
 * Created on January 6, 2021, 12:07 PM
 */

#include <iostream> //I/O Library
using namespace std;

//User Libraries 

//Global Constants 
//Math, Science, Universal, Conversions, High Dimensioned Arrays 

//Function Prototypes  

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables 
    unsigned short height, //Height of the Fence in Feet 
                   length, //Length of the Fence in Feet 
                   pntCov, // Paint Coverage / can in Ft^2
                   srfArea, //Surface Area to Paint in Ft^2 
                   numGlns;// Number of gallons of paint 
                 
    
    //Initialize Variables 
            height=6;
            length=100;
            pntCov=340;
    
    //Map Inputs to Outputs -> Process
            srfArea=2*2*height*length;// paint twice front and back of the fence
            numGlns= srfArea/pntCov+1;
            
    //Display Input/Outputs 
    cout<<" Number of Gallons Required = "<<numGlns<<" to paint a " ;
    cout<<height<<" x "<<length<<" ft^2 fence front and back twice "<<endl;
    
    //Exit the Program - Cleanup 

    return 0;
}


