
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Roman Hernandez 
 * Created on January 5, 2021, 11:38 AM
 * Purpose: Gaddis Average Temperature Problem
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
    float tmpNY,//new York temp in Fahrenheit
    tmpDen,//Denver Temp in Fahrenheit
    tmpPhnx,//Phoenix Temp in Fahrenheit 
    avgTmp,//Average Temperature before the increase 
    perChng;//Percentage Change 
    
    
    //Initialize Variables 
    tmpNY=85;
    tmpDen=88;
    tmpPhnx=106;
    perChng=1+2.0e-2f;
    
    //Multiply by the percentage change   
    tmpNY*=perChng;
    tmpDen*=perChng;
    tmpPhnx=tmpPhnx*perChng;
    
    //Map Inputs to Outputs -> Process
    avgTmp=(tmpNY+tmpDen+tmpPhnx)/3;
    
    //Display Input/Outputs 
    cout<<"New York Temperature = "<<tmpNY<<"Fahrenheit"<<endl; 
    cout<<"Denver Temperature = "<<tmpDen<<"Fahrenheit"<<endl;
    cout<<"Phoenix Temperature = "<<tmpPhnx<<"Fahrenheit"<<endl;
    cout<<"Average Temperature "<<avgTmp<<"Fahrenheit"<<endl;
     
    
    //Exit the Program - Cleanup 

    return 0;
}

