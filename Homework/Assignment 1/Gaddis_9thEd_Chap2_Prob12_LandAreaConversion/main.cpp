
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Roman Hernandez 
 * Created on January 6th, 7:00PM 
 * Details: Gaddis 9th Edition Chapter 2 Problem 12 
 * Purpose: Finding the amount of Feet^2 
 */

#include <iostream> //I/O Library
#include <cmath>    //Math Library 
using namespace std;

//User Libraries 

//Global Constants 
//Math, Science, Universal, Conversions, High Dimensioned Arrays 
const float CNVAFT2=43560; //Conversion from acres to Ft^2 
const float CVFTMLS=1/5280.0f;//Conversion from Ft to miles 
//Function Prototypes  

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables 
    float areaAc,// area in acres 
          arMls2,// Area in miles Squared 
          sideMls,// Perimeter side in miles 
          perimtr;//Perimeter in miles 
    //Initialize Variables 
    areaAc=640/4;
   
    
    //Map Inputs to Outputs -> Process
            arMls2=areaAc*CNVAFT2*CVFTMLS*CVFTMLS;
            sideMls=sqrt(arMls2); 
            perimtr+4*sideMls; 
    //Display Input/Outputs 
    cout<<areaAc<<"acres = "<<arMls2<<" miles^2 "<<endl; 
    cout<<"1 side of the Area =  "<<sideMls<<"miles"<<endl;
    cout<<"The Perimeter "<<perimtr<<"miles"<<endl; 
    //Exit the Program - Cleanup 

    return 0;
}

