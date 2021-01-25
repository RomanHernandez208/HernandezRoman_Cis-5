/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roman
 *
 * Created on January 10, 2021, 9:01 PM
 * Gaddis Chapter 2 Problem 2 Sum Of Two Numbers
 */

#include <iostream> //I/O Library
using namespace std;

//User Libraries 

//Global Constants 
//Math, Science, Universal, Conversions, High Dimensioned Arrays 

//Function Prototypes  

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
    short   a, //variable for 50
            b, //variable for 100
            total; //total of a and b
    //Initialize Variables 
            a = 50,
            b = 100,
            
    //Map Inputs to Outputs -> Process
            total = a + b;
    //Display Input/Outputs 
            cout<<" The value "<<a<<" plus the value "<<b;
            cout<<" Equals the value "<<total;
    //Exit the Program - Cleanup 

    return 0;
}
