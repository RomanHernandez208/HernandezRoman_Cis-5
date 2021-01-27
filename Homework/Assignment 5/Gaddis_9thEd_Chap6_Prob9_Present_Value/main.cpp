/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 26, 2021, 11:28 PM
 */

#include <iostream>  //I/O Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
float  psntVal(float,float,float,int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float fV,
          intrS,
          pV;
    int   nmYrs;
    //Initialize Variables
    cout<<"This is a Present Value Computation"<<endl;
    cout<<"Input the Future Value in Dollars"<<endl;
    cin>>fV;
    cout<<"Input the Number of Years"<<endl;
    cin>>nmYrs;
    cout<<"Input the Interest Rate %/yr"<<endl;
    cin>>intrS;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The Present Value = $";
    cout<<psntVal(pV, fV, intrS, nmYrs);
    //Exit the Program - Cleanup
    return 0;
}
float psntVal(float pV, float fV, float intrS, int nmYrs){
    pV=fV/pow(1+(intrS/100.00f),nmYrs);
    return pV;
}

