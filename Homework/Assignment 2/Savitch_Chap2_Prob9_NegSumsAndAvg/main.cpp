
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Roman Hernandez 
 * Created on January 6, 2021, 11:59 AM
 * Purpose: 
 */

#include <iostream> //I/O Library
#include <iomanip>
using namespace std;

//User Libraries 

//Global Constants 
//Math, Science, Universal, Conversions, High Dimensioned Arrays 

//Function Prototypes  

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
    float   number, //10 numbers to read Input into the program
            totSum, //tot represent total
            negSum, //neg  represents negative
            posSum; //pos represents positive
        
    //Initialize Variables 
cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    
    
    //Map Inputs to Outputs -> Process
    cin>>number;  
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
  
    cin>>number;  
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    
    cin>>number;  
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
   
    
    cin>>number;  
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
   
    
    cin>>number;  
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    cin>>number; 
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    cin>>number;  
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    cin>>number;  
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    cin>>number;  
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    cin>>number;  
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    //Final Calculation
    totSum=posSum+negSum;
    
    //Display Input/Outputs 
    cout<<"Negative sum ="<<setw(4)<<negSum<<endl;
    cout<<"Positive sum ="<<setw(4)<<posSum<<endl;
    cout<<"Total sum    ="<<setw(4)<<totSum;
    //Exit the Program - Cleanup 

    return 0;
}

