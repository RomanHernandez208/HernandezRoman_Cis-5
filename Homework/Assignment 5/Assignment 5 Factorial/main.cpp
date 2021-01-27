/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 26, 2021, 11:24 PM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int inP);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int inP,
        ansW;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin>>inP;
    ansW=fctrl(inP);
    
    //Output data
    cout<<inP<<"! = "<<ansW;
    //Exit stage right!
    return 0;
}

int fctrl(int inP){
    int ansW=1;
    for (int x=2; x<=inP; x++)
    {
        ansW*=x;
    }
    return ansW;
}

